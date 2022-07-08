/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>
#include "qcustomplot.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *action_X;
    QAction *action_H;
    QAction *action_A;
    QWidget *centralWidget;
    QCustomPlot *customPlot;
    QPushButton *pushButtonSched;
    QLabel *label_scheduRes;
    QGroupBox *groupBox;
    QTableWidget *tableWidgetInfoTaskSet;
    QGroupBox *groupBox_2;
    QTableWidget *tableWidgetCoreResult;
    QTableWidget *tableWidgetMissDeadline;
    QGroupBox *groupBox_3;
    QTableWidget *tableWidget;
    QPushButton *pushButtonAddTask;
    QPushButton *pushButtonDeletTask;
    QPushButton *pushButtonMoreInfo;
    QGroupBox *groupBox_4;
    QRadioButton *radioButtonXY;
    QRadioButton *radioButtonX;
    QRadioButton *radioButtonY;
    QPushButton *pushButtonAutoRange;
    QMenuBar *menuBar;
    QMenu *menu_F;
    QMenu *menu_H;
    QMenu *menu_T;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1339, 874);
        action_X = new QAction(MainWindow);
        action_X->setObjectName(QStringLiteral("action_X"));
        action_H = new QAction(MainWindow);
        action_H->setObjectName(QStringLiteral("action_H"));
        action_A = new QAction(MainWindow);
        action_A->setObjectName(QStringLiteral("action_A"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        customPlot = new QCustomPlot(centralWidget);
        customPlot->setObjectName(QStringLiteral("customPlot"));
        customPlot->setEnabled(true);
        customPlot->setGeometry(QRect(10, 220, 1321, 441));
        pushButtonSched = new QPushButton(centralWidget);
        pushButtonSched->setObjectName(QStringLiteral("pushButtonSched"));
        pushButtonSched->setGeometry(QRect(1230, 30, 101, 51));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font.setPointSize(12);
        pushButtonSched->setFont(font);
        pushButtonSched->setStyleSheet(QStringLiteral("background-color: rgb(0, 191, 0);"));
        pushButtonSched->setFlat(false);
        label_scheduRes = new QLabel(centralWidget);
        label_scheduRes->setObjectName(QStringLiteral("label_scheduRes"));
        label_scheduRes->setGeometry(QRect(260, 810, 181, 31));
        label_scheduRes->setFont(font);
        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(900, 10, 291, 201));
        tableWidgetInfoTaskSet = new QTableWidget(groupBox);
        if (tableWidgetInfoTaskSet->columnCount() < 3)
            tableWidgetInfoTaskSet->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidgetInfoTaskSet->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidgetInfoTaskSet->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidgetInfoTaskSet->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        if (tableWidgetInfoTaskSet->rowCount() < 2)
            tableWidgetInfoTaskSet->setRowCount(2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidgetInfoTaskSet->setVerticalHeaderItem(0, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidgetInfoTaskSet->setVerticalHeaderItem(1, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableWidgetInfoTaskSet->setItem(0, 0, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tableWidgetInfoTaskSet->setItem(0, 1, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        tableWidgetInfoTaskSet->setItem(0, 2, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        tableWidgetInfoTaskSet->setItem(1, 0, __qtablewidgetitem8);
        tableWidgetInfoTaskSet->setObjectName(QStringLiteral("tableWidgetInfoTaskSet"));
        tableWidgetInfoTaskSet->setEnabled(true);
        tableWidgetInfoTaskSet->setGeometry(QRect(10, 20, 271, 171));
        tableWidgetInfoTaskSet->horizontalHeader()->setVisible(true);
        tableWidgetInfoTaskSet->horizontalHeader()->setDefaultSectionSize(65);
        tableWidgetInfoTaskSet->verticalHeader()->setVisible(false);
        tableWidgetInfoTaskSet->verticalHeader()->setDefaultSectionSize(25);
        groupBox_2 = new QGroupBox(centralWidget);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(10, 680, 1111, 131));
        tableWidgetCoreResult = new QTableWidget(groupBox_2);
        if (tableWidgetCoreResult->columnCount() < 1)
            tableWidgetCoreResult->setColumnCount(1);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        tableWidgetCoreResult->setHorizontalHeaderItem(0, __qtablewidgetitem9);
        if (tableWidgetCoreResult->rowCount() < 2)
            tableWidgetCoreResult->setRowCount(2);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        tableWidgetCoreResult->setVerticalHeaderItem(0, __qtablewidgetitem10);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        tableWidgetCoreResult->setVerticalHeaderItem(1, __qtablewidgetitem11);
        QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
        tableWidgetCoreResult->setItem(0, 0, __qtablewidgetitem12);
        QTableWidgetItem *__qtablewidgetitem13 = new QTableWidgetItem();
        tableWidgetCoreResult->setItem(1, 0, __qtablewidgetitem13);
        tableWidgetCoreResult->setObjectName(QStringLiteral("tableWidgetCoreResult"));
        tableWidgetCoreResult->setEnabled(true);
        tableWidgetCoreResult->setGeometry(QRect(10, 20, 401, 101));
        tableWidgetCoreResult->horizontalHeader()->setVisible(false);
        tableWidgetCoreResult->horizontalHeader()->setDefaultSectionSize(100);
        tableWidgetCoreResult->verticalHeader()->setVisible(false);
        tableWidgetCoreResult->verticalHeader()->setDefaultSectionSize(40);
        tableWidgetCoreResult->verticalHeader()->setMinimumSectionSize(30);
        tableWidgetMissDeadline = new QTableWidget(groupBox_2);
        if (tableWidgetMissDeadline->columnCount() < 1)
            tableWidgetMissDeadline->setColumnCount(1);
        QTableWidgetItem *__qtablewidgetitem14 = new QTableWidgetItem();
        tableWidgetMissDeadline->setHorizontalHeaderItem(0, __qtablewidgetitem14);
        if (tableWidgetMissDeadline->rowCount() < 2)
            tableWidgetMissDeadline->setRowCount(2);
        QTableWidgetItem *__qtablewidgetitem15 = new QTableWidgetItem();
        tableWidgetMissDeadline->setVerticalHeaderItem(0, __qtablewidgetitem15);
        QTableWidgetItem *__qtablewidgetitem16 = new QTableWidgetItem();
        tableWidgetMissDeadline->setVerticalHeaderItem(1, __qtablewidgetitem16);
        QTableWidgetItem *__qtablewidgetitem17 = new QTableWidgetItem();
        tableWidgetMissDeadline->setItem(0, 0, __qtablewidgetitem17);
        QTableWidgetItem *__qtablewidgetitem18 = new QTableWidgetItem();
        tableWidgetMissDeadline->setItem(1, 0, __qtablewidgetitem18);
        tableWidgetMissDeadline->setObjectName(QStringLiteral("tableWidgetMissDeadline"));
        tableWidgetMissDeadline->setEnabled(true);
        tableWidgetMissDeadline->setGeometry(QRect(440, 20, 651, 101));
        tableWidgetMissDeadline->horizontalHeader()->setVisible(false);
        tableWidgetMissDeadline->horizontalHeader()->setDefaultSectionSize(100);
        tableWidgetMissDeadline->verticalHeader()->setVisible(false);
        tableWidgetMissDeadline->verticalHeader()->setDefaultSectionSize(40);
        groupBox_3 = new QGroupBox(centralWidget);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        groupBox_3->setGeometry(QRect(10, 10, 841, 201));
        tableWidget = new QTableWidget(groupBox_3);
        if (tableWidget->columnCount() < 8)
            tableWidget->setColumnCount(8);
        QTableWidgetItem *__qtablewidgetitem19 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem19);
        QTableWidgetItem *__qtablewidgetitem20 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem20);
        QTableWidgetItem *__qtablewidgetitem21 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem21);
        QTableWidgetItem *__qtablewidgetitem22 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem22);
        QTableWidgetItem *__qtablewidgetitem23 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(4, __qtablewidgetitem23);
        QTableWidgetItem *__qtablewidgetitem24 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(5, __qtablewidgetitem24);
        QTableWidgetItem *__qtablewidgetitem25 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(6, __qtablewidgetitem25);
        QTableWidgetItem *__qtablewidgetitem26 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(7, __qtablewidgetitem26);
        if (tableWidget->rowCount() < 5)
            tableWidget->setRowCount(5);
        QTableWidgetItem *__qtablewidgetitem27 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(0, __qtablewidgetitem27);
        QTableWidgetItem *__qtablewidgetitem28 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(1, __qtablewidgetitem28);
        QTableWidgetItem *__qtablewidgetitem29 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(2, __qtablewidgetitem29);
        QTableWidgetItem *__qtablewidgetitem30 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(3, __qtablewidgetitem30);
        QTableWidgetItem *__qtablewidgetitem31 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(4, __qtablewidgetitem31);
        QTableWidgetItem *__qtablewidgetitem32 = new QTableWidgetItem();
        tableWidget->setItem(0, 0, __qtablewidgetitem32);
        QTableWidgetItem *__qtablewidgetitem33 = new QTableWidgetItem();
        tableWidget->setItem(0, 1, __qtablewidgetitem33);
        QTableWidgetItem *__qtablewidgetitem34 = new QTableWidgetItem();
        tableWidget->setItem(0, 2, __qtablewidgetitem34);
        QTableWidgetItem *__qtablewidgetitem35 = new QTableWidgetItem();
        tableWidget->setItem(0, 3, __qtablewidgetitem35);
        QTableWidgetItem *__qtablewidgetitem36 = new QTableWidgetItem();
        tableWidget->setItem(0, 4, __qtablewidgetitem36);
        QTableWidgetItem *__qtablewidgetitem37 = new QTableWidgetItem();
        tableWidget->setItem(0, 5, __qtablewidgetitem37);
        QTableWidgetItem *__qtablewidgetitem38 = new QTableWidgetItem();
        tableWidget->setItem(0, 6, __qtablewidgetitem38);
        QTableWidgetItem *__qtablewidgetitem39 = new QTableWidgetItem();
        tableWidget->setItem(0, 7, __qtablewidgetitem39);
        QTableWidgetItem *__qtablewidgetitem40 = new QTableWidgetItem();
        tableWidget->setItem(1, 0, __qtablewidgetitem40);
        QTableWidgetItem *__qtablewidgetitem41 = new QTableWidgetItem();
        tableWidget->setItem(1, 1, __qtablewidgetitem41);
        QTableWidgetItem *__qtablewidgetitem42 = new QTableWidgetItem();
        tableWidget->setItem(1, 2, __qtablewidgetitem42);
        QTableWidgetItem *__qtablewidgetitem43 = new QTableWidgetItem();
        tableWidget->setItem(1, 3, __qtablewidgetitem43);
        QTableWidgetItem *__qtablewidgetitem44 = new QTableWidgetItem();
        tableWidget->setItem(1, 4, __qtablewidgetitem44);
        QTableWidgetItem *__qtablewidgetitem45 = new QTableWidgetItem();
        tableWidget->setItem(1, 5, __qtablewidgetitem45);
        QTableWidgetItem *__qtablewidgetitem46 = new QTableWidgetItem();
        tableWidget->setItem(1, 6, __qtablewidgetitem46);
        QTableWidgetItem *__qtablewidgetitem47 = new QTableWidgetItem();
        tableWidget->setItem(1, 7, __qtablewidgetitem47);
        QTableWidgetItem *__qtablewidgetitem48 = new QTableWidgetItem();
        tableWidget->setItem(2, 0, __qtablewidgetitem48);
        QTableWidgetItem *__qtablewidgetitem49 = new QTableWidgetItem();
        tableWidget->setItem(2, 1, __qtablewidgetitem49);
        QTableWidgetItem *__qtablewidgetitem50 = new QTableWidgetItem();
        tableWidget->setItem(2, 2, __qtablewidgetitem50);
        QTableWidgetItem *__qtablewidgetitem51 = new QTableWidgetItem();
        tableWidget->setItem(2, 3, __qtablewidgetitem51);
        QTableWidgetItem *__qtablewidgetitem52 = new QTableWidgetItem();
        tableWidget->setItem(2, 4, __qtablewidgetitem52);
        QTableWidgetItem *__qtablewidgetitem53 = new QTableWidgetItem();
        tableWidget->setItem(2, 5, __qtablewidgetitem53);
        QTableWidgetItem *__qtablewidgetitem54 = new QTableWidgetItem();
        tableWidget->setItem(2, 6, __qtablewidgetitem54);
        QTableWidgetItem *__qtablewidgetitem55 = new QTableWidgetItem();
        tableWidget->setItem(2, 7, __qtablewidgetitem55);
        QTableWidgetItem *__qtablewidgetitem56 = new QTableWidgetItem();
        tableWidget->setItem(3, 0, __qtablewidgetitem56);
        QTableWidgetItem *__qtablewidgetitem57 = new QTableWidgetItem();
        tableWidget->setItem(3, 1, __qtablewidgetitem57);
        QTableWidgetItem *__qtablewidgetitem58 = new QTableWidgetItem();
        tableWidget->setItem(3, 2, __qtablewidgetitem58);
        QTableWidgetItem *__qtablewidgetitem59 = new QTableWidgetItem();
        tableWidget->setItem(3, 3, __qtablewidgetitem59);
        QTableWidgetItem *__qtablewidgetitem60 = new QTableWidgetItem();
        tableWidget->setItem(3, 4, __qtablewidgetitem60);
        QTableWidgetItem *__qtablewidgetitem61 = new QTableWidgetItem();
        tableWidget->setItem(3, 5, __qtablewidgetitem61);
        QTableWidgetItem *__qtablewidgetitem62 = new QTableWidgetItem();
        tableWidget->setItem(3, 6, __qtablewidgetitem62);
        QTableWidgetItem *__qtablewidgetitem63 = new QTableWidgetItem();
        tableWidget->setItem(3, 7, __qtablewidgetitem63);
        QTableWidgetItem *__qtablewidgetitem64 = new QTableWidgetItem();
        tableWidget->setItem(4, 0, __qtablewidgetitem64);
        QTableWidgetItem *__qtablewidgetitem65 = new QTableWidgetItem();
        tableWidget->setItem(4, 1, __qtablewidgetitem65);
        QTableWidgetItem *__qtablewidgetitem66 = new QTableWidgetItem();
        tableWidget->setItem(4, 2, __qtablewidgetitem66);
        QTableWidgetItem *__qtablewidgetitem67 = new QTableWidgetItem();
        tableWidget->setItem(4, 3, __qtablewidgetitem67);
        QTableWidgetItem *__qtablewidgetitem68 = new QTableWidgetItem();
        tableWidget->setItem(4, 4, __qtablewidgetitem68);
        QTableWidgetItem *__qtablewidgetitem69 = new QTableWidgetItem();
        tableWidget->setItem(4, 5, __qtablewidgetitem69);
        QTableWidgetItem *__qtablewidgetitem70 = new QTableWidgetItem();
        tableWidget->setItem(4, 6, __qtablewidgetitem70);
        QTableWidgetItem *__qtablewidgetitem71 = new QTableWidgetItem();
        tableWidget->setItem(4, 7, __qtablewidgetitem71);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->setGeometry(QRect(10, 20, 721, 171));
        tableWidget->setEditTriggers(QAbstractItemView::DoubleClicked);
        tableWidget->setTextElideMode(Qt::ElideLeft);
        tableWidget->setVerticalScrollMode(QAbstractItemView::ScrollPerItem);
        tableWidget->setShowGrid(true);
        tableWidget->setGridStyle(Qt::SolidLine);
        tableWidget->setSortingEnabled(true);
        tableWidget->setWordWrap(true);
        tableWidget->setCornerButtonEnabled(true);
        tableWidget->horizontalHeader()->setVisible(true);
        tableWidget->horizontalHeader()->setCascadingSectionResizes(false);
        tableWidget->horizontalHeader()->setDefaultSectionSize(100);
        tableWidget->horizontalHeader()->setHighlightSections(true);
        tableWidget->horizontalHeader()->setMinimumSectionSize(50);
        tableWidget->horizontalHeader()->setProperty("showSortIndicator", QVariant(true));
        tableWidget->horizontalHeader()->setStretchLastSection(false);
        tableWidget->verticalHeader()->setVisible(false);
        tableWidget->verticalHeader()->setCascadingSectionResizes(false);
        tableWidget->verticalHeader()->setDefaultSectionSize(28);
        tableWidget->verticalHeader()->setHighlightSections(true);
        pushButtonAddTask = new QPushButton(groupBox_3);
        pushButtonAddTask->setObjectName(QStringLiteral("pushButtonAddTask"));
        pushButtonAddTask->setGeometry(QRect(750, 20, 81, 31));
        pushButtonDeletTask = new QPushButton(groupBox_3);
        pushButtonDeletTask->setObjectName(QStringLiteral("pushButtonDeletTask"));
        pushButtonDeletTask->setGeometry(QRect(750, 60, 81, 31));
        pushButtonMoreInfo = new QPushButton(groupBox_3);
        pushButtonMoreInfo->setObjectName(QStringLiteral("pushButtonMoreInfo"));
        pushButtonMoreInfo->setGeometry(QRect(750, 173, 71, 20));
        QFont font1;
        font1.setPointSize(8);
        font1.setItalic(false);
        font1.setUnderline(true);
        pushButtonMoreInfo->setFont(font1);
        pushButtonMoreInfo->setStyleSheet(QStringLiteral("color: rgb(0, 20, 255);"));
        pushButtonMoreInfo->setFlat(true);
        groupBox_4 = new QGroupBox(centralWidget);
        groupBox_4->setObjectName(QStringLiteral("groupBox_4"));
        groupBox_4->setGeometry(QRect(1180, 680, 151, 131));
        radioButtonXY = new QRadioButton(groupBox_4);
        radioButtonXY->setObjectName(QStringLiteral("radioButtonXY"));
        radioButtonXY->setGeometry(QRect(10, 50, 81, 16));
        radioButtonXY->setChecked(false);
        radioButtonX = new QRadioButton(groupBox_4);
        radioButtonX->setObjectName(QStringLiteral("radioButtonX"));
        radioButtonX->setGeometry(QRect(10, 20, 71, 16));
        radioButtonX->setChecked(true);
        radioButtonY = new QRadioButton(groupBox_4);
        radioButtonY->setObjectName(QStringLiteral("radioButtonY"));
        radioButtonY->setGeometry(QRect(80, 20, 71, 16));
        pushButtonAutoRange = new QPushButton(groupBox_4);
        pushButtonAutoRange->setObjectName(QStringLiteral("pushButtonAutoRange"));
        pushButtonAutoRange->setGeometry(QRect(30, 90, 93, 28));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1339, 40));
        menu_F = new QMenu(menuBar);
        menu_F->setObjectName(QStringLiteral("menu_F"));
        menu_H = new QMenu(menuBar);
        menu_H->setObjectName(QStringLiteral("menu_H"));
        menu_T = new QMenu(menuBar);
        menu_T->setObjectName(QStringLiteral("menu_T"));
        MainWindow->setMenuBar(menuBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menu_F->menuAction());
        menuBar->addAction(menu_T->menuAction());
        menuBar->addAction(menu_H->menuAction());
        menu_F->addAction(action_X);
        menu_H->addAction(action_H);
        menu_H->addAction(action_A);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "RT-MCSS", 0));
        action_X->setText(QApplication::translate("MainWindow", "Quit(&X)", 0));
        action_H->setText(QApplication::translate("MainWindow", "Help(&H)", 0));
#ifndef QT_NO_TOOLTIP
        action_H->setToolTip(QApplication::translate("MainWindow", "Help(H)", 0));
#endif // QT_NO_TOOLTIP
        action_A->setText(QApplication::translate("MainWindow", "About(A)", 0));
#ifndef QT_NO_TOOLTIP
        action_A->setToolTip(QApplication::translate("MainWindow", "About(A)", 0));
#endif // QT_NO_TOOLTIP
        pushButtonSched->setText(QApplication::translate("MainWindow", "Run", 0));
        label_scheduRes->setText(QString());
        groupBox->setTitle(QApplication::translate("MainWindow", "CPU status", 0));
        QTableWidgetItem *___qtablewidgetitem = tableWidgetInfoTaskSet->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("MainWindow", "processor", 0));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidgetInfoTaskSet->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("MainWindow", "number of tasks", 0));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidgetInfoTaskSet->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("MainWindow", "utilization", 0));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidgetInfoTaskSet->verticalHeaderItem(0);
        ___qtablewidgetitem3->setText(QApplication::translate("MainWindow", "1", 0));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidgetInfoTaskSet->verticalHeaderItem(1);
        ___qtablewidgetitem4->setText(QApplication::translate("MainWindow", "2", 0));

        const bool __sortingEnabled = tableWidgetInfoTaskSet->isSortingEnabled();
        tableWidgetInfoTaskSet->setSortingEnabled(false);
        tableWidgetInfoTaskSet->setSortingEnabled(__sortingEnabled);

        groupBox_2->setTitle(QApplication::translate("MainWindow", "Result of shceduling", 0));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidgetCoreResult->horizontalHeaderItem(0);
        ___qtablewidgetitem5->setText(QApplication::translate("MainWindow", "core 0", 0));
        QTableWidgetItem *___qtablewidgetitem6 = tableWidgetCoreResult->verticalHeaderItem(0);
        ___qtablewidgetitem6->setText(QApplication::translate("MainWindow", "core", 0));
        QTableWidgetItem *___qtablewidgetitem7 = tableWidgetCoreResult->verticalHeaderItem(1);
        ___qtablewidgetitem7->setText(QApplication::translate("MainWindow", "schedulability", 0));

        const bool __sortingEnabled1 = tableWidgetCoreResult->isSortingEnabled();
        tableWidgetCoreResult->setSortingEnabled(false);
        QTableWidgetItem *___qtablewidgetitem8 = tableWidgetCoreResult->item(0, 0);
        ___qtablewidgetitem8->setText(QApplication::translate("MainWindow", "core", 0));
        QTableWidgetItem *___qtablewidgetitem9 = tableWidgetCoreResult->item(1, 0);
        ___qtablewidgetitem9->setText(QApplication::translate("MainWindow", "schedulability", 0));
        tableWidgetCoreResult->setSortingEnabled(__sortingEnabled1);

        QTableWidgetItem *___qtablewidgetitem10 = tableWidgetMissDeadline->horizontalHeaderItem(0);
        ___qtablewidgetitem10->setText(QApplication::translate("MainWindow", "task1", 0));
        QTableWidgetItem *___qtablewidgetitem11 = tableWidgetMissDeadline->verticalHeaderItem(0);
        ___qtablewidgetitem11->setText(QApplication::translate("MainWindow", "task name", 0));
        QTableWidgetItem *___qtablewidgetitem12 = tableWidgetMissDeadline->verticalHeaderItem(1);
        ___qtablewidgetitem12->setText(QApplication::translate("MainWindow", "deadline missed ratio", 0));

        const bool __sortingEnabled2 = tableWidgetMissDeadline->isSortingEnabled();
        tableWidgetMissDeadline->setSortingEnabled(false);
        QTableWidgetItem *___qtablewidgetitem13 = tableWidgetMissDeadline->item(0, 0);
        ___qtablewidgetitem13->setText(QApplication::translate("MainWindow", "task name", 0));
        QTableWidgetItem *___qtablewidgetitem14 = tableWidgetMissDeadline->item(1, 0);
        ___qtablewidgetitem14->setText(QApplication::translate("MainWindow", "deadline missed ratio", 0));
        tableWidgetMissDeadline->setSortingEnabled(__sortingEnabled2);

        groupBox_3->setTitle(QApplication::translate("MainWindow", "Mixed Real-time Task Set (Fixed-point task and Period/Sporadic task)", 0));
        QTableWidgetItem *___qtablewidgetitem15 = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem15->setText(QApplication::translate("MainWindow", "task name", 0));
        QTableWidgetItem *___qtablewidgetitem16 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem16->setText(QApplication::translate("MainWindow", "period T", 0));
        QTableWidgetItem *___qtablewidgetitem17 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem17->setText(QApplication::translate("MainWindow", "execution time C", 0));
        QTableWidgetItem *___qtablewidgetitem18 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem18->setText(QApplication::translate("MainWindow", "deadline D", 0));
        QTableWidgetItem *___qtablewidgetitem19 = tableWidget->horizontalHeaderItem(4);
        ___qtablewidgetitem19->setText(QApplication::translate("MainWindow", "arrival offset A", 0));
        QTableWidgetItem *___qtablewidgetitem20 = tableWidget->horizontalHeaderItem(5);
        ___qtablewidgetitem20->setText(QApplication::translate("MainWindow", "priority", 0));
        QTableWidgetItem *___qtablewidgetitem21 = tableWidget->horizontalHeaderItem(6);
        ___qtablewidgetitem21->setText(QApplication::translate("MainWindow", "task type", 0));
        QTableWidgetItem *___qtablewidgetitem22 = tableWidget->horizontalHeaderItem(7);
        ___qtablewidgetitem22->setText(QApplication::translate("MainWindow", "core", 0));
        QTableWidgetItem *___qtablewidgetitem23 = tableWidget->verticalHeaderItem(0);
        ___qtablewidgetitem23->setText(QApplication::translate("MainWindow", "1", 0));
        QTableWidgetItem *___qtablewidgetitem24 = tableWidget->verticalHeaderItem(1);
        ___qtablewidgetitem24->setText(QApplication::translate("MainWindow", "2", 0));
        QTableWidgetItem *___qtablewidgetitem25 = tableWidget->verticalHeaderItem(2);
        ___qtablewidgetitem25->setText(QApplication::translate("MainWindow", "3", 0));
        QTableWidgetItem *___qtablewidgetitem26 = tableWidget->verticalHeaderItem(3);
        ___qtablewidgetitem26->setText(QApplication::translate("MainWindow", "4", 0));
        QTableWidgetItem *___qtablewidgetitem27 = tableWidget->verticalHeaderItem(4);
        ___qtablewidgetitem27->setText(QApplication::translate("MainWindow", "5", 0));

        const bool __sortingEnabled3 = tableWidget->isSortingEnabled();
        tableWidget->setSortingEnabled(false);
        QTableWidgetItem *___qtablewidgetitem28 = tableWidget->item(0, 0);
        ___qtablewidgetitem28->setText(QApplication::translate("MainWindow", "task1", 0));
        QTableWidgetItem *___qtablewidgetitem29 = tableWidget->item(0, 1);
        ___qtablewidgetitem29->setText(QApplication::translate("MainWindow", "4", 0));
        QTableWidgetItem *___qtablewidgetitem30 = tableWidget->item(0, 2);
        ___qtablewidgetitem30->setText(QApplication::translate("MainWindow", "1", 0));
        QTableWidgetItem *___qtablewidgetitem31 = tableWidget->item(0, 3);
        ___qtablewidgetitem31->setText(QApplication::translate("MainWindow", "2", 0));
        QTableWidgetItem *___qtablewidgetitem32 = tableWidget->item(0, 4);
        ___qtablewidgetitem32->setText(QApplication::translate("MainWindow", "1", 0));
        QTableWidgetItem *___qtablewidgetitem33 = tableWidget->item(0, 5);
        ___qtablewidgetitem33->setText(QApplication::translate("MainWindow", "1", 0));
        QTableWidgetItem *___qtablewidgetitem34 = tableWidget->item(0, 6);
        ___qtablewidgetitem34->setText(QApplication::translate("MainWindow", "0", 0));
        QTableWidgetItem *___qtablewidgetitem35 = tableWidget->item(0, 7);
        ___qtablewidgetitem35->setText(QApplication::translate("MainWindow", "0", 0));
        QTableWidgetItem *___qtablewidgetitem36 = tableWidget->item(1, 0);
        ___qtablewidgetitem36->setText(QApplication::translate("MainWindow", "task2", 0));
        QTableWidgetItem *___qtablewidgetitem37 = tableWidget->item(1, 1);
        ___qtablewidgetitem37->setText(QApplication::translate("MainWindow", "9", 0));
        QTableWidgetItem *___qtablewidgetitem38 = tableWidget->item(1, 2);
        ___qtablewidgetitem38->setText(QApplication::translate("MainWindow", "1", 0));
        QTableWidgetItem *___qtablewidgetitem39 = tableWidget->item(1, 3);
        ___qtablewidgetitem39->setText(QApplication::translate("MainWindow", "3", 0));
        QTableWidgetItem *___qtablewidgetitem40 = tableWidget->item(1, 4);
        ___qtablewidgetitem40->setText(QApplication::translate("MainWindow", "0", 0));
        QTableWidgetItem *___qtablewidgetitem41 = tableWidget->item(1, 5);
        ___qtablewidgetitem41->setText(QApplication::translate("MainWindow", "2", 0));
        QTableWidgetItem *___qtablewidgetitem42 = tableWidget->item(1, 6);
        ___qtablewidgetitem42->setText(QApplication::translate("MainWindow", "1", 0));
        QTableWidgetItem *___qtablewidgetitem43 = tableWidget->item(1, 7);
        ___qtablewidgetitem43->setText(QApplication::translate("MainWindow", "0", 0));
        QTableWidgetItem *___qtablewidgetitem44 = tableWidget->item(2, 0);
        ___qtablewidgetitem44->setText(QApplication::translate("MainWindow", "task3", 0));
        QTableWidgetItem *___qtablewidgetitem45 = tableWidget->item(2, 1);
        ___qtablewidgetitem45->setText(QApplication::translate("MainWindow", "6", 0));
        QTableWidgetItem *___qtablewidgetitem46 = tableWidget->item(2, 2);
        ___qtablewidgetitem46->setText(QApplication::translate("MainWindow", "2", 0));
        QTableWidgetItem *___qtablewidgetitem47 = tableWidget->item(2, 3);
        ___qtablewidgetitem47->setText(QApplication::translate("MainWindow", "5", 0));
        QTableWidgetItem *___qtablewidgetitem48 = tableWidget->item(2, 4);
        ___qtablewidgetitem48->setText(QApplication::translate("MainWindow", "0", 0));
        QTableWidgetItem *___qtablewidgetitem49 = tableWidget->item(2, 5);
        ___qtablewidgetitem49->setText(QApplication::translate("MainWindow", "3", 0));
        QTableWidgetItem *___qtablewidgetitem50 = tableWidget->item(2, 6);
        ___qtablewidgetitem50->setText(QApplication::translate("MainWindow", "1", 0));
        QTableWidgetItem *___qtablewidgetitem51 = tableWidget->item(2, 7);
        ___qtablewidgetitem51->setText(QApplication::translate("MainWindow", "0", 0));
        QTableWidgetItem *___qtablewidgetitem52 = tableWidget->item(3, 0);
        ___qtablewidgetitem52->setText(QApplication::translate("MainWindow", "task4", 0));
        QTableWidgetItem *___qtablewidgetitem53 = tableWidget->item(3, 1);
        ___qtablewidgetitem53->setText(QApplication::translate("MainWindow", "5", 0));
        QTableWidgetItem *___qtablewidgetitem54 = tableWidget->item(3, 2);
        ___qtablewidgetitem54->setText(QApplication::translate("MainWindow", "3", 0));
        QTableWidgetItem *___qtablewidgetitem55 = tableWidget->item(3, 3);
        ___qtablewidgetitem55->setText(QApplication::translate("MainWindow", "4", 0));
        QTableWidgetItem *___qtablewidgetitem56 = tableWidget->item(3, 4);
        ___qtablewidgetitem56->setText(QApplication::translate("MainWindow", "0", 0));
        QTableWidgetItem *___qtablewidgetitem57 = tableWidget->item(3, 5);
        ___qtablewidgetitem57->setText(QApplication::translate("MainWindow", "4", 0));
        QTableWidgetItem *___qtablewidgetitem58 = tableWidget->item(3, 6);
        ___qtablewidgetitem58->setText(QApplication::translate("MainWindow", "1", 0));
        QTableWidgetItem *___qtablewidgetitem59 = tableWidget->item(3, 7);
        ___qtablewidgetitem59->setText(QApplication::translate("MainWindow", "1", 0));
        QTableWidgetItem *___qtablewidgetitem60 = tableWidget->item(4, 0);
        ___qtablewidgetitem60->setText(QApplication::translate("MainWindow", "task5", 0));
        QTableWidgetItem *___qtablewidgetitem61 = tableWidget->item(4, 1);
        ___qtablewidgetitem61->setText(QApplication::translate("MainWindow", "7", 0));
        QTableWidgetItem *___qtablewidgetitem62 = tableWidget->item(4, 2);
        ___qtablewidgetitem62->setText(QApplication::translate("MainWindow", "3", 0));
        QTableWidgetItem *___qtablewidgetitem63 = tableWidget->item(4, 3);
        ___qtablewidgetitem63->setText(QApplication::translate("MainWindow", "6", 0));
        QTableWidgetItem *___qtablewidgetitem64 = tableWidget->item(4, 4);
        ___qtablewidgetitem64->setText(QApplication::translate("MainWindow", "0", 0));
        QTableWidgetItem *___qtablewidgetitem65 = tableWidget->item(4, 5);
        ___qtablewidgetitem65->setText(QApplication::translate("MainWindow", "5", 0));
        QTableWidgetItem *___qtablewidgetitem66 = tableWidget->item(4, 6);
        ___qtablewidgetitem66->setText(QApplication::translate("MainWindow", "1", 0));
        QTableWidgetItem *___qtablewidgetitem67 = tableWidget->item(4, 7);
        ___qtablewidgetitem67->setText(QApplication::translate("MainWindow", "1", 0));
        tableWidget->setSortingEnabled(__sortingEnabled3);

        pushButtonAddTask->setText(QApplication::translate("MainWindow", "add task", 0));
        pushButtonDeletTask->setText(QApplication::translate("MainWindow", "delete task", 0));
        pushButtonMoreInfo->setText(QApplication::translate("MainWindow", "more info", 0));
        groupBox_4->setTitle(QApplication::translate("MainWindow", "Zoom in/out", 0));
        radioButtonXY->setText(QApplication::translate("MainWindow", "zoom XY", 0));
        radioButtonX->setText(QApplication::translate("MainWindow", "zoom X", 0));
        radioButtonY->setText(QApplication::translate("MainWindow", "zoom Y", 0));
        pushButtonAutoRange->setText(QApplication::translate("MainWindow", "adjust show", 0));
        menu_F->setTitle(QApplication::translate("MainWindow", "File(&F)", 0));
        menu_H->setTitle(QApplication::translate("MainWindow", "\n"
"Help(&H)", 0));
        menu_T->setTitle(QApplication::translate("MainWindow", "Tool(&T)", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
