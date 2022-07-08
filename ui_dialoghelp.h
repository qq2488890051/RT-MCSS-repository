/********************************************************************************
** Form generated from reading UI file 'dialoghelp.ui'
**
** Created by: Qt User Interface Compiler version 5.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGHELP_H
#define UI_DIALOGHELP_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>

QT_BEGIN_NAMESPACE

class Ui_DialogHelp
{
public:
    QPushButton *pushButton;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_3;
    QTextBrowser *textBrowser;

    void setupUi(QDialog *DialogHelp)
    {
        if (DialogHelp->objectName().isEmpty())
            DialogHelp->setObjectName(QStringLiteral("DialogHelp"));
        DialogHelp->resize(458, 451);
        DialogHelp->setSizeGripEnabled(false);
        DialogHelp->setModal(true);
        pushButton = new QPushButton(DialogHelp);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(360, 420, 80, 20));
        label = new QLabel(DialogHelp);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 10, 251, 21));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font.setPointSize(12);
        label->setFont(font);
        label_2 = new QLabel(DialogHelp);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(20, 40, 121, 21));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font1.setPointSize(10);
        font1.setBold(false);
        font1.setWeight(50);
        label_2->setFont(font1);
        label_4 = new QLabel(DialogHelp);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(20, 70, 221, 21));
        label_4->setFont(font1);
        label_5 = new QLabel(DialogHelp);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(20, 100, 171, 21));
        label_5->setFont(font1);
        label_6 = new QLabel(DialogHelp);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(20, 130, 171, 21));
        label_6->setFont(font1);
        label_3 = new QLabel(DialogHelp);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(10, 200, 251, 21));
        label_3->setFont(font);
        textBrowser = new QTextBrowser(DialogHelp);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));
        textBrowser->setGeometry(QRect(10, 230, 431, 161));
        textBrowser->setStyleSheet(QStringLiteral("background-color: rgba(255, 255, 255, 0);"));

        retranslateUi(DialogHelp);

        QMetaObject::connectSlotsByName(DialogHelp);
    } // setupUi

    void retranslateUi(QDialog *DialogHelp)
    {
        DialogHelp->setWindowTitle(QApplication::translate("DialogHelp", "help of software", 0));
        pushButton->setText(QApplication::translate("DialogHelp", "ok", 0));
        label->setText(QApplication::translate("DialogHelp", "The functions of this software\357\274\232", 0));
        label_2->setText(QApplication::translate("DialogHelp", "* taske set input", 0));
        label_4->setText(QApplication::translate("DialogHelp", "* mix task scheduling simulation", 0));
        label_5->setText(QApplication::translate("DialogHelp", "* deadline missed detect", 0));
        label_6->setText(QApplication::translate("DialogHelp", "* and more ...", 0));
        label_3->setText(QApplication::translate("DialogHelp", "Some tips for use:", 0));
        textBrowser->setHtml(QApplication::translate("DialogHelp", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'SimSun'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">The <span style=\" font-weight:600;\">Fixed-point task's type is 0</span> and <span style=\" font-weight:600;\">the execution process cannot be preempted</span>. It can be modeled as:</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">    \\forall \\tau_i,\\tau_j \\in S_F \\rightarrow A_i \\neq A_j,D_i=C_i,T_i=T_j=T_C</p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p s"
                        "tyle=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">The <span style=\" font-weight:600;\">Periodic/Sporadic task's type is 1</span>, and can be modeled as:</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">    \\forall \\tau_i,\\tau_j \\in S_S \\rightarrow A_i=A_j=0, D_i&lt;=T_i</p></body></html>", 0));
    } // retranslateUi

};

namespace Ui {
    class DialogHelp: public Ui_DialogHelp {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGHELP_H
