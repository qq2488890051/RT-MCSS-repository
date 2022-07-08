/* 
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation.
 * You should have received a copy of the GNU General Public License  
 * along with this program.  If not, see http://www.gnu.org/licenses/. 
*/


#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "sheduler.h"


class QCPItemLine;
class QTableWidgetItem;
class Sheduler;
class VZOPclass;
class QCPItemText;


namespace Ui {
class MainWindow;
}

typedef struct PointTask
{
   double x;
   double y;
   QString remark;  
   
}PointTask;

typedef struct TickTime
{
   double x1;
   double y1;
   
   double x2;
   double y2;
   
   bool isGetExecut;
   bool isPassDeadlineAt_x2_Point;
   
}TickTime;


typedef struct TAB
{
    int T;
    int C;
    int D;
    int J;                              //It can also be represented by A, arrival offset
    QString nametask;
    QCPItemText* textTask;
    enum stateTask state;               //0:ready,1:suspend
    int tickHaveDone;       
    QList<TickTime*> listTick;
    
    /***************************** The following is the original operating system TCB ****************************/    
    int prio;
    int core;
    //The length of the time slice allocated by the round-robin scheduling of time slices with the same priority, the unit is 1
    int timeQuanta; 
//    OS_TCB* tcb;
    
}TAB;



typedef struct CoreInfoProcessor
{
    int idCore;
    QList<TAB*> listTask;
    int comMulti;
    QList<TickTime*> listTickTime_cpu;
    QColor colorTask;
    QColor colorCpu;
    
    QList<QList<QCPItemLine*>> listArro;    //Two-dimensional array
    QList<QCPItemLine*> listArroDeadlinePass;
    QCPItemText* textCore;
    bool flagDeadlinePassCore=false;
}CoreInfoProcessor;





class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    
    QColor arrayColor[8]={QColor(255,100,100),   QColor(100,100,255),   QColor(130,255,130),  QColor(60,180,240), QColor(100,150,100),  QColor(150,80,150), QColor(150,150,80), QColor(255,150,120) };
    QColor arrayColorCore[8]={QColor(255,0,0),   QColor(0,0,255),       QColor(0,255,0),      QColor(0,128,192),  QColor(0,128,64),     QColor(128,0,128),  QColor(128,128,0),  QColor(255,128,64) };
    
    float highWave=0.5;
    float highArrow=0.9;
    float highArrowDeadline=0.6;
    
    int widthPenWave=2;
    int widthPenArrow=1;
    int widthPenArrowDeadline=1;
    
    bool flagChangeCellManual;
    Sheduler* scheduder;
    VZOPclass *vz_m;
    
    
    QList<CoreInfoProcessor*> listCore;
    
    int getNumAllTask(QList<CoreInfoProcessor*> argListCoreInfo);
    int maxComMultiValue(QList<CoreInfoProcessor*> listCoreTmp);
    CoreInfoProcessor* findCoreInfoProcessorFromListByIdCore(QList<CoreInfoProcessor *> argListCore, int core);
    void fillTaskType();
    bool initPlot();
    void stateUpdate(int tick);
    int GreatestCommonDivisor(int a, int b);
    int LeastCommonMultiple(int a, int b);
    int LeastCommonMultiple(QVector<int> vec);
    bool isFullTask(int i);
    bool isConformRulesInTabelWidgetTaskSet();
    void Sleep_my(int msec);
    
private slots:
    void on_action_X_triggered();

    void on_action_A_triggered();

    void on_action_H_triggered();

    void on_pushButtonSched_clicked();
    
    void on_pushButtonAddTask_clicked();
    
    void on_pushButtonDeletTask_clicked();

        
    void on_tableWidget_cellChanged(int row, int column);
    
    void on_tableWidget_cellDoubleClicked(int row, int column);
                             
        
    void on_pushButtonAutoRange_clicked();
    
    void on_radioButtonX_clicked();
    
    void on_radioButtonY_clicked();
    
    void on_radioButtonXY_clicked();
    
    void on_pushButtonMoreInfo_clicked();
    
private:
    Ui::MainWindow *ui;
    /*What is returned is the id of the kernel sorted from small to large, 
     * where the kernel id value is not necessarily continuous, because 
     * any number of kernels is supported, and the id of the kernel also supports any specified*/
    QList<int> getIDcoreProcessor();   
    void sortCoreID(QList<int>& listint);   
    float computeUtilizition();    
    float computeUtilizitionByCoreList(QList<CoreInfoProcessor*> argListCoreInfo);
    void updateTabelWidgetInfo();
    void sortCoreTaskSetByPrio(CoreInfoProcessor* argCoreInfo);
    
    void coreSchedResultTabelUpdate();    
    void missDeadlineTableUpdate();
    int findRowByTaskNameInTabelWidgetTaskSet(QString nameTask);
};

#endif // MAINWINDOW_H
