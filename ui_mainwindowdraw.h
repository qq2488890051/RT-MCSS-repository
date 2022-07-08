/********************************************************************************
** Form generated from reading UI file 'mainwindowdraw.ui'
**
** Created by: Qt User Interface Compiler version 5.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOWDRAW_H
#define UI_MAINWINDOWDRAW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>
#include "lib/qcustomplot.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindowDraw
{
public:
    QAction *action_I;
    QAction *action_S;
    QAction *action_P;
    QAction *action_X;
    QAction *action_D;
    QAction *action_T;
    QAction *action_U;
    QAction *action_H;
    QAction *action_A;
    QWidget *centralwidget;
    QCustomPlot *customPlot;
    QLabel *label;
    QLabel *labelNumData;
    QLabel *label_2;
    QLabel *labelNumGraph;
    QLabel *label_3;
    QLabel *labelIllustration;
    QPlainTextEdit *plainTextEditCoord;
    QLabel *label_4;
    QLineEdit *lineEditAverage;
    QGroupBox *groupBox;
    QLineEdit *lineEdity1;
    QLineEdit *lineEditx1;
    QLabel *label_5;
    QLabel *label_6;
    QLineEdit *lineEditx2;
    QLineEdit *lineEdity2;
    QCheckBox *checkBoxAxis4;
    QPushButton *pushButtonOkRange;
    QPushButton *pushButtonAutoRange;
    QPushButton *pushButtonAdd;
    QLabel *label_7;
    QLabel *labelNumLineActual;
    QPushButton *pushButtonCut;
    QPushButton *pushButtonPosLegend;
    QCheckBox *checkBox_1;
    QCheckBox *checkBox_2;
    QCheckBox *checkBox_3;
    QCheckBox *checkBox_4;
    QCheckBox *checkBox_5;
    QCheckBox *checkBox_6;
    QCheckBox *checkBox_7;
    QCheckBox *checkBox_8;
    QCheckBox *checkBox_9;
    QCheckBox *checkBox_10;
    QCheckBox *checkBox_11;
    QCheckBox *checkBox_12;
    QCheckBox *checkBox_13;
    QCheckBox *checkBox_14;
    QPushButton *pushButton;
    QLabel *label_8;
    QPushButton *pushButtonTest;
    QCheckBox *checkBoxShowBorderLegend;
    QSpinBox *spinBoxLegend;
    QLabel *label_9;
    QGroupBox *groupBox_2;
    QRadioButton *radioButtonXY;
    QRadioButton *radioButtonX;
    QRadioButton *radioButtonY;
    QPushButton *pushButtonScreenshot;
    QTextBrowser *textBrowserStatus;
    QLabel *label_10;
    QPushButton *pushButtonClear;
    QPushButton *pushButtonPaste;
    QPushButton *pushButtonFormat;
    QSpinBox *spinBoxFigSwitch;
    QLabel *label_11;
    QPushButton *pushButtonSpad;
    QPushButton *pushButtonScreenshotPDF;
    QMenuBar *menubar;
    QMenu *menu_F;
    QMenu *menu_T;
    QMenu *menu_H;

    void setupUi(QMainWindow *MainWindowDraw)
    {
        if (MainWindowDraw->objectName().isEmpty())
            MainWindowDraw->setObjectName(QStringLiteral("MainWindowDraw"));
        MainWindowDraw->resize(1234, 847);
        action_I = new QAction(MainWindowDraw);
        action_I->setObjectName(QStringLiteral("action_I"));
        action_S = new QAction(MainWindowDraw);
        action_S->setObjectName(QStringLiteral("action_S"));
        action_P = new QAction(MainWindowDraw);
        action_P->setObjectName(QStringLiteral("action_P"));
        action_X = new QAction(MainWindowDraw);
        action_X->setObjectName(QStringLiteral("action_X"));
        action_D = new QAction(MainWindowDraw);
        action_D->setObjectName(QStringLiteral("action_D"));
        action_D->setCheckable(true);
        action_D->setChecked(true);
        action_T = new QAction(MainWindowDraw);
        action_T->setObjectName(QStringLiteral("action_T"));
        action_T->setCheckable(true);
        action_U = new QAction(MainWindowDraw);
        action_U->setObjectName(QStringLiteral("action_U"));
        action_U->setCheckable(true);
        action_H = new QAction(MainWindowDraw);
        action_H->setObjectName(QStringLiteral("action_H"));
        action_A = new QAction(MainWindowDraw);
        action_A->setObjectName(QStringLiteral("action_A"));
        centralwidget = new QWidget(MainWindowDraw);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        customPlot = new QCustomPlot(centralwidget);
        customPlot->setObjectName(QStringLiteral("customPlot"));
        customPlot->setGeometry(QRect(20, 50, 801, 561));
        label = new QLabel(centralwidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 620, 91, 21));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font.setPointSize(10);
        label->setFont(font);
        labelNumData = new QLabel(centralwidget);
        labelNumData->setObjectName(QStringLiteral("labelNumData"));
        labelNumData->setGeometry(QRect(120, 620, 54, 16));
        labelNumData->setFont(font);
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(210, 620, 61, 21));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font1.setPointSize(7);
        label_2->setFont(font1);
        labelNumGraph = new QLabel(centralwidget);
        labelNumGraph->setObjectName(QStringLiteral("labelNumGraph"));
        labelNumGraph->setGeometry(QRect(290, 620, 41, 16));
        labelNumGraph->setFont(font);
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(340, 620, 51, 21));
        label_3->setFont(font);
        labelIllustration = new QLabel(centralwidget);
        labelIllustration->setObjectName(QStringLiteral("labelIllustration"));
        labelIllustration->setGeometry(QRect(400, 620, 291, 21));
        QFont font2;
        font2.setPointSize(7);
        labelIllustration->setFont(font2);
        plainTextEditCoord = new QPlainTextEdit(centralwidget);
        plainTextEditCoord->setObjectName(QStringLiteral("plainTextEditCoord"));
        plainTextEditCoord->setGeometry(QRect(20, 720, 551, 101));
        plainTextEditCoord->setFont(font2);
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(20, 690, 71, 21));
        label_4->setFont(font1);
        lineEditAverage = new QLineEdit(centralwidget);
        lineEditAverage->setObjectName(QStringLiteral("lineEditAverage"));
        lineEditAverage->setGeometry(QRect(80, 692, 491, 20));
        lineEditAverage->setFont(font2);
        lineEditAverage->setReadOnly(true);
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(830, 50, 231, 141));
        lineEdity1 = new QLineEdit(groupBox);
        lineEdity1->setObjectName(QStringLiteral("lineEdity1"));
        lineEdity1->setGeometry(QRect(90, 70, 31, 21));
        lineEdity1->setFont(font2);
        lineEditx1 = new QLineEdit(groupBox);
        lineEditx1->setObjectName(QStringLiteral("lineEditx1"));
        lineEditx1->setGeometry(QRect(90, 40, 31, 21));
        lineEditx1->setFont(font2);
        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(10, 40, 71, 16));
        label_6 = new QLabel(groupBox);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(10, 70, 71, 16));
        lineEditx2 = new QLineEdit(groupBox);
        lineEditx2->setObjectName(QStringLiteral("lineEditx2"));
        lineEditx2->setGeometry(QRect(150, 40, 31, 21));
        lineEditx2->setFont(font2);
        lineEdity2 = new QLineEdit(groupBox);
        lineEdity2->setObjectName(QStringLiteral("lineEdity2"));
        lineEdity2->setGeometry(QRect(150, 70, 31, 21));
        lineEdity2->setFont(font2);
        checkBoxAxis4 = new QCheckBox(groupBox);
        checkBoxAxis4->setObjectName(QStringLiteral("checkBoxAxis4"));
        checkBoxAxis4->setGeometry(QRect(110, 10, 141, 20));
        QFont font3;
        font3.setPointSize(9);
        font3.setBold(false);
        font3.setWeight(50);
        checkBoxAxis4->setFont(font3);
        checkBoxAxis4->setChecked(true);
        checkBoxAxis4->setAutoRepeat(false);
        pushButtonOkRange = new QPushButton(groupBox);
        pushButtonOkRange->setObjectName(QStringLiteral("pushButtonOkRange"));
        pushButtonOkRange->setGeometry(QRect(190, 50, 31, 31));
        pushButtonAutoRange = new QPushButton(groupBox);
        pushButtonAutoRange->setObjectName(QStringLiteral("pushButtonAutoRange"));
        pushButtonAutoRange->setGeometry(QRect(90, 110, 93, 28));
        pushButtonAdd = new QPushButton(centralwidget);
        pushButtonAdd->setObjectName(QStringLiteral("pushButtonAdd"));
        pushButtonAdd->setGeometry(QRect(390, 650, 41, 21));
        pushButtonAdd->setFont(font2);
        label_7 = new QLabel(centralwidget);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(210, 650, 71, 21));
        label_7->setFont(font1);
        labelNumLineActual = new QLabel(centralwidget);
        labelNumLineActual->setObjectName(QStringLiteral("labelNumLineActual"));
        labelNumLineActual->setGeometry(QRect(290, 650, 41, 16));
        labelNumLineActual->setFont(font);
        pushButtonCut = new QPushButton(centralwidget);
        pushButtonCut->setObjectName(QStringLiteral("pushButtonCut"));
        pushButtonCut->setGeometry(QRect(340, 650, 41, 21));
        pushButtonCut->setFont(font2);
        pushButtonPosLegend = new QPushButton(centralwidget);
        pushButtonPosLegend->setObjectName(QStringLiteral("pushButtonPosLegend"));
        pushButtonPosLegend->setGeometry(QRect(20, 650, 93, 28));
        QFont font4;
        font4.setPointSize(8);
        pushButtonPosLegend->setFont(font4);
        checkBox_1 = new QCheckBox(centralwidget);
        checkBox_1->setObjectName(QStringLiteral("checkBox_1"));
        checkBox_1->setGeometry(QRect(1070, 50, 191, 19));
        checkBox_2 = new QCheckBox(centralwidget);
        checkBox_2->setObjectName(QStringLiteral("checkBox_2"));
        checkBox_2->setGeometry(QRect(1070, 90, 191, 19));
        checkBox_3 = new QCheckBox(centralwidget);
        checkBox_3->setObjectName(QStringLiteral("checkBox_3"));
        checkBox_3->setGeometry(QRect(1070, 130, 191, 19));
        checkBox_4 = new QCheckBox(centralwidget);
        checkBox_4->setObjectName(QStringLiteral("checkBox_4"));
        checkBox_4->setGeometry(QRect(1070, 170, 191, 19));
        checkBox_5 = new QCheckBox(centralwidget);
        checkBox_5->setObjectName(QStringLiteral("checkBox_5"));
        checkBox_5->setGeometry(QRect(1070, 210, 191, 19));
        checkBox_6 = new QCheckBox(centralwidget);
        checkBox_6->setObjectName(QStringLiteral("checkBox_6"));
        checkBox_6->setGeometry(QRect(1070, 250, 191, 19));
        checkBox_7 = new QCheckBox(centralwidget);
        checkBox_7->setObjectName(QStringLiteral("checkBox_7"));
        checkBox_7->setGeometry(QRect(1070, 290, 191, 19));
        checkBox_8 = new QCheckBox(centralwidget);
        checkBox_8->setObjectName(QStringLiteral("checkBox_8"));
        checkBox_8->setGeometry(QRect(1070, 320, 191, 19));
        checkBox_9 = new QCheckBox(centralwidget);
        checkBox_9->setObjectName(QStringLiteral("checkBox_9"));
        checkBox_9->setGeometry(QRect(1070, 350, 191, 19));
        checkBox_10 = new QCheckBox(centralwidget);
        checkBox_10->setObjectName(QStringLiteral("checkBox_10"));
        checkBox_10->setGeometry(QRect(1070, 380, 191, 19));
        checkBox_11 = new QCheckBox(centralwidget);
        checkBox_11->setObjectName(QStringLiteral("checkBox_11"));
        checkBox_11->setGeometry(QRect(1070, 410, 191, 19));
        checkBox_12 = new QCheckBox(centralwidget);
        checkBox_12->setObjectName(QStringLiteral("checkBox_12"));
        checkBox_12->setGeometry(QRect(1070, 440, 191, 19));
        checkBox_13 = new QCheckBox(centralwidget);
        checkBox_13->setObjectName(QStringLiteral("checkBox_13"));
        checkBox_13->setGeometry(QRect(1070, 470, 191, 19));
        checkBox_14 = new QCheckBox(centralwidget);
        checkBox_14->setObjectName(QStringLiteral("checkBox_14"));
        checkBox_14->setGeometry(QRect(1070, 500, 191, 19));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(580, 777, 93, 41));
        QFont font5;
        font5.setPointSize(16);
        pushButton->setFont(font5);
        label_8 = new QLabel(centralwidget);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(830, 370, 171, 41));
        QFont font6;
        font6.setFamily(QStringLiteral("Consolas"));
        font6.setPointSize(12);
        font6.setBold(false);
        font6.setWeight(50);
        label_8->setFont(font6);
        pushButtonTest = new QPushButton(centralwidget);
        pushButtonTest->setObjectName(QStringLiteral("pushButtonTest"));
        pushButtonTest->setGeometry(QRect(830, 410, 91, 31));
        checkBoxShowBorderLegend = new QCheckBox(centralwidget);
        checkBoxShowBorderLegend->setObjectName(QStringLiteral("checkBoxShowBorderLegend"));
        checkBoxShowBorderLegend->setGeometry(QRect(20, 20, 131, 19));
        checkBoxShowBorderLegend->setChecked(true);
        spinBoxLegend = new QSpinBox(centralwidget);
        spinBoxLegend->setObjectName(QStringLiteral("spinBoxLegend"));
        spinBoxLegend->setGeometry(QRect(280, 20, 46, 22));
        spinBoxLegend->setValue(10);
        label_9 = new QLabel(centralwidget);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(190, 20, 91, 16));
        groupBox_2 = new QGroupBox(centralwidget);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(370, 10, 201, 41));
        radioButtonXY = new QRadioButton(groupBox_2);
        radioButtonXY->setObjectName(QStringLiteral("radioButtonXY"));
        radioButtonXY->setGeometry(QRect(130, 20, 61, 16));
        radioButtonXY->setChecked(true);
        radioButtonX = new QRadioButton(groupBox_2);
        radioButtonX->setObjectName(QStringLiteral("radioButtonX"));
        radioButtonX->setGeometry(QRect(10, 20, 51, 16));
        radioButtonY = new QRadioButton(groupBox_2);
        radioButtonY->setObjectName(QStringLiteral("radioButtonY"));
        radioButtonY->setGeometry(QRect(70, 20, 51, 16));
        pushButtonScreenshot = new QPushButton(centralwidget);
        pushButtonScreenshot->setObjectName(QStringLiteral("pushButtonScreenshot"));
        pushButtonScreenshot->setGeometry(QRect(830, 570, 111, 41));
        pushButtonScreenshot->setFont(font);
        textBrowserStatus = new QTextBrowser(centralwidget);
        textBrowserStatus->setObjectName(QStringLiteral("textBrowserStatus"));
        textBrowserStatus->setGeometry(QRect(870, 220, 161, 111));
        label_10 = new QLabel(centralwidget);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(900, 190, 101, 31));
        QFont font7;
        font7.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font7.setPointSize(11);
        label_10->setFont(font7);
        pushButtonClear = new QPushButton(centralwidget);
        pushButtonClear->setObjectName(QStringLiteral("pushButtonClear"));
        pushButtonClear->setGeometry(QRect(940, 340, 41, 23));
        pushButtonPaste = new QPushButton(centralwidget);
        pushButtonPaste->setObjectName(QStringLiteral("pushButtonPaste"));
        pushButtonPaste->setGeometry(QRect(584, 720, 91, 31));
        QFont font8;
        font8.setPointSize(12);
        pushButtonPaste->setFont(font8);
        pushButtonFormat = new QPushButton(centralwidget);
        pushButtonFormat->setObjectName(QStringLiteral("pushButtonFormat"));
        pushButtonFormat->setGeometry(QRect(580, 690, 81, 21));
        QFont font9;
        font9.setPointSize(8);
        font9.setUnderline(true);
        pushButtonFormat->setFont(font9);
        pushButtonFormat->setStyleSheet(QStringLiteral("color: rgb(0, 0, 255);"));
        pushButtonFormat->setFlat(true);
        spinBoxFigSwitch = new QSpinBox(centralwidget);
        spinBoxFigSwitch->setObjectName(QStringLiteral("spinBoxFigSwitch"));
        spinBoxFigSwitch->setGeometry(QRect(780, 620, 41, 31));
        QFont font10;
        font10.setPointSize(14);
        spinBoxFigSwitch->setFont(font10);
        spinBoxFigSwitch->setReadOnly(false);
        label_11 = new QLabel(centralwidget);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(700, 626, 81, 20));
        pushButtonSpad = new QPushButton(centralwidget);
        pushButtonSpad->setObjectName(QStringLiteral("pushButtonSpad"));
        pushButtonSpad->setGeometry(QRect(500, 650, 75, 31));
        pushButtonScreenshotPDF = new QPushButton(centralwidget);
        pushButtonScreenshotPDF->setObjectName(QStringLiteral("pushButtonScreenshotPDF"));
        pushButtonScreenshotPDF->setGeometry(QRect(830, 480, 111, 71));
        QFont font11;
        font11.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font11.setPointSize(10);
        font11.setBold(true);
        font11.setWeight(75);
        pushButtonScreenshotPDF->setFont(font11);
        MainWindowDraw->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindowDraw);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 1234, 23));
        menu_F = new QMenu(menubar);
        menu_F->setObjectName(QStringLiteral("menu_F"));
        menu_T = new QMenu(menubar);
        menu_T->setObjectName(QStringLiteral("menu_T"));
        menu_H = new QMenu(menubar);
        menu_H->setObjectName(QStringLiteral("menu_H"));
        MainWindowDraw->setMenuBar(menubar);

        menubar->addAction(menu_F->menuAction());
        menubar->addAction(menu_T->menuAction());
        menubar->addAction(menu_H->menuAction());
        menu_F->addAction(action_I);
        menu_F->addAction(action_S);
        menu_F->addAction(action_P);
        menu_F->addAction(action_X);
        menu_T->addAction(action_D);
        menu_T->addAction(action_T);
        menu_T->addAction(action_U);
        menu_H->addAction(action_H);
        menu_H->addAction(action_A);

        retranslateUi(MainWindowDraw);

        QMetaObject::connectSlotsByName(MainWindowDraw);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindowDraw)
    {
        MainWindowDraw->setWindowTitle(QApplication::translate("MainWindowDraw", "\347\273\230\345\233\276\350\275\257\344\273\266:biao", 0));
        action_I->setText(QApplication::translate("MainWindowDraw", "\345\257\274\345\205\245\345\235\220\346\240\207(&I)", 0));
        action_S->setText(QApplication::translate("MainWindowDraw", "\344\277\235\345\255\230\345\235\220\346\240\207(&S)", 0));
        action_P->setText(QApplication::translate("MainWindowDraw", "\346\211\223\345\215\260(&P)", 0));
        action_X->setText(QApplication::translate("MainWindowDraw", "\351\200\200\345\207\272(&X)", 0));
        action_D->setText(QApplication::translate("MainWindowDraw", "\347\273\230\345\233\276\350\275\257\344\273\266(&D)", 0));
        action_T->setText(QApplication::translate("MainWindowDraw", "\344\273\273\345\212\241\350\260\203\345\272\246\344\273\277\347\234\237\350\275\257\344\273\266(&T)", 0));
        action_U->setText(QApplication::translate("MainWindowDraw", "\344\270\262\345\217\243\346\216\245\346\224\266\350\275\257\344\273\266(&U)", 0));
        action_H->setText(QApplication::translate("MainWindowDraw", "\346\237\245\347\234\213\345\270\256\345\212\251(&H)", 0));
        action_A->setText(QApplication::translate("MainWindowDraw", "\345\205\263\344\272\216\350\275\257\344\273\266(&A)", 0));
        label->setText(QApplication::translate("MainWindowDraw", "x\345\235\220\346\240\207\344\270\252\346\225\260\357\274\232", 0));
        labelNumData->setText(QString());
        label_2->setText(QApplication::translate("MainWindowDraw", "\346\200\273\346\233\262\347\272\277\346\225\260\357\274\232", 0));
        labelNumGraph->setText(QString());
        label_3->setText(QApplication::translate("MainWindowDraw", "\350\257\264\346\230\216\357\274\232", 0));
        labelIllustration->setText(QString());
        plainTextEditCoord->setPlainText(QApplication::translate("MainWindowDraw", "1,0.002431,0.002514,0.009375,0.004347,0.009764,0.006211,0.003458,0.006744,0.010347,0.053681,0.008181,0.009403,0.009264\n"
"2,0.004289,0.015214,0.035369,0.012486,0.035664,0.016242,0.014386,0.015836,0.013353,0.056992,0.014144,0.027278,0.021206\n"
"3,0.007319,0.043347,0.077567,0.025692,0.065897,0.031597,0.031656,0.029283,0.016353,0.064100,0.020131,0.053747,0.038383\n"
"4,0.011447,0.077961,0.124978,0.044175,0.101703,0.052069,0.049281,0.046056,0.019319,0.063014,0.026103,0.072972,0.060733\n"
"5,0.016631,0.146469,0.208178,0.068169,0.142922,0.078100,0.090958,0.067525,0.022356,0.069983,0.032114,0.138208,0.088750\n"
"6,0.022983,0.225869,0.296100,0.097069,0.190486,0.109194,0.130447,0.092058,0.025383,0.073203,0.038119,0.195975,0.121961\n"
"7,0.030519,0.325194,0.411792,0.131975,0.241500,0.145872,0.193986,0.120636,0.028303,0.075981,0.044094,0.309608,0.160989\n"
"8,0.039061,0.439294,0.544511,0.170983,0.297294,0.187539,0.271625,0.154586,0.031258,0.075231,0.050136,0.346522,0.204450\n"
"9,0.048836,0.588714,0.695969,0.216147,0.3"
                        "59183,0.234781,0.336969,0.191731,0.034425,0.083108,0.056153,0.556125,0.253958\n"
"10,0.059597,0.718494,0.846528,0.265564,0.425864,0.287142,0.389339,0.231375,0.037342,0.085467,0.062128,0.638108,0.308472\n"
"11,0.071494,0.839697,0.985994,0.321333,0.497361,0.344436,0.462189,0.276575,0.040172,0.087961,0.068186,0.820511,0.367967\n"
"12,0.084497,1.060800,1.227594,0.381736,0.574839,0.408306,0.595761,0.326217,0.043233,0.091389,0.074175,1.040203,0.433864\n"
"13,0.098606,1.225856,1.407592,0.447633,0.657397,0.477011,0.665686,0.380125,0.046103,0.093950,0.080167,1.302947,0.504733\n"
"14,0.113886,1.604128,1.802145,0.520164,0.744756,0.549850,0.815511,0.435689,0.049031,0.096908,0.086244,1.737336,0.580961\n"
"15,0.130186,1.755411,1.970586,0.596283,0.836236,0.628833,0.899431,0.495419,0.051900,0.100144,0.092272,1.808231,0.662228\n"
"16,0.147686,1.929061,2.170128,0.677733,0.936058,0.713755,1.019364,0.562144,0.054739,0.098767,0.098247,2.038961,0.748164\n"
"17,0.166267,2.377750,2.611869,0.764997,1.038831,0.802822,1.246897,0.630000,"
                        "0.057783,0.105367,0.104269,2.671200,0.841975\n"
"18,0.186194,2.603269,2.885244,0.856597,1.146856,0.896861,1.281625,0.702239,0.060894,0.109728,0.110247,2.842847,0.939470\n"
"19,0.207094,2.989866,3.285486,0.952364,1.258970,0.998236,1.583739,0.780631,0.063831,0.111567,0.116236,3.191461,1.042903\n"
"20,0.228814,3.379389,3.688820,1.058139,1.377972,1.104861,1.746375,0.861772,0.066469,0.114875,0.122333,4.146500,1.151292\n"
"21,0.251933,3.814945,4.139483,1.167175,1.500800,1.214556,2.020117,0.948178,0.069842,0.118189,0.128358,4.328691,1.265731\n"
"22,0.276225,4.235692,4.583461,1.281070,1.632003,1.331947,2.196192,1.037492,0.072636,0.121192,0.134275,5.986886,1.385317\n"
"23,0.301411,4.517806,4.898911,1.399867,1.764150,1.452689,2.315922,1.132106,0.075336,0.123086,0.140472,5.960542,1.507289\n"
"24,0.327864,5.037366,5.420261,1.525128,1.905078,1.579603,2.437545,1.227125,0.078292,0.126608,0.146453,6.980097,1.638078\n"
"25,0.355019,5.431983,5.847686,1.651342,2.047639,1.712295,2.690044,1.327356,0.081347,0.129172,0.152378,7.4103"
                        "27,1.772264\n"
"26,0.383736,5.819188,6.259708,1.784297,2.194186,1.850047,2.975839,1.435300,0.084161,0.132633,0.158558,7.750861,1.912758\n"
"27,0.413733,6.264017,6.719798,1.925292,2.349633,1.992200,3.107108,1.537722,0.087028,0.134908,0.164681,8.528556,2.059514\n"
"28,0.444417,6.946767,7.426525,2.072292,2.510367,2.141108,3.388706,1.655836,0.090058,0.138689,0.170853,9.740556,2.212719\n"
"29,0.475989,6.612461,7.104767,2.217011,2.671775,2.292661,3.181878,1.767322,0.092858,0.141628,0.176750,9.461861,2.361161\n"
"30,0.509289,7.777869,8.288961,2.374341,2.845655,2.452389,3.781103,1.891225,0.096006,0.144489,0.182883,12.299217,2.528980\n"
"axis,number of tasks : n,average run time :t /ms\n"
"name,EBA,equation(4-6),equation(4-7),equation(4-9),equation(4-10),equation(4-11),equation(4-8),equation(4-4),equation(4-5),equation(4-1),equation(4-2),equation(4-3),new\n"
"illustration,parameter:n:30  U:0.500000", 0));
        label_4->setText(QApplication::translate("MainWindowDraw", "\347\272\265\346\240\207\345\235\207\345\200\274\357\274\232", 0));
        groupBox->setTitle(QApplication::translate("MainWindowDraw", "\345\235\220\346\240\207\350\275\264\350\256\276\347\275\256:", 0));
        lineEdity1->setText(QApplication::translate("MainWindowDraw", "-0.1", 0));
        lineEditx1->setText(QApplication::translate("MainWindowDraw", "0", 0));
        label_5->setText(QApplication::translate("MainWindowDraw", "x\350\275\264\350\214\203\345\233\264\357\274\232", 0));
        label_6->setText(QApplication::translate("MainWindowDraw", "y\350\275\264\350\214\203\345\233\264\357\274\232", 0));
        lineEditx2->setText(QApplication::translate("MainWindowDraw", "1.1", 0));
        lineEdity2->setText(QApplication::translate("MainWindowDraw", "1", 0));
        checkBoxAxis4->setText(QApplication::translate("MainWindowDraw", "\345\233\233\350\276\271\345\235\220\346\240\207\350\275\264\346\230\276\347\244\272", 0));
        pushButtonOkRange->setText(QApplication::translate("MainWindowDraw", "OK", 0));
        pushButtonAutoRange->setText(QApplication::translate("MainWindowDraw", "\350\207\252\351\200\202\345\272\224\350\260\203\346\225\264", 0));
        pushButtonAdd->setText(QApplication::translate("MainWindowDraw", "+\346\233\262\347\272\277", 0));
        label_7->setText(QApplication::translate("MainWindowDraw", "\346\230\276\347\244\272\346\233\262\347\272\277\346\225\260\357\274\232", 0));
        labelNumLineActual->setText(QString());
        pushButtonCut->setText(QApplication::translate("MainWindowDraw", "-\346\233\262\347\272\277", 0));
        pushButtonPosLegend->setText(QApplication::translate("MainWindowDraw", "\345\233\276\344\276\213\344\275\215\347\275\256\345\210\207\346\215\242", 0));
        checkBox_1->setText(QApplication::translate("MainWindowDraw", "CheckBox", 0));
        checkBox_2->setText(QApplication::translate("MainWindowDraw", "CheckBox", 0));
        checkBox_3->setText(QApplication::translate("MainWindowDraw", "CheckBox", 0));
        checkBox_4->setText(QApplication::translate("MainWindowDraw", "CheckBox", 0));
        checkBox_5->setText(QApplication::translate("MainWindowDraw", "CheckBox", 0));
        checkBox_6->setText(QApplication::translate("MainWindowDraw", "CheckBox", 0));
        checkBox_7->setText(QApplication::translate("MainWindowDraw", "CheckBox", 0));
        checkBox_8->setText(QApplication::translate("MainWindowDraw", "CheckBox", 0));
        checkBox_9->setText(QApplication::translate("MainWindowDraw", "CheckBox", 0));
        checkBox_10->setText(QApplication::translate("MainWindowDraw", "CheckBox", 0));
        checkBox_11->setText(QApplication::translate("MainWindowDraw", "CheckBox", 0));
        checkBox_12->setText(QApplication::translate("MainWindowDraw", "CheckBox", 0));
        checkBox_13->setText(QApplication::translate("MainWindowDraw", "CheckBox", 0));
        checkBox_14->setText(QApplication::translate("MainWindowDraw", "CheckBox", 0));
        pushButton->setText(QApplication::translate("MainWindowDraw", "\347\273\230\345\233\276", 0));
        label_8->setText(QApplication::translate("MainWindowDraw", "\346\263\250:\346\234\200\345\244\232\346\224\257\346\214\20114\346\235\241\346\233\262\347\272\277", 0));
        pushButtonTest->setText(QApplication::translate("MainWindowDraw", "test1", 0));
        checkBoxShowBorderLegend->setText(QApplication::translate("MainWindowDraw", "\346\230\276\347\244\272\345\233\276\344\276\213\350\276\271\346\241\206", 0));
        label_9->setText(QApplication::translate("MainWindowDraw", "\346\257\217\345\210\227\345\233\276\344\276\213\346\225\260\357\274\232", 0));
        groupBox_2->setTitle(QApplication::translate("MainWindowDraw", "\351\274\240\346\240\207\346\273\232\350\275\256\347\274\251\346\224\276\345\212\237\350\203\275", 0));
        radioButtonXY->setText(QApplication::translate("MainWindowDraw", "\347\274\251\346\224\276XY", 0));
        radioButtonX->setText(QApplication::translate("MainWindowDraw", "\347\274\251\346\224\276X", 0));
        radioButtonY->setText(QApplication::translate("MainWindowDraw", "\347\274\251\346\224\276Y", 0));
        pushButtonScreenshot->setText(QApplication::translate("MainWindowDraw", "\344\270\200\351\224\256 \346\210\252\345\233\276\n"
"\345\210\260\345\211\252\345\210\207\346\235\277", 0));
        label_10->setText(QApplication::translate("MainWindowDraw", "\347\212\266\346\200\201\344\277\241\346\201\257\346\211\223\345\215\260", 0));
        pushButtonClear->setText(QApplication::translate("MainWindowDraw", "clear", 0));
        pushButtonPaste->setText(QApplication::translate("MainWindowDraw", "\344\270\200\351\224\256\347\262\230\350\264\264", 0));
        pushButtonFormat->setText(QApplication::translate("MainWindowDraw", "\346\237\245\347\234\213\345\235\220\346\240\207\346\240\274\345\274\217", 0));
        label_11->setText(QApplication::translate("MainWindowDraw", "\345\216\206\345\217\262\345\233\276\345\203\217\345\210\207\346\215\242", 0));
        pushButtonSpad->setText(QApplication::translate("MainWindowDraw", "\345\242\236\345\212\240\346\226\260\346\233\262\347\272\277", 0));
        pushButtonScreenshotPDF->setText(QApplication::translate("MainWindowDraw", "\344\270\200\351\224\256 \346\210\252\345\233\276\n"
"\344\270\272PDF\346\226\207\344\273\266\n"
"\345\210\260\345\211\252\345\210\207\346\235\277", 0));
        menu_F->setTitle(QApplication::translate("MainWindowDraw", "\346\226\207\344\273\266(&F)", 0));
        menu_T->setTitle(QApplication::translate("MainWindowDraw", "\345\267\245\345\205\267(&T)", 0));
        menu_H->setTitle(QApplication::translate("MainWindowDraw", "\345\270\256\345\212\251(&H)", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindowDraw: public Ui_MainWindowDraw {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOWDRAW_H
