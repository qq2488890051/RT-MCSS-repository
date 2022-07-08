/********************************************************************************
** Form generated from reading UI file 'dialogformatdatainfo.ui'
**
** Created by: Qt User Interface Compiler version 5.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGFORMATDATAINFO_H
#define UI_DIALOGFORMATDATAINFO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>

QT_BEGIN_NAMESPACE

class Ui_DialogFormatDataInfo
{
public:
    QPushButton *pushButton;
    QTextBrowser *textBrowser;

    void setupUi(QDialog *DialogFormatDataInfo)
    {
        if (DialogFormatDataInfo->objectName().isEmpty())
            DialogFormatDataInfo->setObjectName(QStringLiteral("DialogFormatDataInfo"));
        DialogFormatDataInfo->resize(460, 375);
        DialogFormatDataInfo->setModal(true);
        pushButton = new QPushButton(DialogFormatDataInfo);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(370, 340, 80, 31));
        textBrowser = new QTextBrowser(DialogFormatDataInfo);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));
        textBrowser->setGeometry(QRect(20, 10, 431, 321));
        textBrowser->setStyleSheet(QStringLiteral(""));

        retranslateUi(DialogFormatDataInfo);

        QMetaObject::connectSlotsByName(DialogFormatDataInfo);
    } // setupUi

    void retranslateUi(QDialog *DialogFormatDataInfo)
    {
        DialogFormatDataInfo->setWindowTitle(QApplication::translate("DialogFormatDataInfo", "\345\235\220\346\240\207\346\225\260\346\215\256\346\240\274\345\274\217", 0));
        pushButton->setText(QApplication::translate("DialogFormatDataInfo", "\347\241\256\345\256\232", 0));
        textBrowser->setHtml(QApplication::translate("DialogFormatDataInfo", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'SimSun'; font-size:12pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">1.x,y1,y2,y3,...,y14\302\240\302\240\302\240 <span style=\" font-family:'\345\256\213\344\275\223';\">\346\263\250\346\204\217\357\274\232\346\234\200\345\244\232\346\224\257\346\214\201</span>14<span style=\" font-family:'\345\256\213\344\275\223';\">\346\235\241\346\233\262\347\272\277\357\274\214\350\213\261\346\226\207\351\200\227\345\217\267\351\232\224\345\274\200</span></p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">2.axis,x<span style=\" font-family:'\345\256\213\344\275\223"
                        "';\">\350\275\264\346\240\207\347\255\276\345\220\215\347\247\260</span>,y<span style=\" font-family:'\345\256\213\344\275\223';\">\350\275\264\346\240\207\347\255\276\345\220\215\347\247\260</span></p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">3.name,<span style=\" font-family:'\345\256\213\344\275\223';\">\346\233\262\347\272\277</span>1<span style=\" font-family:'\345\256\213\344\275\223';\">\345\220\215\347\247\260</span>,<span style=\" font-family:'\345\256\213\344\275\223';\">\346\233\262\347\272\277</span>2<span style=\" font-family:'\345\256\213\344\275\223';\">\345\220\215\347\247\260</span>,\342\200\246, ,<span style=\" font-family:'\345\256\213\344\275\223';\">\346\233\262\347\272\277</span>14<span style=\" font-family:'\345\256\213\344\275\223';\">\345\220\215\347\247\260</span></p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">4.illus"
                        "tration,<span style=\" font-family:'\345\256\213\344\275\223';\">\345\217\257\344\273\245\347\273\231\345\207\272\347\232\204\344\270\200\344\272\233\350\257\264\346\230\216</span></p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">5.<span style=\" font-family:'\345\256\213\344\275\223';\">\345\217\257\344\273\245\345\207\272\347\216\260\347\251\272\350\241\214\346\210\226\350\200\205\346\227\240\346\225\210\350\241\214\357\274\214\347\273\230\345\233\276\344\274\232\350\207\252\345\212\250\347\225\245\350\277\207</span></p></body></html>", 0));
    } // retranslateUi

};

namespace Ui {
    class DialogFormatDataInfo: public Ui_DialogFormatDataInfo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGFORMATDATAINFO_H
