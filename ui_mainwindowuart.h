/********************************************************************************
** Form generated from reading UI file 'mainwindowuart.ui'
**
** Created by: Qt User Interface Compiler version 5.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOWUART_H
#define UI_MAINWINDOWUART_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindowUart
{
public:
    QAction *actionS;
    QAction *action_P;
    QAction *action_X;
    QAction *action_T;
    QAction *action_U;
    QAction *action_D;
    QAction *action_H;
    QAction *action_A;
    QWidget *centralwidget;
    QTextEdit *textEditRxd;
    QCheckBox *checkBoxHexSend;
    QPushButton *pushButtonSend;
    QCheckBox *checkBoxHexRxd;
    QLabel *labelName;
    QTextEdit *textEditTxd;
    QGroupBox *groupBox;
    QLabel *label_7;
    QPushButton *pushButtonOpen;
    QLabel *label_3;
    QLabel *label_4;
    QComboBox *StopBox;
    QComboBox *ParityBox;
    QComboBox *BaudBox;
    QLabel *label_6;
    QLabel *label_5;
    QComboBox *BitNumBox;
    QPushButton *pushButtonFresh;
    QComboBox *PortBox;
    QPushButton *pushButtonClearTxd;
    QPushButton *pushButtonClearRxd;
    QLabel *labelTimesLog;
    QMenuBar *menubar;
    QMenu *menu;
    QMenu *menu_2;
    QMenu *menu_3;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindowUart)
    {
        if (MainWindowUart->objectName().isEmpty())
            MainWindowUart->setObjectName(QStringLiteral("MainWindowUart"));
        MainWindowUart->resize(824, 553);
        actionS = new QAction(MainWindowUart);
        actionS->setObjectName(QStringLiteral("actionS"));
        action_P = new QAction(MainWindowUart);
        action_P->setObjectName(QStringLiteral("action_P"));
        action_X = new QAction(MainWindowUart);
        action_X->setObjectName(QStringLiteral("action_X"));
        action_T = new QAction(MainWindowUart);
        action_T->setObjectName(QStringLiteral("action_T"));
        action_T->setCheckable(true);
        action_T->setChecked(false);
        action_U = new QAction(MainWindowUart);
        action_U->setObjectName(QStringLiteral("action_U"));
        action_U->setCheckable(true);
        action_U->setChecked(true);
        action_D = new QAction(MainWindowUart);
        action_D->setObjectName(QStringLiteral("action_D"));
        action_D->setCheckable(true);
        action_D->setChecked(false);
        action_H = new QAction(MainWindowUart);
        action_H->setObjectName(QStringLiteral("action_H"));
        action_A = new QAction(MainWindowUart);
        action_A->setObjectName(QStringLiteral("action_A"));
        centralwidget = new QWidget(MainWindowUart);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        textEditRxd = new QTextEdit(centralwidget);
        textEditRxd->setObjectName(QStringLiteral("textEditRxd"));
        textEditRxd->setGeometry(QRect(10, 10, 601, 251));
        checkBoxHexSend = new QCheckBox(centralwidget);
        checkBoxHexSend->setObjectName(QStringLiteral("checkBoxHexSend"));
        checkBoxHexSend->setGeometry(QRect(520, 480, 91, 19));
        pushButtonSend = new QPushButton(centralwidget);
        pushButtonSend->setObjectName(QStringLiteral("pushButtonSend"));
        pushButtonSend->setEnabled(false);
        pushButtonSend->setGeometry(QRect(620, 420, 181, 51));
        checkBoxHexRxd = new QCheckBox(centralwidget);
        checkBoxHexRxd->setObjectName(QStringLiteral("checkBoxHexRxd"));
        checkBoxHexRxd->setGeometry(QRect(530, 270, 81, 19));
        labelName = new QLabel(centralwidget);
        labelName->setObjectName(QStringLiteral("labelName"));
        labelName->setGeometry(QRect(740, 20, 71, 21));
        textEditTxd = new QTextEdit(centralwidget);
        textEditTxd->setObjectName(QStringLiteral("textEditTxd"));
        textEditTxd->setGeometry(QRect(10, 320, 601, 151));
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(620, 10, 191, 251));
        label_7 = new QLabel(groupBox);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(10, 150, 61, 41));
        pushButtonOpen = new QPushButton(groupBox);
        pushButtonOpen->setObjectName(QStringLiteral("pushButtonOpen"));
        pushButtonOpen->setGeometry(QRect(90, 200, 71, 28));
        pushButtonOpen->setAutoFillBackground(false);
        QIcon icon;
        icon.addFile(QStringLiteral(":/new/prefix1/closePort.PNG"), QSize(), QIcon::Normal, QIcon::Off);
        pushButtonOpen->setIcon(icon);
        pushButtonOpen->setIconSize(QSize(71, 37));
        pushButtonOpen->setFlat(false);
        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(10, 20, 51, 31));
        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(10, 50, 61, 41));
        StopBox = new QComboBox(groupBox);
        StopBox->setObjectName(QStringLiteral("StopBox"));
        StopBox->setGeometry(QRect(90, 160, 81, 21));
        ParityBox = new QComboBox(groupBox);
        ParityBox->setObjectName(QStringLiteral("ParityBox"));
        ParityBox->setGeometry(QRect(90, 130, 81, 21));
        BaudBox = new QComboBox(groupBox);
        BaudBox->setObjectName(QStringLiteral("BaudBox"));
        BaudBox->setGeometry(QRect(90, 60, 81, 21));
        label_6 = new QLabel(groupBox);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(10, 120, 51, 41));
        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(10, 90, 81, 31));
        BitNumBox = new QComboBox(groupBox);
        BitNumBox->setObjectName(QStringLiteral("BitNumBox"));
        BitNumBox->setGeometry(QRect(90, 90, 81, 21));
        pushButtonFresh = new QPushButton(groupBox);
        pushButtonFresh->setObjectName(QStringLiteral("pushButtonFresh"));
        pushButtonFresh->setGeometry(QRect(10, 200, 71, 28));
        PortBox = new QComboBox(groupBox);
        PortBox->setObjectName(QStringLiteral("PortBox"));
        PortBox->setGeometry(QRect(90, 30, 81, 21));
        pushButtonClearTxd = new QPushButton(centralwidget);
        pushButtonClearTxd->setObjectName(QStringLiteral("pushButtonClearTxd"));
        pushButtonClearTxd->setGeometry(QRect(430, 480, 81, 28));
        pushButtonClearRxd = new QPushButton(centralwidget);
        pushButtonClearRxd->setObjectName(QStringLiteral("pushButtonClearRxd"));
        pushButtonClearRxd->setGeometry(QRect(430, 270, 81, 28));
        labelTimesLog = new QLabel(centralwidget);
        labelTimesLog->setObjectName(QStringLiteral("labelTimesLog"));
        labelTimesLog->setGeometry(QRect(790, 80, 21, 16));
        MainWindowUart->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindowUart);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 824, 21));
        menu = new QMenu(menubar);
        menu->setObjectName(QStringLiteral("menu"));
        menu_2 = new QMenu(menubar);
        menu_2->setObjectName(QStringLiteral("menu_2"));
        menu_3 = new QMenu(menubar);
        menu_3->setObjectName(QStringLiteral("menu_3"));
        MainWindowUart->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindowUart);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        MainWindowUart->setStatusBar(statusbar);

        menubar->addAction(menu->menuAction());
        menubar->addAction(menu_2->menuAction());
        menubar->addAction(menu_3->menuAction());
        menu->addAction(actionS);
        menu->addAction(action_P);
        menu->addAction(action_X);
        menu_2->addAction(action_T);
        menu_2->addAction(action_U);
        menu_2->addAction(action_D);
        menu_3->addAction(action_H);
        menu_3->addAction(action_A);

        retranslateUi(MainWindowUart);

        QMetaObject::connectSlotsByName(MainWindowUart);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindowUart)
    {
        MainWindowUart->setWindowTitle(QApplication::translate("MainWindowUart", "\344\270\262\345\217\243\350\275\257\344\273\266", 0));
        actionS->setText(QApplication::translate("MainWindowUart", "\344\277\235\345\255\230\345\210\260\346\226\207\344\273\266(&S)", 0));
        action_P->setText(QApplication::translate("MainWindowUart", "\346\211\223\345\215\260(&P)", 0));
        action_X->setText(QApplication::translate("MainWindowUart", "\351\200\200\345\207\272(&X)", 0));
        action_T->setText(QApplication::translate("MainWindowUart", "\344\273\273\345\212\241\350\260\203\345\272\246\344\273\277\347\234\237\350\275\257\344\273\266", 0));
        action_U->setText(QApplication::translate("MainWindowUart", "\344\270\262\345\217\243\346\216\245\346\224\266\350\275\257\344\273\266(&U)", 0));
        action_D->setText(QApplication::translate("MainWindowUart", "\347\273\230\345\233\276\350\275\257\344\273\266(&D)", 0));
        action_H->setText(QApplication::translate("MainWindowUart", "\346\237\245\347\234\213\345\270\256\345\212\251(&H)", 0));
        action_A->setText(QApplication::translate("MainWindowUart", "\345\205\263\344\272\216\350\275\257\344\273\266(&A)", 0));
        checkBoxHexSend->setText(QApplication::translate("MainWindowUart", "Hex\345\217\221\351\200\201", 0));
        pushButtonSend->setText(QApplication::translate("MainWindowUart", "\345\217\221\351\200\201", 0));
        checkBoxHexRxd->setText(QApplication::translate("MainWindowUart", "Hex\346\230\276\347\244\272", 0));
        labelName->setText(QString());
        groupBox->setTitle(QApplication::translate("MainWindowUart", "\344\270\262\345\217\243\351\205\215\347\275\256", 0));
        label_7->setText(QApplication::translate("MainWindowUart", "\345\201\234\346\255\242\344\275\215\357\274\232", 0));
        pushButtonOpen->setText(QString());
        label_3->setText(QApplication::translate("MainWindowUart", "\347\253\257\345\217\243\345\217\267\357\274\232", 0));
        label_4->setText(QApplication::translate("MainWindowUart", "\346\263\242\347\211\271\347\216\207\357\274\232", 0));
        StopBox->clear();
        StopBox->insertItems(0, QStringList()
         << QApplication::translate("MainWindowUart", "1", 0)
         << QApplication::translate("MainWindowUart", "2", 0)
        );
        ParityBox->clear();
        ParityBox->insertItems(0, QStringList()
         << QApplication::translate("MainWindowUart", "0", 0)
        );
        BaudBox->clear();
        BaudBox->insertItems(0, QStringList()
         << QApplication::translate("MainWindowUart", "9600", 0)
         << QApplication::translate("MainWindowUart", "19200", 0)
         << QApplication::translate("MainWindowUart", "38400", 0)
         << QApplication::translate("MainWindowUart", "115200", 0)
        );
        label_6->setText(QApplication::translate("MainWindowUart", "\346\240\241\351\252\214\344\275\215\357\274\232", 0));
        label_5->setText(QApplication::translate("MainWindowUart", "\346\225\260\346\215\256\344\275\215\357\274\232", 0));
        BitNumBox->clear();
        BitNumBox->insertItems(0, QStringList()
         << QApplication::translate("MainWindowUart", "8", 0)
        );
        pushButtonFresh->setText(QApplication::translate("MainWindowUart", "\345\210\267\346\226\260\344\270\262\345\217\243", 0));
        pushButtonClearTxd->setText(QApplication::translate("MainWindowUart", "\346\270\205\347\251\272\345\217\221\351\200\201", 0));
        pushButtonClearRxd->setText(QApplication::translate("MainWindowUart", "\346\270\205\347\251\272\346\216\245\346\224\266", 0));
        labelTimesLog->setText(QString());
        menu->setTitle(QApplication::translate("MainWindowUart", "\346\226\207\344\273\266(&F)", 0));
        menu_2->setTitle(QApplication::translate("MainWindowUart", "\345\267\245\345\205\267(&T)", 0));
        menu_3->setTitle(QApplication::translate("MainWindowUart", "\345\270\256\345\212\251(&H)", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindowUart: public Ui_MainWindowUart {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOWUART_H
