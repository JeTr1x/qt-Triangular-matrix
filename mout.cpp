#include "mout.h"
#include "ui_mout.h"
#include "mainwindow.h"




using namespace MyMass;

mOut::mOut(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::mOut)
{



    ui->setupUi(this);
    ui->OutFrame->hide();
    if(n==2){
        ui->frame_6->hide();
        ui->frame_7->hide();
        ui->frame_8->hide();
        ui->mOut1_1->setText(QString::number(mass[0]));
        ui->mOut1_2->setText(QString::number(mass[1]));
        ui->mOut2_2->setText(QString::number(mass[2]));
}
    if(n==3){
        ui->frame_7->hide();
        ui->frame_8->hide();
        ui->mOut1_1->setText(QString::number(mass[0]));
        ui->mOut1_2->setText(QString::number(mass[1]));
        ui->mOut1_3->setText(QString::number(mass[2]));
        ui->mOut2_2->setText(QString::number(mass[3]));
        ui->mOut2_3->setText(QString::number(mass[4]));
        ui->mOut3_3->setText(QString::number(mass[5]));
}
    if(n==4){
        ui->frame_8->hide();
        ui->mOut1_1->setText(QString::number(mass[0]));
        ui->mOut1_2->setText(QString::number(mass[1]));
        ui->mOut1_3->setText(QString::number(mass[2]));
        ui->mOut1_4->setText(QString::number(mass[3]));
        ui->mOut2_2->setText(QString::number(mass[4]));
        ui->mOut2_3->setText(QString::number(mass[5]));
        ui->mOut2_4->setText(QString::number(mass[6]));
        ui->mOut3_3->setText(QString::number(mass[7]));
        ui->mOut3_4->setText(QString::number(mass[8]));
        ui->mOut4_4->setText(QString::number(mass[9]));
}
    if(n==5){
        ui->mOut1_1->setText(QString::number(mass[0]));
        ui->mOut1_2->setText(QString::number(mass[1]));
        ui->mOut1_3->setText(QString::number(mass[2]));
        ui->mOut1_4->setText(QString::number(mass[3]));
        ui->mOut1_5->setText(QString::number(mass[4]));
        ui->mOut2_2->setText(QString::number(mass[5]));
        ui->mOut2_3->setText(QString::number(mass[6]));
        ui->mOut2_4->setText(QString::number(mass[7]));
        ui->mOut2_5->setText(QString::number(mass[8]));
        ui->mOut3_3->setText(QString::number(mass[9]));
        ui->mOut3_4->setText(QString::number(mass[10]));
        ui->mOut3_5->setText(QString::number(mass[11]));
        ui->mOut4_4->setText(QString::number(mass[12]));
        ui->mOut4_5->setText(QString::number(mass[13]));
        ui->mOut5_5->setText(QString::number(mass[14]));
}
    ui->OutFrame->show();





}

mOut::~mOut()
{
    delete ui;
}
