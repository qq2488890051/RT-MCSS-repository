/********************************************************************************
** Form generated from reading UI file 'dialogsuperaddcurve.ui'
**
** Created by: Qt User Interface Compiler version 5.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGSUPERADDCURVE_H
#define UI_DIALOGSUPERADDCURVE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_DialogSuperaddCurve
{
public:
    QPushButton *pushButtonOk;
    QPushButton *pushButtonNo;
    QPlainTextEdit *plainTextEdit;

    void setupUi(QDialog *DialogSuperaddCurve)
    {
        if (DialogSuperaddCurve->objectName().isEmpty())
            DialogSuperaddCurve->setObjectName(QStringLiteral("DialogSuperaddCurve"));
        DialogSuperaddCurve->resize(297, 662);
        DialogSuperaddCurve->setModal(true);
        pushButtonOk = new QPushButton(DialogSuperaddCurve);
        pushButtonOk->setObjectName(QStringLiteral("pushButtonOk"));
        pushButtonOk->setGeometry(QRect(200, 630, 75, 23));
        pushButtonNo = new QPushButton(DialogSuperaddCurve);
        pushButtonNo->setObjectName(QStringLiteral("pushButtonNo"));
        pushButtonNo->setGeometry(QRect(20, 630, 75, 23));
        plainTextEdit = new QPlainTextEdit(DialogSuperaddCurve);
        plainTextEdit->setObjectName(QStringLiteral("plainTextEdit"));
        plainTextEdit->setGeometry(QRect(10, 10, 271, 611));

        retranslateUi(DialogSuperaddCurve);

        QMetaObject::connectSlotsByName(DialogSuperaddCurve);
    } // setupUi

    void retranslateUi(QDialog *DialogSuperaddCurve)
    {
        DialogSuperaddCurve->setWindowTitle(QApplication::translate("DialogSuperaddCurve", "Dialog", 0));
        pushButtonOk->setText(QApplication::translate("DialogSuperaddCurve", "\347\241\256\345\256\232", 0));
        pushButtonNo->setText(QApplication::translate("DialogSuperaddCurve", "\345\217\226\346\266\210", 0));
    } // retranslateUi

};

namespace Ui {
    class DialogSuperaddCurve: public Ui_DialogSuperaddCurve {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGSUPERADDCURVE_H
