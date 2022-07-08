/* 
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation.
 * You should have received a copy of the GNU General Public License  
 * along with this program.  If not, see http://www.gnu.org/licenses/. 
*/



#include "Sched/mainwindow.h"
#include "ui_mainwindow.h"
#include "dialogabout.h"
#include "dialoghelp.h"
#include "Sched/sheduler.h"

#include <QTableWidget>
#include <QFileDialog>
#include <QMessageBox>
#include <QFont>

#define MAX_NUM_TASK 50

TAB Smix[MAX_NUM_TASK];


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setFixedSize(size());
    scheduder = new Sheduler;
        
    
    ui->tableWidget->horizontalHeader()->setSectionResizeMode(QHeaderView::ResizeToContents);
    ui->tableWidgetCoreResult->horizontalHeader()->setSectionResizeMode(QHeaderView::ResizeToContents);
    ui->tableWidgetInfoTaskSet->horizontalHeader()->setSectionResizeMode(QHeaderView::ResizeToContents);
    ui->tableWidgetMissDeadline->horizontalHeader()->setSectionResizeMode(QHeaderView::ResizeToContents);
    
    
    // Statistics of total cpu utilization
    updateTabelWidgetInfo();
    
    ui->tableWidgetMissDeadline->setEditTriggers(QAbstractItemView::NoEditTriggers);
    
}

MainWindow::~MainWindow()
{
    delete ui;
}

int MainWindow::getNumAllTask(QList<CoreInfoProcessor *> argListCoreInfo)
{
    int res=0;
    for (int i = 0; i < argListCoreInfo.size(); ++i) {
        res += argListCoreInfo.at(i)->listTask.size();
    }
    return res;
}

int MainWindow::maxComMultiValue(QList<CoreInfoProcessor *> listCoreTmp)
{
    int res=0;
    for (int i = 0; i < listCoreTmp.size(); ++i) {
        if(listCoreTmp.at(i)->comMulti > res)
            res = listCoreTmp.at(i)->comMulti;
    }
    return res;
}

void MainWindow::sortCoreID(QList<int>& listint)    
{
    int temp;
    for (int i = 1; i < listint.size(); i++)            //compare times
    {
        for (int j = listint.size() - 1; j >= i; j--)   
        {
            if (listint[j] < listint[j - 1])            
            {
                temp = listint[j];
                listint[j] = listint[j - 1];
                listint[j - 1] = temp;
            }
        }
    }
}

/*This task set information table cannot be updated from listCore, because listcore will only be updated 
 * when scheduling starts. If you update it anywhere, you may be simulating, but the table content on 
 * the interface has been changed. Cause listcore (including all data, including data used in real time for drawing) 
 * to be cleared and other errors, curve drawing errors
*/
void MainWindow::updateTabelWidgetInfo()
{
    QList<CoreInfoProcessor*> listCoreTmp;
    
    QList<int> listIdCoreTmp = getIDcoreProcessor();
    for (int i = 0; i < listIdCoreTmp.size(); ++i) {
        CoreInfoProcessor* coretmp = new CoreInfoProcessor;
        coretmp->idCore = listIdCoreTmp.at(i);
        listCoreTmp.append(coretmp);
    }
    for(int i=0; i<ui->tableWidget->rowCount(); i++)
    {
        TAB* ttmp=new TAB; 
        ttmp->T = ui->tableWidget->item(i, 1)->text().toInt();
        ttmp->C = ui->tableWidget->item(i, 2)->text().toInt();
        ttmp->core = ui->tableWidget->item(i, 7)->text().toInt();
        
        CoreInfoProcessor* coretmp = findCoreInfoProcessorFromListByIdCore(listCoreTmp,ttmp->core);
        if(coretmp == nullptr)
            QMessageBox::warning(this,"!!!","Null pointer exception!");
        coretmp->listTask.append(ttmp); 
    }
    
    ui->tableWidgetInfoTaskSet->setRowCount(listCoreTmp.size()+1);
    QTableWidgetItem* item;
    //set cpu
    item = new QTableWidgetItem ("total");
    ui->tableWidgetInfoTaskSet->setItem(0, 0, item);   
    //set number of tasks
    item = new QTableWidgetItem (QString::number(getNumAllTask(listCoreTmp)));
    ui->tableWidgetInfoTaskSet->setItem(0, 1, item);    
    //set total utilizaiton
    item = new QTableWidgetItem (QString::number(computeUtilizition()));
    ui->tableWidgetInfoTaskSet->setItem(0, 2, item); 
    
    for (int i = 0; i < listCoreTmp.size(); ++i) {
        item = new QTableWidgetItem ("core "+QString::number(listCoreTmp.at(i)->idCore));
        ui->tableWidgetInfoTaskSet->setItem(i+1, 0, item);   
        item = new QTableWidgetItem (QString::number(listCoreTmp.at(i)->listTask.size()));
        ui->tableWidgetInfoTaskSet->setItem(i+1, 1, item);    
        QList<CoreInfoProcessor*> listCoreTmp1;
        listCoreTmp1.append(listCoreTmp.at(i));
        item = new QTableWidgetItem (QString::number(computeUtilizitionByCoreList(listCoreTmp1)));
        ui->tableWidgetInfoTaskSet->setItem(i+1, 2, item); 
    }
    
    //Finally, remember to recycle the memory of the temporary listCoreTmp
    for (int i = 0; i < listCoreTmp.size(); ++i) {
        for (int j = 0; j < listCoreTmp.at(i)->listTask.size(); ++j) {
            delete listCoreTmp.at(i)->listTask.at(j);   //delete TAB            
        }
        delete listCoreTmp.at(i);                       //delete core
    }
    
}

void MainWindow::sortCoreTaskSetByPrio(CoreInfoProcessor *argCoreInfo)
{
    TAB* temp;
    for (int i = 1; i < argCoreInfo->listTask.size(); i++)              //compare times
    {
        for (int j = argCoreInfo->listTask.size() - 1; j >= i; j--) 
        {
            if (argCoreInfo->listTask[j]->prio < argCoreInfo->listTask[j - 1]->prio)         
            {
                temp = argCoreInfo->listTask[j];
                argCoreInfo->listTask[j] = argCoreInfo->listTask[j - 1];
                argCoreInfo->listTask[j - 1] = temp;
            }
        }
    }
}
QList<int> MainWindow::getIDcoreProcessor()
{
    QList<int> res;
    //Read the task parameters in the table and get the id of each core
    for(int i=0; i<ui->tableWidget->rowCount(); i++)
    {
        int id = ui->tableWidget->item(i, 7)->text().toInt();
        if(!res.contains(id))
            res.append(id);
    }
    sortCoreID(res);
    return res;
}

CoreInfoProcessor *MainWindow::findCoreInfoProcessorFromListByIdCore(QList<CoreInfoProcessor*> argListCore,int core)
{
    for (int i = 0; i < argListCore.size(); ++i) {
        if(argListCore.at(i)->idCore == core)
            return argListCore.at(i);
    }
    return nullptr;
}

void MainWindow::fillTaskType()
{
    QTableWidgetItem* item;
    for(int i=0; i<ui->tableWidget->rowCount(); i++)
    {
        if(ui->tableWidget->item(i,4)->text().toInt() == 0)
        {
            if(ui->tableWidget->item(i,2)->text().toInt() < ui->tableWidget->item(i,3)->text().toInt())
            {
                //set type
                item = new QTableWidgetItem (QString::number(1));   //sporadic task J=0,C<D
                ui->tableWidget->setItem(i, 6, item);   
            }
            else
            {
                item = new QTableWidgetItem (QString::number(0));   //fixed-point task
                ui->tableWidget->setItem(i, 6, item);   
            }
        }
        else
        {
            item = new QTableWidgetItem (QString::number(0));       
            ui->tableWidget->setItem(i, 6, item); 
        }
    }    
}

bool MainWindow::initPlot()
{
    if(ui->tableWidget->rowCount()==0)
    {
        QMessageBox::warning(this,"!!!","There are no tasks in the table, please add tasks!");
        return false;        
    }
    //First try to read and convert the task parameters in the table to see if the conversion is successful, 
    //that is, to see if this line meets the requirements for filling in the task parameters
    if(!isConformRulesInTabelWidgetTaskSet())
        return false;
    
    fillTaskType();
    
    /************************************** Getting ready for drawing ******************************************/
    //Clean up all curves and reclaim the memory they occupy
    ui->customPlot->clearGraphs();
    
     
    for (int i = 0; i < listCore.size(); ++i) {
        for (int j = 0; j < listCore.at(i)->listArro.size(); ++j) {
            for (int k = 0; k < listCore.at(i)->listArro.at(j).size(); ++k) {
                ui->customPlot->removeItem(listCore.at(i)->listArro.at(j).at(k));
            }
            listCore.at(i)->listArro[j].clear();
        }
        listCore.at(i)->listArro.clear();
    }
  
    for (int i = 0; i < listCore.size(); ++i) {
        for (int j = 0; j < listCore.at(i)->listArroDeadlinePass.size(); ++j) {
            ui->customPlot->removeItem(listCore.at(i)->listArroDeadlinePass.at(j));
        }
        listCore.at(i)->listArroDeadlinePass.clear();
    }
    

    for (int i = 0; i < listCore.size(); ++i) 
    {
        for (int j = 0; j < listCore.at(i)->listTask.size(); ++j) 
        {
            for (int k = 0; k < listCore.at(i)->listTask.at(j)->listTick.size(); ++k) 
            {
                delete listCore.at(i)->listTask.at(j)->listTick.at(k);                  //delete TickTime
            }
            listCore.at(i)->listTask.at(j)->listTick.clear();
            ui->customPlot->removeItem(listCore.at(i)->listTask.at(j)->textTask);       //delete textTask
            delete listCore.at(i)->listTask.at(j);                                      //delete TAB
        }
        listCore.at(i)->listTask.clear(); 

        for (int j = 0; j < listCore.at(i)->listTickTime_cpu.size(); ++j) {
            delete listCore.at(i)->listTickTime_cpu.at(j);                              //delete TickTime_cpu
        }
        listCore.at(i)->listTickTime_cpu.clear();   
        ui->customPlot->removeItem(listCore.at(i)->textCore);                           //delete textCore
        delete listCore.at(i);                                                          //delete CoreInfoProcessor
    }
    listCore.clear();
    
    
    
    //global variable reinitialization
    flagChangeCellManual = false;
    

    QList<int> listIdCoreTmp = getIDcoreProcessor();
    for (int i = 0; i < listIdCoreTmp.size(); ++i) {
        CoreInfoProcessor* coretmp = new CoreInfoProcessor;
        coretmp->idCore = listIdCoreTmp.at(i);
        coretmp->colorTask = arrayColor[i%8];
        coretmp->colorCpu = arrayColorCore[i%8];
        listCore.append(coretmp);
    }

    for(int i=0; i<ui->tableWidget->rowCount(); i++)
    {
        TAB* ttmp=new TAB; 
        ttmp->nametask=ui->tableWidget->item(i,0)->text();
        ttmp->T = ui->tableWidget->item(i, 1)->text().toInt();
        ttmp->C = ui->tableWidget->item(i, 2)->text().toInt();
        ttmp->D = ui->tableWidget->item(i, 3)->text().toInt();
        ttmp->J = ui->tableWidget->item(i, 4)->text().toInt();
        ttmp->prio = ui->tableWidget->item(i, 5)->text().toInt();
        ttmp->core = ui->tableWidget->item(i, 7)->text().toInt();
        
        ttmp->state=WAIT_FNS;               //0:ready,1:suspend
        ttmp->tickHaveDone=0;               //Number of time slices that have been executed
        
        CoreInfoProcessor* coretmp = findCoreInfoProcessorFromListByIdCore(listCore,ttmp->core);
        if(coretmp == nullptr)
            QMessageBox::warning(this,"!!!","Null pointer exception!");

        coretmp->listTask.append(ttmp); 
    }

    for (int i = 0; i < listCore.size(); ++i) {
        sortCoreTaskSetByPrio(listCore[i]);
    }
    
    // Update the least common multiple on each core
    for (int r = 0; r < listCore.size(); ++r) {
        QVector<int> vec;
        for (int i = 0; i < listCore.at(r)->listTask.size(); ++i) {
            vec.push_back(listCore.at(r)->listTask.at(i)->T);
        }
        listCore.at(r)->comMulti = LeastCommonMultiple(vec); 
    }
    
    // give the axes some labels:
    ui->customPlot->xAxis->setLabel("tick");
    ui->customPlot->yAxis->setLabel("task priority：low -> high");
    ui->customPlot->setInteractions(QCP::iRangeDrag | QCP::iRangeZoom);
    ui->customPlot->yAxis->setRangeUpper((double)getNumAllTask(listCore)+1);
    ui->customPlot->yAxis->setRangeReversed(true);
    
    QFont font;
    font.setPixelSize(12);
    font.setFamily("consolas");
    ui->customPlot->legend->setFont(font);
    ui->customPlot->legend->setBrush(QColor(100, 100, 100, 0));
    ui->customPlot->legend->setVisible(false);
    
    ui->customPlot->yAxis->setRange(-1,(double)getNumAllTask(listCore)+2*listCore.size());
    ui->customPlot->xAxis->setRange(-0.05*maxComMultiValue(listCore),1.05*maxComMultiValue(listCore));
    ui->customPlot->axisRect()->setupFullAxesBox();
    ui->customPlot->axisRect()->setRangeZoomFactor(0.5,1);
    
    QPen pen;
    pen.setWidth(widthPenWave);

    for (int i = 0; i < listCore.size(); ++i) {
        for (int j = 0; j < listCore.at(i)->listTask.size(); ++j) {
            ui->customPlot->addGraph();
            pen.setColor(listCore.at(i)->colorTask);
            ui->customPlot->graph(ui->customPlot->graphCount()-1)->setPen(pen);
            ui->customPlot->graph(ui->customPlot->graphCount()-1)->setName(listCore.at(i)->listTask.at(j)->nametask+" "+ "( T:"+QString::number(listCore.at(i)->listTask.at(j)->T)+" C:"+QString::number(listCore.at(i)->listTask.at(j)->C)+" D:"
                                                                           +QString::number(listCore.at(i)->listTask.at(j)->D)+" J:"+QString::number(listCore.at(i)->listTask.at(j)->J)+"  core: "+QString::number(listCore.at(i)->idCore)+" )");
        }
        //Add another cpu_core timeline
        ui->customPlot->addGraph();
        pen.setWidth(widthPenWave+1);
        pen.setColor(listCore.at(i)->colorCpu);
        ui->customPlot->graph(ui->customPlot->graphCount()-1)->setPen(pen);
        ui->customPlot->graph(ui->customPlot->graphCount()-1)->setName("core: "+QString::number(listCore.at(i)->idCore));
    }    
    
    pen.setWidth(widthPenArrow);
    int cntTask=0;
    for (int k = 0; k < listCore.size(); ++k) {

        pen.setColor(listCore.at(k)->colorTask);
        for (int i = 0; i < listCore.at(k)->listTask.size(); ++i)
        {
            QList<QCPItemLine*> tmp;
            int numArro=listCore.at(k)->comMulti/listCore.at(k)->listTask.at(i)->T;
            for (int j = 0; j < numArro+1; ++j)
            {
                QCPItemLine* arrow = new QCPItemLine(ui->customPlot);
                arrow->setPen(pen);            
                arrow->start->setCoords(j*listCore.at(k)->listTask.at(i)->T,i+cntTask+1);   
                arrow->end->setCoords(j*listCore.at(k)->listTask.at(i)->T,i+cntTask+1-highArrow); 
                arrow->setHead(QCPLineEnding::esFlatArrow);
                tmp.append(arrow);
            }
            listCore.at(k)->listArro.append(tmp);
        }
        
        pen.setColor(listCore.at(k)->colorCpu);        
        QList<QCPItemLine*> tmp1;
        QCPItemLine* arrow1 = new QCPItemLine(ui->customPlot);
        arrow1->setPen(pen);                
        arrow1->start->setCoords(0,listCore.at(k)->listTask.size()+cntTask+1);   
        arrow1->end->setCoords(0,listCore.at(k)->listTask.size()+cntTask+1-highArrow);
        arrow1->setHead(QCPLineEnding::esFlatArrow);
        tmp1.append(arrow1);
        
        QCPItemLine* arrow2 = new QCPItemLine(ui->customPlot);
        arrow2->setPen(pen);                
        arrow2->start->setCoords(listCore.at(k)->comMulti,listCore.at(k)->listTask.size()+cntTask+1);   
        arrow2->end->setCoords(listCore.at(k)->comMulti,listCore.at(k)->listTask.size()+cntTask+1-highArrow); 
        arrow2->setHead(QCPLineEnding::esFlatArrow);
        tmp1.append(arrow2);
        
        listCore.at(k)->listArro.append(tmp1);
        //The addition of 2 is to give the cpu_core timeline and empty line, so that the multi-core can be clearly distinguished
        cntTask += listCore.at(k)->listTask.size()+2;        
    } 
    
    //Add task name identification text box
    cntTask=0;
    for (int i = 0; i < listCore.size(); ++i) 
    {
        for (int j = 0; j < listCore.at(i)->listTask.size(); ++j)
        {
            QCPItemText* textTask = new QCPItemText(ui->customPlot);

            textTask->position->setCoords(-1, j+cntTask+1); 
            textTask->setText(listCore.at(i)->listTask.at(j)->nametask);
            QFont font;
            font.setFamily("consolas");
            font.setPixelSize(16);
            textTask->setFont(font); 
            textTask->setPen(QPen(listCore.at(i)->colorTask)); 

            listCore.at(i)->listTask.at(j)->textTask=textTask;
        }
        QCPItemText* textCore = new QCPItemText(ui->customPlot);
        textCore->position->setCoords(-1, listCore.at(i)->listTask.size()+cntTask+1); 
        textCore->setText("core"+QString::number(listCore.at(i)->idCore));
        QFont font1;
        font1.setFamily("consolas");
        font1.setPixelSize(16);
        textCore->setFont(font1); 
        textCore->setPen(QPen(listCore.at(i)->colorCpu)); 
        listCore.at(i)->textCore = textCore;
        cntTask += listCore.at(i)->listTask.size()+2;               
    }
    
    
    return true;
}


int MainWindow::GreatestCommonDivisor(int a, int b)
{
    
    int t;
    
    if (a < b) {
        // Swap the two numbers so that the larger number is in the place of a.
        t = a;
        a = b;
        b = t;
    }
    
    while (b != 0) {
        // Use tossing and turning until b is 0.
        t = a % b;
        a = b;
        b = t;
    }
    return a;
}

int MainWindow::LeastCommonMultiple(int a, int b)
{
    
    int t = a * b / GreatestCommonDivisor(a, b);
    return t;
}

int MainWindow::LeastCommonMultiple(QVector<int> vec)
{
    
    int len = vec.size();
    if(len==0)
        return 0;
    if (len == 1)
    {
        return vec.at(0);        
    }    
    if (len == 2)
    {
        int res = LeastCommonMultiple(vec.at(0), vec.at(1));
        return res;        
    }
    
    int result = vec[0];
    for (int i = 1; i < len; ++i)
    {
        result = LeastCommonMultiple(result, vec[i]);
    }
    return result;
    
}


void MainWindow::on_action_X_triggered()
{
    close();
}

void MainWindow::on_action_A_triggered()
{
    (new DialogAbout())->show();
}

void MainWindow::on_action_H_triggered()
{
    (new DialogHelp())->show();
}


void MainWindow::Sleep_my(int msec)
{
    QTime dieTime = QTime::currentTime().addMSecs(msec);
    while( QTime::currentTime() < dieTime )
        QCoreApplication::processEvents(QEventLoop::AllEvents, 10); 
    //During this period, to process interface interaction events for up to 10ms, 
    //you have to return to this function, that is, the delay accuracy is 10ms
}




//Determine whether the tasks in this row (starting from row 0) in the table are completely filled 
//and can be successfully converted into numbers, then the utilization can be counted
bool MainWindow::isFullTask(int i)
{
    bool ok;
    for (int j = 0; j < ui->tableWidget->columnCount(); ++j) {
        //The task type in the 6th column, if the user does not fill in, the software will automatically fill it in, 
        //and it will not be considered that the task parameters are incomplete here.
        if(j==6)
            continue;
        QTableWidgetItem* item=ui->tableWidget->item(i, j);
        if(item==nullptr)
            return false;
        if(j==0)
        {
            if(item->text()=="")
                return false;
            continue;
        }
        if(item->text()=="")
            return false;
        item->text().toInt(&ok);
        if(ok==false)
            return false;
    }
    return true;
}

bool MainWindow::isConformRulesInTabelWidgetTaskSet()
{
    QStringList listName;
    QStringList listPrio;
    for (int i = 0; i < ui->tableWidget->rowCount(); ++i) {
        if(!isFullTask(i))
        {
            QMessageBox::warning(this,"!!!","There is something in the table that cannot be converted");
            return false;
        }
        listName.append( ui->tableWidget->item(i, 0)->text() );
        listPrio.append( ui->tableWidget->item(i, 5)->text() );
    }
    for (int i = 0; i < listName.size(); ++i) {
        if(listName.count(listName.at(i)) > 1)
        {
            QMessageBox::warning(this,"!!!","There are tasks with the same names in the table, please modify them first");
            return false;
        } 
        if(listPrio.count(listPrio.at(i)) > 1)
        {
            QMessageBox::warning(this,"!!!","There are tasks in the table with the same priority, please modify first");
            return false;
        } 
    }
    return true;
}


float MainWindow::computeUtilizition()
{
    QList<QList<int>> lis;  
    if(!isConformRulesInTabelWidgetTaskSet())
        return 0;
    for (int i = 0; i < ui->tableWidget->rowCount(); ++i) {
        
        QList<int> lisint;
        for (int j = 1; j < 3; ++j) {
            lisint.append(ui->tableWidget->item(i, j)->text().toInt());
        }
        lis.append(lisint);
        
    }
    
    float u = 0;
    for (int i = 0; i < lis.size(); ++i) {
        u += (float)( (float)lis.at(i).at(1) / (float)lis.at(i).at(0) );
    }
    return u;
}

float MainWindow::computeUtilizitionByCoreList(QList<CoreInfoProcessor *> argListCoreInfo)
{
    
    float u = 0;
    for (int i = 0; i < argListCoreInfo.size(); ++i) {
        for (int j = 0; j < argListCoreInfo.at(i)->listTask.size(); ++j) {
            u += argListCoreInfo.at(i)->listTask.at(j)->C / (float)argListCoreInfo.at(i)->listTask.at(j)->T;
        }
    }
    return u;
}

void MainWindow::on_pushButtonAddTask_clicked()
{
    ui->tableWidget->setRowCount(ui->tableWidget->rowCount()+1);    
    //set task name
    QTableWidgetItem *item = new QTableWidgetItem ("task"+QString::number(ui->tableWidget->rowCount()));
    ui->tableWidget->setItem(ui->tableWidget->rowCount()-1, 0, item);
    //set default priority
    item = new QTableWidgetItem (QString::number(ui->tableWidget->rowCount()));
    ui->tableWidget->setItem(ui->tableWidget->rowCount()-1, 5, item);
    
}

void MainWindow::on_pushButtonDeletTask_clicked()
{
    ui->tableWidget->removeRow(ui->tableWidget->rowCount()-1);
    updateTabelWidgetInfo();
}



void MainWindow::on_tableWidget_cellChanged(int row, int column)
{
    row=row;
    column=column;
    if(!flagChangeCellManual)
        return;
    flagChangeCellManual=false;
    
    //The task set statistics table needs to be updated only if T, C, and core are changed.
    if(column==1 || column==2 || column==7) 
        updateTabelWidgetInfo();    
}

void MainWindow::on_tableWidget_cellDoubleClicked(int row, int column)
{
    row=row;
    column=column;    
    //   taskName       T           C           prio          core
    if(column==0 || column==1 || column==2 || column==5 || column==7)
        flagChangeCellManual=true;
}





void MainWindow::on_pushButtonSched_clicked()
{    
    ui->pushButtonSched->setEnabled(false);
    
    ui->tableWidgetMissDeadline->clear();
    ui->tableWidgetMissDeadline->setRowCount(2);
    ui->tableWidgetMissDeadline->setColumnCount(1);
    QTableWidgetItem* item;
    //set task name
    item = new QTableWidgetItem ("task name");   
    ui->tableWidgetMissDeadline->setItem(0, 0, item); 
    //Set deadline missed ratio
    item = new QTableWidgetItem ("deadline missed ratio");   
    ui->tableWidgetMissDeadline->setItem(1, 0, item); 
    
    if(initPlot()==false)
    {
        ui->pushButtonSched->setEnabled(true);        
        return;
    }
    /********************** Start ******************/
    
    ui->label_scheduRes->setText("");
    int cntTask=0;
    for (int r = 0; r < listCore.size(); ++r) 
    {
        for (int i = 0; i < listCore.at(r)->comMulti; ++i) {

            bool flagTickOccupy=false;  
            
            TickTime* tt_cpu=new TickTime;
            tt_cpu->isGetExecut=false;
            tt_cpu->isPassDeadlineAt_x2_Point=false;
            
            scheduder->stateUpdate(i,listCore.at(r)->listTask,listCore.at(r)->listTickTime_cpu);
            
            for (int j = 0; j < listCore.at(r)->listTask.size(); ++j) { 
                TickTime* tt=new TickTime;
                tt->isPassDeadlineAt_x2_Point=false;
                
                if(flagTickOccupy==false)       
                {
                    if(listCore.at(r)->listTask.at(j)->state ==READY)   
                    {
                        flagTickOccupy=true;    
                              
                        
                        tt->x1=i;
                        tt->y1=j+cntTask+1-highWave;
                        tt->x2=i+1;
                        tt->y2=j+cntTask+1-highWave;
                        
                        listCore.at(r)->listTask.at(j)->tickHaveDone++; 
                        if(listCore.at(r)->listTask.at(j)->tickHaveDone == listCore.at(r)->listTask.at(j)->C)
                            listCore.at(r)->listTask.at(j)->state = FINISH;
                        
                        tt_cpu->isGetExecut=true;
                        tt_cpu->x1=i;
                        tt_cpu->y1=listCore.at(r)->listTask.size()+cntTask+1-highWave;
                        tt_cpu->x2=i+1;
                        tt_cpu->y2=listCore.at(r)->listTask.size()+cntTask+1-highWave;
                    }
                    else    
                    {      
                        tt->x1=i;
                        tt->y1=j+cntTask+1;
                        tt->x2=i+1;
                        tt->y2=j+cntTask+1;                  
                    }
                }
                else    
                {  
                    tt->x1=i;
                    tt->y1=j+cntTask+1;
                    tt->x2=i+1;
                    tt->y2=j+cntTask+1;
                }
                listCore.at(r)->listTask.at(j)->listTick.append(tt);
                
            }
            if(tt_cpu->isGetExecut==false)
            {
                
                tt_cpu->x1=i;
                tt_cpu->y1=listCore.at(r)->listTask.size()+cntTask+1;
                tt_cpu->x2=i+1;
                tt_cpu->y2=listCore.at(r)->listTask.size()+cntTask+1;
            }
            listCore.at(r)->listTickTime_cpu.append(tt_cpu);
        }
        cntTask += listCore.at(r)->listTask.size()+2;
    }
    
    int comMultiMax = maxComMultiValue(listCore);
    int step=comMultiMax/10+1;   
    for (int i = 0; i < comMultiMax; i += step) 
    {
        int cntCurve = 0;                    
        
        //Delay, the non-blocking delay is used here, so this thread can work normally. 
        //Because of this qcustomplot performance problem, the delay here is cant too small.
        Sleep_my(100); 
        
        for (int r = 0; r < listCore.size(); ++r) 
        {
            for (int j = 0; j < listCore.at(r)->listTask.size(); ++j) 
            {
                for (int k = 0; k < step; ++k)
                {
                    if(i+k >= listCore.at(r)->comMulti)
                        break;
                    if(listCore.at(r)->listTask.at(j)->listTick.at(i+k)->isPassDeadlineAt_x2_Point == true)
                    {
                        QPen pen;                    
                        pen.setWidth(widthPenArrowDeadline);
                        pen.setColor(Qt::red);
                        QCPItemLine* arrow = new QCPItemLine(ui->customPlot);
                        arrow->setPen(pen);
                        arrow->start->setCoords(listCore.at(r)->listTask.at(j)->listTick.at(i+k)->x2,listCore.at(r)->listTask.at(j)->listTick.at(i+k)->y2-highArrowDeadline);  
                        arrow->end->setCoords(listCore.at(r)->listTask.at(j)->listTick.at(i+k)->x2,listCore.at(r)->listTask.at(j)->listTick.at(i+k)->y2); 
                        arrow->setHead(QCPLineEnding::esLineArrow);
                        listCore.at(r)->listArroDeadlinePass.append(arrow);
                    }
                    
                    ui->customPlot->graph( cntCurve )->addData(listCore.at(r)->listTask.at(j)->listTick.at(i+k)->x1,listCore.at(r)->listTask.at(j)->listTick.at(i+k)->y1);
                    ui->customPlot->graph( cntCurve )->addData(listCore.at(r)->listTask.at(j)->listTick.at(i+k)->x2,listCore.at(r)->listTask.at(j)->listTick.at(i+k)->y2);                 
                }
                cntCurve++;                
            }
            
            for (int k = 0; k < step; ++k) 
            {
                if(i+k >= listCore.at(r)->comMulti)  
                    break;
                if(listCore.at(r)->listTickTime_cpu.at(i+k)->isPassDeadlineAt_x2_Point == true)
                {
                    QPen pen;                    
                    pen.setWidth(widthPenArrowDeadline);
                    pen.setColor(Qt::red);
                    QCPItemLine* arrow = new QCPItemLine(ui->customPlot);
                    arrow->setPen(pen);
                    arrow->start->setCoords(listCore.at(r)->listTickTime_cpu.at(i+k)->x2,listCore.at(r)->listTickTime_cpu.at(i+k)->y2-highArrowDeadline);  
                    arrow->end->setCoords(listCore.at(r)->listTickTime_cpu.at(i+k)->x2,listCore.at(r)->listTickTime_cpu.at(i+k)->y2); 
                    arrow->setHead(QCPLineEnding::esLineArrow);
                    listCore.at(r)->listArroDeadlinePass.append(arrow);
                    
                    listCore.at(r)->flagDeadlinePassCore=true; 
                }            
                ui->customPlot->graph( cntCurve )->addData(listCore.at(r)->listTickTime_cpu.at(i+k)->x1,listCore.at(r)->listTickTime_cpu.at(i+k)->y1);
                ui->customPlot->graph( cntCurve )->addData(listCore.at(r)->listTickTime_cpu.at(i+k)->x2,listCore.at(r)->listTickTime_cpu.at(i+k)->y2);       
            }
            cntCurve++;            
        }
        
        //The more data there is, the slower the drawing will be
        ui->customPlot->replot();
    }
    coreSchedResultTabelUpdate();
    missDeadlineTableUpdate();
    ui->pushButtonSched->setEnabled(true);
    
}

void MainWindow::coreSchedResultTabelUpdate()
{
    QTableWidgetItem* item;
    ui->tableWidgetCoreResult->setColumnCount(listCore.size()+1);
    for (int i = 0; i < listCore.size(); ++i) {
        //set core name
        item = new QTableWidgetItem ("core "+QString::number(listCore.at(i)->idCore));   
        ui->tableWidgetCoreResult->setItem(0, i+1, item); 
        if(listCore.at(i)->flagDeadlinePassCore == true)
        {
            float m=0;
            float cnt=0;
            for (int j = 0; j < listCore.at(i)->listTask.size(); ++j) 
            {
                cnt=0;
                for (int k = 0; k < listCore.at(i)->listTask.at(j)->listTick.size(); ++k) {
                    if(listCore.at(i)->listTask.at(j)->listTick.at(k)->isPassDeadlineAt_x2_Point == true)
                        cnt++; 
                }
                m += cnt/(float)listCore.at(i)->listTask.at(j)->listTick.size();
            }
            item = new QTableWidgetItem ("deadline missed ratio "+QString::number(m)); 
            item->setForeground(QBrush(Qt::red));
        }
        else
        {
            item = new QTableWidgetItem ("schedulable"); 
            item->setForeground(QBrush(Qt::green));
        }
        //set core result        
        ui->tableWidgetCoreResult->setItem(1, i+1, item); 
    }
}
void MainWindow::missDeadlineTableUpdate()
{
    QTableWidgetItem* item;  
    float mTotal=0;    
    for (int i = 0; i < listCore.size(); ++i) {
        float m=0;
        float cnt=0;
        int cntColumnTmp = ui->tableWidgetMissDeadline->columnCount();
        ui->tableWidgetMissDeadline->setColumnCount( cntColumnTmp + listCore.at(i)->listTask.size() );
        qDebug()<<"ui->tableWidgetMissDeadline->columnCount()"<<ui->tableWidgetMissDeadline->columnCount();
        for (int j = 0; j < listCore.at(i)->listTask.size(); ++j) 
        {
            cnt=0;
            for (int k = 0; k < listCore.at(i)->listTask.at(j)->listTick.size(); ++k) {
                if(listCore.at(i)->listTask.at(j)->listTick.at(k)->isPassDeadlineAt_x2_Point == true)
                    cnt++; 
            }
            m = cnt/(float)listCore.at(i)->listTask.at(j)->listTick.size();
            mTotal += m;
            
            item = new QTableWidgetItem (listCore.at(i)->listTask.at(j)->nametask);   
            ui->tableWidgetMissDeadline->setItem(0, j+cntColumnTmp, item); 
            
            item = new QTableWidgetItem (QString::number(m));   
            if(m>0)
                item->setForeground(QBrush(Qt::red));
            ui->tableWidgetMissDeadline->setItem(1, j+cntColumnTmp, item);  
        }
    } 
    ui->tableWidgetMissDeadline->setColumnCount(ui->tableWidgetMissDeadline->columnCount()+1);
    
    item = new QTableWidgetItem ("task set");   
    ui->tableWidgetMissDeadline->setItem(0, ui->tableWidgetMissDeadline->columnCount()-1, item); 
    
    item = new QTableWidgetItem (QString::number(mTotal)); 
    if(mTotal>0)
        item->setForeground(QBrush(Qt::red));
    ui->tableWidgetMissDeadline->setItem(1, ui->tableWidgetMissDeadline->columnCount()-1, item); 
    
}

int MainWindow::findRowByTaskNameInTabelWidgetTaskSet(QString nameTask)
{
    for (int i = 0; i < ui->tableWidget->rowCount(); ++i) {
        if(ui->tableWidget->item(i, 0)->text() == nameTask)
            return i;
    }
    return 0;
}



void MainWindow::on_pushButtonAutoRange_clicked()
{
    ui->customPlot->yAxis->setRangeUpper((double)getNumAllTask(listCore)+1);
    ui->customPlot->yAxis->setRangeReversed(true);
    
    ui->customPlot->yAxis->setRange(-1,(double)getNumAllTask(listCore)+2*listCore.size());
    ui->customPlot->xAxis->setRange(-0.05*maxComMultiValue(listCore),1.05*maxComMultiValue(listCore));
    
    ui->radioButtonX->click();
    ui->customPlot->replot();
}

void MainWindow::on_radioButtonX_clicked()
{
    ui->customPlot->axisRect()->setRangeZoomFactor(0.85,1);  
}

void MainWindow::on_radioButtonY_clicked()
{
    ui->customPlot->axisRect()->setRangeZoomFactor(1,0.85);    
}

void MainWindow::on_radioButtonXY_clicked()
{
    ui->customPlot->axisRect()->setRangeZoomFactor(0.85,0.85);
}

void MainWindow::on_pushButtonMoreInfo_clicked()
{
    QMessageBox::information(this,"info","please see menu help!");
}
