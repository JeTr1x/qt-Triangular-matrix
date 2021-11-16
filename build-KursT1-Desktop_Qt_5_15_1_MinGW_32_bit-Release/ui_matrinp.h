/********************************************************************************
** Form generated from reading UI file 'matrinp.ui'
**
** Created by: Qt User Interface Compiler version 5.15.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MATRINP_H
#define UI_MATRINP_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>

QT_BEGIN_NAMESPACE

class Ui_MatrInp
{
public:
    QLabel *label;
    QLineEdit *lineEdit;

    void setupUi(QDialog *MatrInp)
    {
        if (MatrInp->objectName().isEmpty())
            MatrInp->setObjectName(QString::fromUtf8("MatrInp"));
        MatrInp->resize(554, 450);
        label = new QLabel(MatrInp);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(160, 100, 47, 13));
        lineEdit = new QLineEdit(MatrInp);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(70, 70, 40, 40));
        lineEdit->setMinimumSize(QSize(40, 40));
        lineEdit->setMaximumSize(QSize(40, 40));

        retranslateUi(MatrInp);

        QMetaObject::connectSlotsByName(MatrInp);
    } // setupUi

    void retranslateUi(QDialog *MatrInp)
    {
        MatrInp->setWindowTitle(QCoreApplication::translate("MatrInp", "Dialog", nullptr));
        label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MatrInp: public Ui_MatrInp {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MATRINP_H
