/********************************************************************************
** Form generated from reading UI file 'mout.ui'
**
** Created by: Qt User Interface Compiler version 5.15.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MOUT_H
#define UI_MOUT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_mOut
{
public:
    QFrame *OutFrame;
    QLineEdit *mOut2_1;
    QLineEdit *mOut1_2;
    QLineEdit *mOut2_2;
    QLineEdit *mOut1_1;
    QFrame *frame_6;
    QLineEdit *mOut2_3;
    QLineEdit *mOut1_3;
    QLineEdit *mOut3_2;
    QLineEdit *mOut3_1;
    QLineEdit *mOut3_3;
    QFrame *frame_7;
    QLineEdit *mOut4_3;
    QLineEdit *mOut3_4;
    QLineEdit *mOut4_4;
    QLineEdit *mOut2_4;
    QLineEdit *mOut1_4;
    QLineEdit *mOut4_2;
    QLineEdit *mOut4_1;
    QFrame *frame_8;
    QLineEdit *mOut4_5;
    QLineEdit *mOut2_5;
    QLineEdit *mOut1_5;
    QLineEdit *mOut5_2;
    QLineEdit *mOut5_5;
    QLineEdit *mOut5_3;
    QLineEdit *mOut5_1;
    QLineEdit *mOut5_4;
    QLineEdit *mOut3_5;
    QPushButton *outClose;
    QLabel *label;

    void setupUi(QDialog *mOut)
    {
        if (mOut->objectName().isEmpty())
            mOut->setObjectName(QString::fromUtf8("mOut"));
        mOut->resize(484, 406);
        OutFrame = new QFrame(mOut);
        OutFrame->setObjectName(QString::fromUtf8("OutFrame"));
        OutFrame->setGeometry(QRect(90, 60, 291, 281));
        OutFrame->setFrameShape(QFrame::NoFrame);
        OutFrame->setFrameShadow(QFrame::Raised);
        mOut2_1 = new QLineEdit(OutFrame);
        mOut2_1->setObjectName(QString::fromUtf8("mOut2_1"));
        mOut2_1->setEnabled(false);
        mOut2_1->setGeometry(QRect(2, 57, 50, 50));
        mOut2_1->setMinimumSize(QSize(50, 50));
        mOut2_1->setMaximumSize(QSize(50, 50));
        QFont font;
        font.setPointSize(18);
        font.setItalic(false);
        mOut2_1->setFont(font);
        mOut2_1->setMaxLength(1);
        mOut2_1->setFrame(true);
        mOut2_1->setCursorPosition(1);
        mOut2_1->setAlignment(Qt::AlignCenter);
        mOut2_1->setReadOnly(true);
        mOut1_2 = new QLineEdit(OutFrame);
        mOut1_2->setObjectName(QString::fromUtf8("mOut1_2"));
        mOut1_2->setGeometry(QRect(57, 2, 50, 50));
        mOut1_2->setMinimumSize(QSize(50, 50));
        mOut1_2->setMaximumSize(QSize(50, 50));
        QFont font1;
        font1.setPointSize(18);
        mOut1_2->setFont(font1);
        mOut1_2->setMaxLength(3);
        mOut1_2->setFrame(true);
        mOut1_2->setCursorPosition(3);
        mOut1_2->setAlignment(Qt::AlignCenter);
        mOut1_2->setReadOnly(true);
        mOut2_2 = new QLineEdit(OutFrame);
        mOut2_2->setObjectName(QString::fromUtf8("mOut2_2"));
        mOut2_2->setGeometry(QRect(57, 57, 50, 50));
        mOut2_2->setMinimumSize(QSize(50, 50));
        mOut2_2->setMaximumSize(QSize(50, 50));
        mOut2_2->setFont(font1);
        mOut2_2->setMaxLength(3);
        mOut2_2->setFrame(true);
        mOut2_2->setCursorPosition(3);
        mOut2_2->setAlignment(Qt::AlignCenter);
        mOut2_2->setReadOnly(true);
        mOut1_1 = new QLineEdit(OutFrame);
        mOut1_1->setObjectName(QString::fromUtf8("mOut1_1"));
        mOut1_1->setGeometry(QRect(2, 2, 50, 50));
        mOut1_1->setMinimumSize(QSize(50, 50));
        mOut1_1->setMaximumSize(QSize(50, 50));
        mOut1_1->setFont(font1);
        mOut1_1->setMaxLength(3);
        mOut1_1->setFrame(true);
        mOut1_1->setCursorPosition(3);
        mOut1_1->setAlignment(Qt::AlignCenter);
        mOut1_1->setReadOnly(true);
        frame_6 = new QFrame(OutFrame);
        frame_6->setObjectName(QString::fromUtf8("frame_6"));
        frame_6->setGeometry(QRect(0, 0, 171, 171));
        mOut2_3 = new QLineEdit(frame_6);
        mOut2_3->setObjectName(QString::fromUtf8("mOut2_3"));
        mOut2_3->setGeometry(QRect(112, 57, 50, 50));
        mOut2_3->setMinimumSize(QSize(50, 50));
        mOut2_3->setMaximumSize(QSize(50, 50));
        mOut2_3->setFont(font1);
        mOut2_3->setMaxLength(3);
        mOut2_3->setFrame(true);
        mOut2_3->setCursorPosition(3);
        mOut2_3->setAlignment(Qt::AlignCenter);
        mOut2_3->setReadOnly(true);
        mOut1_3 = new QLineEdit(frame_6);
        mOut1_3->setObjectName(QString::fromUtf8("mOut1_3"));
        mOut1_3->setGeometry(QRect(112, 2, 50, 50));
        mOut1_3->setMinimumSize(QSize(50, 50));
        mOut1_3->setMaximumSize(QSize(50, 50));
        mOut1_3->setFont(font1);
        mOut1_3->setMaxLength(3);
        mOut1_3->setFrame(true);
        mOut1_3->setCursorPosition(3);
        mOut1_3->setAlignment(Qt::AlignCenter);
        mOut1_3->setReadOnly(true);
        mOut3_2 = new QLineEdit(frame_6);
        mOut3_2->setObjectName(QString::fromUtf8("mOut3_2"));
        mOut3_2->setEnabled(false);
        mOut3_2->setGeometry(QRect(57, 112, 50, 50));
        mOut3_2->setMinimumSize(QSize(50, 50));
        mOut3_2->setMaximumSize(QSize(50, 50));
        mOut3_2->setFont(font);
        mOut3_2->setMaxLength(1);
        mOut3_2->setFrame(true);
        mOut3_2->setCursorPosition(1);
        mOut3_2->setAlignment(Qt::AlignCenter);
        mOut3_2->setReadOnly(true);
        mOut3_1 = new QLineEdit(frame_6);
        mOut3_1->setObjectName(QString::fromUtf8("mOut3_1"));
        mOut3_1->setEnabled(false);
        mOut3_1->setGeometry(QRect(2, 112, 50, 50));
        mOut3_1->setMinimumSize(QSize(50, 50));
        mOut3_1->setMaximumSize(QSize(50, 50));
        mOut3_1->setFont(font);
        mOut3_1->setMaxLength(1);
        mOut3_1->setFrame(true);
        mOut3_1->setCursorPosition(1);
        mOut3_1->setAlignment(Qt::AlignCenter);
        mOut3_1->setReadOnly(true);
        mOut3_3 = new QLineEdit(frame_6);
        mOut3_3->setObjectName(QString::fromUtf8("mOut3_3"));
        mOut3_3->setGeometry(QRect(112, 112, 50, 50));
        mOut3_3->setMinimumSize(QSize(50, 50));
        mOut3_3->setMaximumSize(QSize(50, 50));
        mOut3_3->setFont(font1);
        mOut3_3->setMaxLength(3);
        mOut3_3->setFrame(true);
        mOut3_3->setCursorPosition(3);
        mOut3_3->setAlignment(Qt::AlignCenter);
        mOut3_3->setReadOnly(true);
        frame_7 = new QFrame(OutFrame);
        frame_7->setObjectName(QString::fromUtf8("frame_7"));
        frame_7->setGeometry(QRect(0, 0, 231, 231));
        mOut4_3 = new QLineEdit(frame_7);
        mOut4_3->setObjectName(QString::fromUtf8("mOut4_3"));
        mOut4_3->setEnabled(false);
        mOut4_3->setGeometry(QRect(112, 167, 50, 50));
        mOut4_3->setMinimumSize(QSize(50, 50));
        mOut4_3->setMaximumSize(QSize(50, 50));
        mOut4_3->setFont(font);
        mOut4_3->setMaxLength(1);
        mOut4_3->setFrame(true);
        mOut4_3->setCursorPosition(1);
        mOut4_3->setAlignment(Qt::AlignCenter);
        mOut4_3->setReadOnly(true);
        mOut3_4 = new QLineEdit(frame_7);
        mOut3_4->setObjectName(QString::fromUtf8("mOut3_4"));
        mOut3_4->setGeometry(QRect(167, 112, 50, 50));
        mOut3_4->setMinimumSize(QSize(50, 50));
        mOut3_4->setMaximumSize(QSize(50, 50));
        mOut3_4->setFont(font1);
        mOut3_4->setMaxLength(3);
        mOut3_4->setFrame(true);
        mOut3_4->setCursorPosition(3);
        mOut3_4->setAlignment(Qt::AlignCenter);
        mOut3_4->setReadOnly(true);
        mOut4_4 = new QLineEdit(frame_7);
        mOut4_4->setObjectName(QString::fromUtf8("mOut4_4"));
        mOut4_4->setGeometry(QRect(167, 167, 50, 50));
        mOut4_4->setMinimumSize(QSize(50, 50));
        mOut4_4->setMaximumSize(QSize(50, 50));
        mOut4_4->setFont(font1);
        mOut4_4->setMaxLength(3);
        mOut4_4->setFrame(true);
        mOut4_4->setCursorPosition(3);
        mOut4_4->setAlignment(Qt::AlignCenter);
        mOut4_4->setReadOnly(true);
        mOut2_4 = new QLineEdit(frame_7);
        mOut2_4->setObjectName(QString::fromUtf8("mOut2_4"));
        mOut2_4->setGeometry(QRect(167, 57, 50, 50));
        mOut2_4->setMinimumSize(QSize(50, 50));
        mOut2_4->setMaximumSize(QSize(50, 50));
        mOut2_4->setFont(font1);
        mOut2_4->setMaxLength(3);
        mOut2_4->setFrame(true);
        mOut2_4->setCursorPosition(3);
        mOut2_4->setAlignment(Qt::AlignCenter);
        mOut2_4->setReadOnly(true);
        mOut1_4 = new QLineEdit(frame_7);
        mOut1_4->setObjectName(QString::fromUtf8("mOut1_4"));
        mOut1_4->setGeometry(QRect(167, 2, 50, 50));
        mOut1_4->setMinimumSize(QSize(50, 50));
        mOut1_4->setMaximumSize(QSize(50, 50));
        mOut1_4->setFont(font1);
        mOut1_4->setMaxLength(3);
        mOut1_4->setFrame(true);
        mOut1_4->setCursorPosition(3);
        mOut1_4->setAlignment(Qt::AlignCenter);
        mOut1_4->setReadOnly(true);
        mOut4_2 = new QLineEdit(frame_7);
        mOut4_2->setObjectName(QString::fromUtf8("mOut4_2"));
        mOut4_2->setEnabled(false);
        mOut4_2->setGeometry(QRect(57, 167, 50, 50));
        mOut4_2->setMinimumSize(QSize(50, 50));
        mOut4_2->setMaximumSize(QSize(50, 50));
        mOut4_2->setFont(font);
        mOut4_2->setMaxLength(1);
        mOut4_2->setFrame(true);
        mOut4_2->setCursorPosition(1);
        mOut4_2->setAlignment(Qt::AlignCenter);
        mOut4_2->setReadOnly(true);
        mOut4_1 = new QLineEdit(frame_7);
        mOut4_1->setObjectName(QString::fromUtf8("mOut4_1"));
        mOut4_1->setEnabled(false);
        mOut4_1->setGeometry(QRect(2, 167, 50, 50));
        mOut4_1->setMinimumSize(QSize(50, 50));
        mOut4_1->setMaximumSize(QSize(50, 50));
        mOut4_1->setFont(font);
        mOut4_1->setMaxLength(1);
        mOut4_1->setFrame(true);
        mOut4_1->setCursorPosition(1);
        mOut4_1->setAlignment(Qt::AlignCenter);
        mOut4_1->setReadOnly(true);
        frame_8 = new QFrame(OutFrame);
        frame_8->setObjectName(QString::fromUtf8("frame_8"));
        frame_8->setGeometry(QRect(0, 0, 281, 281));
        frame_8->setAutoFillBackground(false);
        mOut4_5 = new QLineEdit(frame_8);
        mOut4_5->setObjectName(QString::fromUtf8("mOut4_5"));
        mOut4_5->setGeometry(QRect(222, 167, 50, 50));
        mOut4_5->setMinimumSize(QSize(50, 50));
        mOut4_5->setMaximumSize(QSize(50, 50));
        mOut4_5->setFont(font1);
        mOut4_5->setMaxLength(3);
        mOut4_5->setFrame(true);
        mOut4_5->setCursorPosition(3);
        mOut4_5->setAlignment(Qt::AlignCenter);
        mOut4_5->setReadOnly(true);
        mOut2_5 = new QLineEdit(frame_8);
        mOut2_5->setObjectName(QString::fromUtf8("mOut2_5"));
        mOut2_5->setGeometry(QRect(222, 57, 50, 50));
        mOut2_5->setMinimumSize(QSize(50, 50));
        mOut2_5->setMaximumSize(QSize(50, 50));
        mOut2_5->setFont(font1);
        mOut2_5->setMaxLength(3);
        mOut2_5->setFrame(true);
        mOut2_5->setCursorPosition(3);
        mOut2_5->setAlignment(Qt::AlignCenter);
        mOut2_5->setReadOnly(true);
        mOut1_5 = new QLineEdit(frame_8);
        mOut1_5->setObjectName(QString::fromUtf8("mOut1_5"));
        mOut1_5->setGeometry(QRect(222, 2, 50, 50));
        mOut1_5->setMinimumSize(QSize(50, 50));
        mOut1_5->setMaximumSize(QSize(50, 50));
        mOut1_5->setFont(font1);
        mOut1_5->setMaxLength(3);
        mOut1_5->setFrame(true);
        mOut1_5->setCursorPosition(3);
        mOut1_5->setAlignment(Qt::AlignCenter);
        mOut1_5->setReadOnly(true);
        mOut5_2 = new QLineEdit(frame_8);
        mOut5_2->setObjectName(QString::fromUtf8("mOut5_2"));
        mOut5_2->setEnabled(false);
        mOut5_2->setGeometry(QRect(57, 222, 50, 50));
        mOut5_2->setMinimumSize(QSize(50, 50));
        mOut5_2->setMaximumSize(QSize(50, 50));
        mOut5_2->setFont(font);
        mOut5_2->setMaxLength(1);
        mOut5_2->setFrame(true);
        mOut5_2->setCursorPosition(1);
        mOut5_2->setAlignment(Qt::AlignCenter);
        mOut5_2->setReadOnly(true);
        mOut5_5 = new QLineEdit(frame_8);
        mOut5_5->setObjectName(QString::fromUtf8("mOut5_5"));
        mOut5_5->setGeometry(QRect(222, 222, 50, 50));
        mOut5_5->setMinimumSize(QSize(50, 50));
        mOut5_5->setMaximumSize(QSize(50, 50));
        mOut5_5->setFont(font1);
        mOut5_5->setMaxLength(3);
        mOut5_5->setFrame(true);
        mOut5_5->setCursorPosition(3);
        mOut5_5->setAlignment(Qt::AlignCenter);
        mOut5_5->setReadOnly(true);
        mOut5_3 = new QLineEdit(frame_8);
        mOut5_3->setObjectName(QString::fromUtf8("mOut5_3"));
        mOut5_3->setEnabled(false);
        mOut5_3->setGeometry(QRect(112, 222, 50, 50));
        mOut5_3->setMinimumSize(QSize(50, 50));
        mOut5_3->setMaximumSize(QSize(50, 50));
        mOut5_3->setFont(font);
        mOut5_3->setMaxLength(1);
        mOut5_3->setFrame(true);
        mOut5_3->setCursorPosition(1);
        mOut5_3->setAlignment(Qt::AlignCenter);
        mOut5_3->setReadOnly(true);
        mOut5_1 = new QLineEdit(frame_8);
        mOut5_1->setObjectName(QString::fromUtf8("mOut5_1"));
        mOut5_1->setEnabled(false);
        mOut5_1->setGeometry(QRect(2, 222, 50, 50));
        mOut5_1->setMinimumSize(QSize(50, 50));
        mOut5_1->setMaximumSize(QSize(50, 50));
        mOut5_1->setFont(font);
        mOut5_1->setMaxLength(1);
        mOut5_1->setFrame(true);
        mOut5_1->setCursorPosition(1);
        mOut5_1->setAlignment(Qt::AlignCenter);
        mOut5_1->setReadOnly(true);
        mOut5_4 = new QLineEdit(frame_8);
        mOut5_4->setObjectName(QString::fromUtf8("mOut5_4"));
        mOut5_4->setEnabled(false);
        mOut5_4->setGeometry(QRect(167, 222, 50, 50));
        mOut5_4->setMinimumSize(QSize(50, 50));
        mOut5_4->setMaximumSize(QSize(50, 50));
        mOut5_4->setFont(font);
        mOut5_4->setMaxLength(1);
        mOut5_4->setFrame(true);
        mOut5_4->setCursorPosition(1);
        mOut5_4->setAlignment(Qt::AlignCenter);
        mOut5_4->setReadOnly(true);
        mOut3_5 = new QLineEdit(frame_8);
        mOut3_5->setObjectName(QString::fromUtf8("mOut3_5"));
        mOut3_5->setGeometry(QRect(222, 112, 50, 50));
        mOut3_5->setMinimumSize(QSize(50, 50));
        mOut3_5->setMaximumSize(QSize(50, 50));
        mOut3_5->setFont(font1);
        mOut3_5->setMaxLength(3);
        mOut3_5->setFrame(true);
        mOut3_5->setCursorPosition(3);
        mOut3_5->setAlignment(Qt::AlignCenter);
        mOut3_5->setReadOnly(true);
        outClose = new QPushButton(mOut);
        outClose->setObjectName(QString::fromUtf8("outClose"));
        outClose->setGeometry(QRect(390, 370, 81, 21));
        label = new QLabel(mOut);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(30, 20, 341, 21));

        retranslateUi(mOut);
        QObject::connect(outClose, SIGNAL(clicked()), mOut, SLOT(reject()));

        QMetaObject::connectSlotsByName(mOut);
    } // setupUi

    void retranslateUi(QDialog *mOut)
    {
        mOut->setWindowTitle(QCoreApplication::translate("mOut", "Dialog", nullptr));
        mOut2_1->setInputMask(QString());
        mOut2_1->setText(QCoreApplication::translate("mOut", "0", nullptr));
        mOut1_2->setInputMask(QCoreApplication::translate("mOut", "999", nullptr));
        mOut1_2->setText(QCoreApplication::translate("mOut", "0", nullptr));
        mOut2_2->setInputMask(QCoreApplication::translate("mOut", "999", nullptr));
        mOut2_2->setText(QCoreApplication::translate("mOut", "0", nullptr));
        mOut1_1->setInputMask(QCoreApplication::translate("mOut", "999", nullptr));
        mOut1_1->setText(QCoreApplication::translate("mOut", "0", nullptr));
        mOut2_3->setInputMask(QCoreApplication::translate("mOut", "999", nullptr));
        mOut2_3->setText(QCoreApplication::translate("mOut", "0", nullptr));
        mOut1_3->setInputMask(QCoreApplication::translate("mOut", "999", nullptr));
        mOut1_3->setText(QCoreApplication::translate("mOut", "0", nullptr));
        mOut3_2->setInputMask(QString());
        mOut3_2->setText(QCoreApplication::translate("mOut", "0", nullptr));
        mOut3_1->setInputMask(QString());
        mOut3_1->setText(QCoreApplication::translate("mOut", "0", nullptr));
        mOut3_3->setInputMask(QCoreApplication::translate("mOut", "999", nullptr));
        mOut3_3->setText(QCoreApplication::translate("mOut", "0", nullptr));
        mOut4_3->setInputMask(QString());
        mOut4_3->setText(QCoreApplication::translate("mOut", "0", nullptr));
        mOut3_4->setInputMask(QCoreApplication::translate("mOut", "999", nullptr));
        mOut3_4->setText(QCoreApplication::translate("mOut", "0", nullptr));
        mOut4_4->setInputMask(QCoreApplication::translate("mOut", "999", nullptr));
        mOut4_4->setText(QCoreApplication::translate("mOut", "0", nullptr));
        mOut2_4->setInputMask(QCoreApplication::translate("mOut", "999", nullptr));
        mOut2_4->setText(QCoreApplication::translate("mOut", "0", nullptr));
        mOut1_4->setInputMask(QCoreApplication::translate("mOut", "999", nullptr));
        mOut1_4->setText(QCoreApplication::translate("mOut", "0", nullptr));
        mOut4_2->setInputMask(QString());
        mOut4_2->setText(QCoreApplication::translate("mOut", "0", nullptr));
        mOut4_1->setInputMask(QString());
        mOut4_1->setText(QCoreApplication::translate("mOut", "0", nullptr));
        mOut4_5->setInputMask(QCoreApplication::translate("mOut", "999", nullptr));
        mOut4_5->setText(QCoreApplication::translate("mOut", "0", nullptr));
        mOut2_5->setInputMask(QCoreApplication::translate("mOut", "999", nullptr));
        mOut2_5->setText(QCoreApplication::translate("mOut", "0", nullptr));
        mOut1_5->setInputMask(QCoreApplication::translate("mOut", "999", nullptr));
        mOut1_5->setText(QCoreApplication::translate("mOut", "0", nullptr));
        mOut5_2->setInputMask(QString());
        mOut5_2->setText(QCoreApplication::translate("mOut", "0", nullptr));
        mOut5_5->setInputMask(QCoreApplication::translate("mOut", "999", nullptr));
        mOut5_5->setText(QCoreApplication::translate("mOut", "0", nullptr));
        mOut5_3->setInputMask(QString());
        mOut5_3->setText(QCoreApplication::translate("mOut", "0", nullptr));
        mOut5_1->setInputMask(QString());
        mOut5_1->setText(QCoreApplication::translate("mOut", "0", nullptr));
        mOut5_4->setInputMask(QString());
        mOut5_4->setText(QCoreApplication::translate("mOut", "0", nullptr));
        mOut3_5->setInputMask(QCoreApplication::translate("mOut", "999", nullptr));
        mOut3_5->setText(QCoreApplication::translate("mOut", "0", nullptr));
        outClose->setText(QCoreApplication::translate("mOut", "\320\227\320\260\320\272\321\200\321\213\321\202\321\214", nullptr));
        label->setText(QCoreApplication::translate("mOut", "<html><head/><body><p><span style=\" font-size:14pt;\">\320\234\320\260\321\202\321\200\320\270\321\206\320\260:</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class mOut: public Ui_mOut {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MOUT_H
