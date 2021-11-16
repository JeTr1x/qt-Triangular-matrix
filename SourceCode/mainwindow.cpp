#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "mout.h"
#include <QFileDialog>
#include "stdio.h"
#include <fstream>
#include <QTextStream>
int i,j;
using namespace std;


using namespace MyMass;
namespace MyMass {
int n=0;
int mass[25];
int deleteAll = 0;
}

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{


    for (int i = 0;i<25;i++){
        mass[i]=0;
    }

    ui->setupUi(this);
    ui->inpLabel->hide();
    ui->mSizeSlider->hide();
    ui->pushButton_2->hide();
    ui->mainFrame->hide();
    ui->slidertxtFrame->hide();
    ui->ijframe->hide();
    ui->saveMatr->hide();
    ui->readyBut->hide();
    ui->ijElemInp->hide();
    ui->ijSaveBut->hide();
    ui->ijButton->hide();
    ui->ijOutBut->hide();
    ui->ijElemOut->hide();
    ui->ravnBut->hide();
    ui->raznBut->hide();
    ui->rzvFrame->hide();
    ui->rvLabel->hide();


}

MainWindow::~MainWindow()
{
    delete ui;


}




void MainWindow::on_pushButton_clicked()
{
   ui->pushButton->hide();

   if( ui->listWidget->currentItem()== ui->listWidget->item(1) ){
       ui->inpLabel->show();
       ui->mSizeSlider->show();
       ui->slidertxtFrame->show();
       ui->pushButton_2->show();

   }
   if(ui->listWidget->currentItem()== ui->listWidget->item(2) ){
       ui->inpLabel->show();
       ui->mSizeSlider->show();
       ui->slidertxtFrame->show();
       ui->pushButton_2->show();


   }

   if( ui->listWidget->currentItem()== ui->listWidget->item(4) ){

       mOut wind;

       wind.setModal(false);
       wind.exec();

   }
   if(ui->listWidget->currentItem()== ui->listWidget->item(5)){
       ui->ijframe->show();
       ui->ijOutBut->show();


   }
   if( ui->listWidget->currentItem()== ui->listWidget->item(6) ){
       ui->inpLabel->show();
       ui->mSizeSlider->show();
       ui->slidertxtFrame->show();
       ui->raznBut->show();



   }
   if( ui->listWidget->currentItem()== ui->listWidget->item(7) ){

       ui->inpLabel->show();
       ui->mSizeSlider->show();
       ui->slidertxtFrame->show();
       ui->ravnBut->show();




   }

   if( ui->listWidget->currentItem()== ui->listWidget->item(8) ){
      if(n==0){return;}
      QString fileName = QFileDialog::getOpenFileName(this,tr("Выберите или создайте текстовый файл для записи матрицы"), "C:/Users/Ильшат/Desktop", tr("Text Files(*.txt)"));

      QFile wrM(fileName);
      if (!wrM.open(QIODevice::WriteOnly | QIODevice::Text))
             return;
      QTextStream out(&wrM);
      out << n << "\n";
      int kn=0;
      for(int i = 0; i<n*n; i++){
          kn++;

          out << mass[i];
          if(kn==n*n) return;
          if(kn%n==0) {

              out << "\n";
              if(kn/n==1) {
                  out<<"0 ";
                  kn++;
              }
              if(kn/n==2) {
                  out<<"0 0 ";
                  kn=kn+2;
                  }
              if(kn/n==3){

                  out<<"0 0 0 ";
                  kn=kn+3;
              }
              if(kn/n==4){
                  out<<"0 0 0 0 ";
                  kn=kn+4;
              }


          }
          else out<<" ";


      }

   }
   if( ui->listWidget->currentItem()== ui->listWidget->item(9) ){
       QString fileName = QFileDialog::getOpenFileName(this,tr("Выберите текстовый файл для чтения матрицы"), "C:/Users/Ильшат/Desktop", tr("Text Files(*.txt)"));

       QFile wrM(fileName);
       if (!wrM.open(QIODevice::ReadOnly | QIODevice::Text))
              return;
       QTextStream in(&wrM);
       in>>n;
       int ko=0;
       int kin=n*n;
       for(int i = 0; i < kin; i++){
           ko++;
           in>>mass[i];
           if(ko==n*n){
               mOut wind;

               wind.setModal(false);
               wind.exec();
               return;
           }
           if(ko%n==0){
               if(ko/n==1){
                   kin--;
                   ko++;
                   in.read(2);
               }
               if(ko/n==2){
                   kin = kin - 2;
                   ko = ko + 2;
                   in.read(4);
               }
               if(ko/n==3){
                   kin = kin - 3;
                   ko = ko + 3;
                   in.read(6);
               }
               if(ko/n==4){
                   kin = kin - 4;
                   ko = ko + 4;
                   in.read(8);
               }
           }
       }



   }

}

void MainWindow::on_pushButton_2_clicked()
{

  if( ui->listWidget->currentItem()== ui->listWidget->item(1) ){


    n=ui->mSizeSlider->value();
    ui->listWidget->hide();
    ui->label->setText("Введите элементы матрицы");
    ui->inpLabel->hide();
    ui->mSizeSlider->hide();
    ui->slidertxtFrame->hide();
    ui->pushButton_2->hide();
    ui->mainFrame->show();
    ui->saveMatr->show();

    if(n==2){
        ui->frame_3->hide();
        ui->frame_4->hide();
        ui->frame_5->hide();

    }

    if(n==3){


        ui->frame_4->hide();
        ui->frame_5->hide();
        ui->frame_3->show();

    }
    if(n==4){
        ui->frame_3->show();
        ui->frame_4->show();
        ui->frame_5->hide();
    }
    if(n==5){
        ui->frame_3->show();
        ui->frame_4->show();
        ui->frame_5->show();
        }


    }
  if(ui->listWidget->currentItem()== ui->listWidget->item(2) ){
      ui->inpLabel->hide();
      ui->mSizeSlider->hide();
      ui->slidertxtFrame->hide();
      ui->pushButton_2->hide();
      ui->ijframe->show();
      ui->ijButton->show();


  }
}

void MainWindow::on_ijButton_clicked()
{
    n=ui->mSizeSlider->value();
    ui->label->setText("Введите значение элемента " + ui->spinBoxI->text()+" "+ui->spinBoxJ->text());
    ui->listWidget->hide();
    ui->ijButton->hide();
    ui->inpLabel->hide();
    ui->mSizeSlider->hide();
    ui->slidertxtFrame->hide();
    ui->ijframe->hide();
    ui->pushButton_2->hide();
    if(n==0){ }
    i=ui->spinBoxI->value();

    j=ui->spinBoxJ->value();
    ui->ijElemInp->show();
    ui->ijSaveBut->show();





}

void MainWindow::on_saveMatr_clicked()
{
    if(n==2){
        mass[0] = ui->mInp1_1->text().toInt();
        mass[1] = ui->mInp1_2->text().toInt();
        mass[2] = ui->mInp2_2->text().toInt();
        ui->spinBoxI->setMaximum(2);
        ui->spinBoxJ->setMaximum(2);


}
    if(n==3){
        mass[0] = ui->mInp1_1->text().toInt();
        mass[1] = ui->mInp1_2->text().toInt();
        mass[2] = ui->mInp1_3->text().toInt();
        mass[3] = ui->mInp2_2->text().toInt();
        mass[4] = ui->mInp2_3->text().toInt();
        mass[5] = ui->mInp3_3->text().toInt();

        ui->spinBoxI->setMaximum(3);
        ui->spinBoxJ->setMaximum(3);

}
    if(n==4){
        mass[0] = ui->mInp1_1->text().toInt();
        mass[1] = ui->mInp1_2->text().toInt();
        mass[2] = ui->mInp1_3->text().toInt();
        mass[3] = ui->mInp1_4->text().toInt();
        mass[4] = ui->mInp2_2->text().toInt();
        mass[5] = ui->mInp2_3->text().toInt();
        mass[6] = ui->mInp2_4->text().toInt();
        mass[7] = ui->mInp3_3->text().toInt();
        mass[8] = ui->mInp3_4->text().toInt();
        mass[9] = ui->mInp4_4->text().toInt();

        ui->spinBoxI->setMaximum(4);
        ui->spinBoxJ->setMaximum(4);

}
    if(n==5){
        mass[0] = ui->mInp1_1->text().toInt();
        mass[1] = ui->mInp1_2->text().toInt();
        mass[2] = ui->mInp1_3->text().toInt();
        mass[3] = ui->mInp1_4->text().toInt();
        mass[4] = ui->mInp1_5->text().toInt();
        mass[5] = ui->mInp2_2->text().toInt();
        mass[6] = ui->mInp2_3->text().toInt();
        mass[7] = ui->mInp2_4->text().toInt();
        mass[8] = ui->mInp2_5->text().toInt();
        mass[9] = ui->mInp3_3->text().toInt();
        mass[10] = ui->mInp3_4->text().toInt();
        mass[11] = ui->mInp3_5->text().toInt();
        mass[12] = ui->mInp4_4->text().toInt();
        mass[13] = ui->mInp4_5->text().toInt();
        mass[14] = ui->mInp5_5->text().toInt();

        ui->spinBoxI->setMaximum(5);
        ui->spinBoxJ->setMaximum(5);


}



    ui->saveMatr->hide();
    ui->readyBut->show();




}

void MainWindow::on_spinBoxI_valueChanged(int a)
{
  ui->spinBoxJ->setMinimum(a);

}

void MainWindow::on_readyBut_clicked()
{
    ui->listWidget->show();
    ui->ijElemOut->hide();
    ui->ijElemInp->hide();
    ui->label->setText("Введите элементы матрицы");
    ui->mainFrame->hide();
    ui->pushButton->show();
    ui->readyBut->hide();


}

void MainWindow::on_ijSaveBut_clicked()
{
    if(n==2){
        if(i==1) {
            mass[j-i] = ui->ijElemInp->text().toInt();}

        if(i==2) {
            mass[n+j-i] = ui->ijElemInp->text().toInt();
        }
    }
    if(n==3){
        if(i==1) {
            mass[j-i] = ui->ijElemInp->text().toInt();
        }
        if(i==2){
            mass[n+j-i] = ui->ijElemInp->text().toInt();
        }
        if(i==3){
            mass[n+n-1+j-i] = ui->ijElemInp->text().toInt();
        }
    }
    if(n==4){
        if(i==1) {
            mass[j-i] = ui->ijElemInp->text().toInt();
        }
        if(i==2){
            mass[n+j-i] = ui->ijElemInp->text().toInt();
        }
        if(i==3){
            mass[n+n-1+j-i] = ui->ijElemInp->text().toInt();
        }
        if(i==4){
            mass[n+n-1+n-2+j-i] = ui->ijElemInp->text().toInt();
        }

    }
     if(n==5){
         if(i==1) {
             mass[j-i] = ui->ijElemInp->text().toInt();
         }
         if(i==2){
             mass[n+j-i] = ui->ijElemInp->text().toInt();
         }
         if(i==3){
             mass[n+n-1+j-i] = ui->ijElemInp->text().toInt();
         }
         if(i==4){
             mass[n+n-1+n-2+j-i] = ui->ijElemInp->text().toInt();
         }

         if(i==5){
             mass[n+n-1+n-2+n-3+j-i] = ui->ijElemInp->text().toInt();
         }

     }
     ui->ijSaveBut->hide();
     ui->readyBut->show();






}

void MainWindow::on_ijOutBut_clicked()
{
    ui->label->setText("Значение элемента " + ui->spinBoxI->text()+" "+ui->spinBoxJ->text()+" равно:");
    ui->listWidget->hide();
    ui->ijButton->hide();
    ui->inpLabel->hide();
    ui->mSizeSlider->hide();
    ui->slidertxtFrame->hide();
    ui->ijframe->hide();
    ui->pushButton_2->hide();
    i=ui->spinBoxI->value();
    j=ui->spinBoxJ->value();
    ui->ijOutBut->hide();
    if(n==2){
        if(i==1) {
            ui->ijElemOut->setText(QString::number(mass[j-i]));
        }

        if(i==2) {
            ui->ijElemOut->setText(QString::number(mass[n+j-i]));
        }
    }
    if(n==3){
        if(i==1) {
            ui->ijElemOut->setText(QString::number(mass[j-i]));
        }

        if(i==2) {
            ui->ijElemOut->setText(QString::number(mass[n+j-i]));
        }
        if(i==3) {
            ui->ijElemOut->setText(QString::number(mass[n+n-1+j-i]));
        }
    }
    if(n==4){
        if(i==1) {
            ui->ijElemOut->setText(QString::number(mass[j-i]));
        }

        if(i==2) {
            ui->ijElemOut->setText(QString::number(mass[n+j-i]));
        }
        if(i==3) {
            ui->ijElemOut->setText(QString::number(mass[n+n-1+j-i]));
        }
        if(i==4) {
            ui->ijElemOut->setText(QString::number(mass[n+n-1+n-2+j-i]));
        }
    }
    if(n==5){
        if(i==1) {
            ui->ijElemOut->setText(QString::number(mass[j-i]));
        }

        if(i==2) {
            ui->ijElemOut->setText(QString::number(mass[n+j-i]));
        }
        if(i==3) {
            ui->ijElemOut->setText(QString::number(mass[n+n-1+j-i]));
        }
        if(i==4) {
            ui->ijElemOut->setText(QString::number(mass[n+n-1+n-2+j-i]));
        }
        if(i==5) {
            ui->ijElemOut->setText(QString::number(mass[n+n-1+n-2+n-3+j-i]));
        }
    }
    ui->ijElemOut->show();
    ui->readyBut->show();



}

void MainWindow::on_raznBut_clicked()
{
    n=ui->mSizeSlider->value();
    ui->listWidget->hide();
    ui->label->setText("Разность двух матриц");
    ui->inpLabel->hide();
    ui->mSizeSlider->hide();
    ui->slidertxtFrame->hide();
    ui->pushButton_2->hide();
    ui->rzvFrame->show();
    ui->rvBut->hide();
    ui->rvLabel->hide();
    ui->rzBut->show();
    ui->raznBut->hide();
    ui->rzOFrame->show();
    ui->rezLabel->show();
    ui->line->show();
    ui->line_2->show();
    ui->line_3->show();

    if(n==2){

        ui->rzFrame13->hide();
        ui->rzFrame23->hide();
        ui->rzFrame14->hide();
        ui->rzFrame24->hide();
        ui->rzFrame15->hide();
        ui->rzFrame25->hide();

        ui->rzOFrame3->hide();
        ui->rzOFrame4->hide();
        ui->rzOFrame5->hide();

        ui->line->move(600,80);
        ui->line_2->move(600,98);
        ui->line_3->move(230,88);


    }

    if(n==3){
        ui->rzFrame13->show();
        ui->rzFrame23->show();
        ui->rzFrame14->hide();
        ui->rzFrame24->hide();
        ui->rzFrame15->hide();
        ui->rzFrame25->hide();

        ui->rzOFrame3->show();
        ui->rzOFrame4->hide();
        ui->rzOFrame5->hide();

        ui->line->move(610,107);
        ui->line_2->move(610,125);
        ui->line_3->move(240,115);

    }
    if(n==4){
        ui->rzFrame13->show();
        ui->rzFrame23->show();
        ui->rzFrame14->show();
        ui->rzFrame24->show();
        ui->rzFrame15->hide();
        ui->rzFrame25->hide();

        ui->rzOFrame3->show();
        ui->rzOFrame4->show();
        ui->rzOFrame5->hide();

        ui->line->move(640,138);
        ui->line_2->move(640,156);
        ui->line_3->move(270,146);
    }
    if(n==5){
        ui->rzFrame13->show();
        ui->rzFrame23->show();
        ui->rzFrame14->show();
        ui->rzFrame24->show();
        ui->rzFrame15->show();
        ui->rzFrame25->show();

        ui->rzOFrame3->show();
        ui->rzOFrame4->show();
        ui->rzOFrame5->show();

        ui->line->move(670,162);
        ui->line_2->move(670,180);
        ui->line_3->move(300,170);
    }


}

void MainWindow::on_ravnBut_clicked()
{
    n=ui->mSizeSlider->value();
    ui->listWidget->hide();
    ui->label->setText("Проверка равенства двух матриц");
    ui->inpLabel->hide();
    ui->mSizeSlider->hide();
    ui->slidertxtFrame->hide();
    ui->pushButton_2->hide();
    ui->rzvFrame->show();
    ui->rzOFrame->hide();
    ui->rezLabel->hide();

    ui->rzBut->hide();
    ui->ravnBut->hide();
    ui->line->hide();
    ui->line_2->hide();
    ui->line_3->hide();

    if(n==2){
        ui->rzFrame13->hide();
        ui->rzFrame23->hide();
        ui->rzFrame14->hide();
        ui->rzFrame24->hide();
        ui->rzFrame15->hide();
        ui->rzFrame25->hide();
    }

    if(n==3){
        ui->rzFrame13->show();
        ui->rzFrame23->show();
        ui->rzFrame14->hide();
        ui->rzFrame24->hide();
        ui->rzFrame15->hide();
        ui->rzFrame25->hide();

    }
    if(n==4){
        ui->rzFrame13->show();
        ui->rzFrame23->show();
        ui->rzFrame14->show();
        ui->rzFrame24->show();
        ui->rzFrame15->hide();
        ui->rzFrame25->hide();
    }
    if(n==5){
        ui->rzFrame13->show();
        ui->rzFrame23->show();
        ui->rzFrame14->show();
        ui->rzFrame24->show();
        ui->rzFrame15->show();
        ui->rzFrame25->show();
    }
}

void MainWindow::on_rzBut_clicked()
{
    if(n==2){
        int relem1_1 = ui->rzInp1_1->text().toInt() - ui->rzInp1_12->text().toInt();
        int relem1_2 = ui->rzInp1_2->text().toInt() - ui->rzInp1_22->text().toInt();

        int relem2_2 = ui->rzInp2_2->text().toInt() - ui->rzInp2_22->text().toInt();

        ui->rzOut1_1->setText(QString::number(relem1_1));
        ui->rzOut1_2->setText(QString::number(relem1_2));

        ui->rzOut2_2->setText(QString::number(relem2_2));


    }

    if(n==3){
        int relem1_1 = ui->rzInp1_1->text().toInt() - ui->rzInp1_12->text().toInt();
        int relem1_2 = ui->rzInp1_2->text().toInt() - ui->rzInp1_22->text().toInt();
        int relem1_3 = ui->rzInp1_3->text().toInt() - ui->rzInp1_32->text().toInt();

        int relem2_2 = ui->rzInp2_2->text().toInt() - ui->rzInp2_22->text().toInt();
        int relem2_3 = ui->rzInp2_3->text().toInt() - ui->rzInp2_32->text().toInt();

        int relem3_3 = ui->rzInp3_3->text().toInt() - ui->rzInp3_32->text().toInt();

        ui->rzOut1_1->setText(QString::number(relem1_1));
        ui->rzOut1_2->setText(QString::number(relem1_2));
        ui->rzOut1_3->setText(QString::number(relem1_3));

        ui->rzOut2_2->setText(QString::number(relem2_2));
        ui->rzOut2_3->setText(QString::number(relem2_3));

        ui->rzOut3_3->setText(QString::number(relem3_3));
    }

    if(n==4){
        int relem1_1 = ui->rzInp1_1->text().toInt() - ui->rzInp1_12->text().toInt();
        int relem1_2 = ui->rzInp1_2->text().toInt() - ui->rzInp1_22->text().toInt();
        int relem1_3 = ui->rzInp1_3->text().toInt() - ui->rzInp1_32->text().toInt();
        int relem1_4 = ui->rzInp1_4->text().toInt() - ui->rzInp1_42->text().toInt();

        int relem2_2 = ui->rzInp2_2->text().toInt() - ui->rzInp2_22->text().toInt();
        int relem2_3 = ui->rzInp2_3->text().toInt() - ui->rzInp2_32->text().toInt();
        int relem2_4 = ui->rzInp2_4->text().toInt() - ui->rzInp2_42->text().toInt();

        int relem3_3 = ui->rzInp3_3->text().toInt() - ui->rzInp3_32->text().toInt();
        int relem3_4 = ui->rzInp3_4->text().toInt() - ui->rzInp3_42->text().toInt();

        int relem4_4 = ui->rzInp4_4->text().toInt() - ui->rzInp4_42->text().toInt();

        ui->rzOut1_1->setText(QString::number(relem1_1));
        ui->rzOut1_2->setText(QString::number(relem1_2));
        ui->rzOut1_3->setText(QString::number(relem1_3));
        ui->rzOut1_4->setText(QString::number(relem1_4));

        ui->rzOut2_2->setText(QString::number(relem2_2));
        ui->rzOut2_3->setText(QString::number(relem2_3));
        ui->rzOut2_4->setText(QString::number(relem2_4));

        ui->rzOut3_3->setText(QString::number(relem3_3));
        ui->rzOut3_4->setText(QString::number(relem3_4));

        ui->rzOut4_4->setText(QString::number(relem4_4));

    }
    if(n==5){
        int relem1_1 = ui->rzInp1_1->text().toInt() - ui->rzInp1_12->text().toInt();
        int relem1_2 = ui->rzInp1_2->text().toInt() - ui->rzInp1_22->text().toInt();
        int relem1_3 = ui->rzInp1_3->text().toInt() - ui->rzInp1_32->text().toInt();
        int relem1_4 = ui->rzInp1_4->text().toInt() - ui->rzInp1_42->text().toInt();
        int relem1_5 = ui->rzInp1_5->text().toInt() - ui->rzInp1_52->text().toInt();

        int relem2_2 = ui->rzInp2_2->text().toInt() - ui->rzInp2_22->text().toInt();
        int relem2_3 = ui->rzInp2_3->text().toInt() - ui->rzInp2_32->text().toInt();
        int relem2_4 = ui->rzInp2_4->text().toInt() - ui->rzInp2_42->text().toInt();
        int relem2_5 = ui->rzInp2_5->text().toInt() - ui->rzInp2_52->text().toInt();

        int relem3_3 = ui->rzInp3_3->text().toInt() - ui->rzInp3_32->text().toInt();
        int relem3_4 = ui->rzInp3_4->text().toInt() - ui->rzInp3_42->text().toInt();
        int relem3_5 = ui->rzInp3_5->text().toInt() - ui->rzInp3_52->text().toInt();

        int relem4_4 = ui->rzInp4_4->text().toInt() - ui->rzInp4_42->text().toInt();
        int relem4_5 = ui->rzInp4_5->text().toInt() - ui->rzInp4_52->text().toInt();

        int relem5_5 = ui->rzInp5_5->text().toInt() - ui->rzInp5_52->text().toInt();

        ui->rzOut1_1->setText(QString::number(relem1_1));
        ui->rzOut1_2->setText(QString::number(relem1_2));
        ui->rzOut1_3->setText(QString::number(relem1_3));
        ui->rzOut1_4->setText(QString::number(relem1_4));
        ui->rzOut1_5->setText(QString::number(relem1_5));

        ui->rzOut2_2->setText(QString::number(relem2_2));
        ui->rzOut2_3->setText(QString::number(relem2_3));
        ui->rzOut2_4->setText(QString::number(relem2_4));
        ui->rzOut2_5->setText(QString::number(relem2_5));

        ui->rzOut3_3->setText(QString::number(relem3_3));
        ui->rzOut3_4->setText(QString::number(relem3_4));
        ui->rzOut3_5->setText(QString::number(relem3_5));

        ui->rzOut4_4->setText(QString::number(relem4_4));
        ui->rzOut4_5->setText(QString::number(relem4_5));

        ui->rzOut5_5->setText(QString::number(relem5_5));



    }

}

void MainWindow::on_rvBut_clicked()
{
    if(n==2){
        bool elem1_1 = ui->rzInp1_1->text() == ui->rzInp1_12->text();
        bool elem1_2 = ui->rzInp1_2->text() == ui->rzInp1_22->text();
        bool elem2_1 = ui->rzInp2_1->text() == ui->rzInp2_12->text();
        bool elem2_2 = ui->rzInp2_2->text() == ui->rzInp2_22->text();
        if (elem1_1 && elem1_2 && elem2_1 && elem2_2 ){

            ui->rvLabel->setText("Матрицы Равны");
            ui->rvLabel->show();
        }
        else{
            ui->rvLabel->setText("Матрицы не равны");
            ui->rvLabel->show();
        }
    }
    if(n==3){
        bool elem1_1 = ui->rzInp1_1->text() == ui->rzInp1_12->text();
        bool elem1_2 = ui->rzInp1_2->text() == ui->rzInp1_22->text();
        bool elem1_3 = ui->rzInp1_3->text() == ui->rzInp1_32->text();
        bool str1 = elem1_1 && elem1_2 && elem1_3;

        bool elem2_1 = ui->rzInp2_1->text() == ui->rzInp2_12->text();
        bool elem2_2 = ui->rzInp2_2->text() == ui->rzInp2_22->text();
        bool elem2_3 = ui->rzInp2_3->text() == ui->rzInp2_32->text();
        bool str2 = elem2_1 && elem2_2 && elem2_3;

        bool elem3_1 = ui->rzInp3_1->text() == ui->rzInp3_12->text();
        bool elem3_2 = ui->rzInp3_2->text() == ui->rzInp3_22->text();
        bool elem3_3 = ui->rzInp3_3->text() == ui->rzInp3_32->text();
        bool str3 = elem3_1 && elem3_2 && elem3_3;

        if (str1 && str2 && str3 ){
            ui->rvLabel->setText("Матрицы Равны");
            ui->rvLabel->show();

        }
        else{
            ui->rvLabel->setText("Матрицы не равны");
            ui->rvLabel->show();
        }
    }
    if(n==4){
        bool elem1_1 = ui->rzInp1_1->text() == ui->rzInp1_12->text();
        bool elem1_2 = ui->rzInp1_2->text() == ui->rzInp1_22->text();
        bool elem1_3 = ui->rzInp1_3->text() == ui->rzInp1_32->text();
        bool elem1_4 = ui->rzInp1_4->text() == ui->rzInp1_42->text();
        bool str1 = elem1_1 && elem1_2 && elem1_3 && elem1_4;

        bool elem2_1 = ui->rzInp2_1->text() == ui->rzInp2_12->text();
        bool elem2_2 = ui->rzInp2_2->text() == ui->rzInp2_22->text();
        bool elem2_3 = ui->rzInp2_3->text() == ui->rzInp2_32->text();
        bool elem2_4 = ui->rzInp2_4->text() == ui->rzInp2_42->text();
        bool str2 = elem2_1 && elem2_2 && elem2_3 && elem2_4;

        bool elem3_1 = ui->rzInp3_1->text() == ui->rzInp3_12->text();
        bool elem3_2 = ui->rzInp3_2->text() == ui->rzInp3_22->text();
        bool elem3_3 = ui->rzInp3_3->text() == ui->rzInp3_32->text();
        bool elem3_4 = ui->rzInp3_4->text() == ui->rzInp3_42->text();
        bool str3 = elem3_1 && elem3_2 && elem3_3 && elem3_4;

        bool elem4_1 = ui->rzInp4_1->text() == ui->rzInp4_12->text();
        bool elem4_2 = ui->rzInp4_2->text() == ui->rzInp4_22->text();
        bool elem4_3 = ui->rzInp4_3->text() == ui->rzInp4_32->text();
        bool elem4_4 = ui->rzInp4_4->text() == ui->rzInp4_42->text();
        bool str4 = elem4_1 && elem4_2 && elem4_3 && elem4_4;

        if (str1 && str2 && str3 && str4 ){
            ui->rvLabel->setText("Матрицы Равны");
            ui->rvLabel->show();

        }
        else{
            ui->rvLabel->setText("Матрицы не равны");
            ui->rvLabel->show();
        }
    }

    if(n==5){
        bool elem1_1 = ui->rzInp1_1->text() == ui->rzInp1_12->text();
        bool elem1_2 = ui->rzInp1_2->text() == ui->rzInp1_22->text();
        bool elem1_3 = ui->rzInp1_3->text() == ui->rzInp1_32->text();
        bool elem1_4 = ui->rzInp1_4->text() == ui->rzInp1_42->text();
        bool elem1_5 = ui->rzInp1_5->text() == ui->rzInp1_52->text();
        bool str1 = elem1_1 && elem1_2 && elem1_3 && elem1_4 && elem1_5;

        bool elem2_1 = ui->rzInp2_1->text() == ui->rzInp2_12->text();
        bool elem2_2 = ui->rzInp2_2->text() == ui->rzInp2_22->text();
        bool elem2_3 = ui->rzInp2_3->text() == ui->rzInp2_32->text();
        bool elem2_4 = ui->rzInp2_4->text() == ui->rzInp2_42->text();
        bool elem2_5 = ui->rzInp2_5->text() == ui->rzInp2_52->text();
        bool str2 = elem2_1 && elem2_2 && elem2_3 && elem2_4 && elem2_5;

        bool elem3_1 = ui->rzInp3_1->text() == ui->rzInp3_12->text();
        bool elem3_2 = ui->rzInp3_2->text() == ui->rzInp3_22->text();
        bool elem3_3 = ui->rzInp3_3->text() == ui->rzInp3_32->text();
        bool elem3_4 = ui->rzInp3_4->text() == ui->rzInp3_42->text();
        bool elem3_5 = ui->rzInp3_5->text() == ui->rzInp3_52->text();
        bool str3 = elem3_1 && elem3_2 && elem3_3 && elem3_4 && elem3_5;

        bool elem4_1 = ui->rzInp4_1->text() == ui->rzInp4_12->text();
        bool elem4_2 = ui->rzInp4_2->text() == ui->rzInp4_22->text();
        bool elem4_3 = ui->rzInp4_3->text() == ui->rzInp4_32->text();
        bool elem4_4 = ui->rzInp4_4->text() == ui->rzInp4_42->text();
        bool elem4_5 = ui->rzInp4_5->text() == ui->rzInp4_52->text();
        bool str4 = elem4_1 && elem4_2 && elem4_3 && elem4_4 && elem4_5;

        bool elem5_1 = ui->rzInp5_1->text() == ui->rzInp5_12->text();
        bool elem5_2 = ui->rzInp5_2->text() == ui->rzInp5_22->text();
        bool elem5_3 = ui->rzInp5_3->text() == ui->rzInp5_32->text();
        bool elem5_4 = ui->rzInp5_4->text() == ui->rzInp5_42->text();
        bool elem5_5 = ui->rzInp5_5->text() == ui->rzInp5_52->text();
        bool str5 = elem5_1 && elem5_2 && elem5_3 && elem5_4 && elem5_5;

        if (str1 && str2 && str3 && str4 && str5){
            ui->rvLabel->setText("Матрицы Равны");
            ui->rvLabel->show();

        }
        else{
            ui->rvLabel->setText("Матрицы не равны");
            ui->rvLabel->show();
        }
    }


}



void MainWindow::on_backButt_clicked()
{
    ui->listWidget->show();
    ui->label->setText("Выберите действие");
    ui->inpLabel->show();
    ui->mSizeSlider->show();
    ui->slidertxtFrame->show();
    ui->pushButton_2->show();
    ui->rzvFrame->hide();
    ui->rvBut->show();
    ui->raznBut->show();



}

void MainWindow::on_clearAllButton_clicked()
{
    for (int i = 0;i<25;i++){
        mass[i]=0;
    }

    //n = 0;
    j = 0;
    ui->mInp1_1->setText(QString::number(0));
    ui->mInp1_2->setText(QString::number(0));
    ui->mInp1_3->setText(QString::number(0));
    ui->mInp1_4->setText(QString::number(0));
    ui->mInp1_5->setText(QString::number(0));
    ui->mInp2_2->setText(QString::number(0));
    ui->mInp2_3->setText(QString::number(0));
    ui->mInp2_4->setText(QString::number(0));
    ui->mInp2_5->setText(QString::number(0));
    ui->mInp3_3->setText(QString::number(0));
    ui->mInp3_4->setText(QString::number(0));
    ui->mInp3_5->setText(QString::number(0));
    ui->mInp4_4->setText(QString::number(0));
    ui->mInp4_5->setText(QString::number(0));
    ui->mInp5_5->setText(QString::number(0));

    ui->rzInp1_1->setText(QString::number(0));
    ui->rzInp1_2->setText(QString::number(0));
    ui->rzInp1_3->setText(QString::number(0));
    ui->rzInp1_4->setText(QString::number(0));
    ui->rzInp1_5->setText(QString::number(0));
    ui->rzInp2_2->setText(QString::number(0));
    ui->rzInp2_3->setText(QString::number(0));
    ui->rzInp2_4->setText(QString::number(0));
    ui->rzInp2_5->setText(QString::number(0));
    ui->rzInp3_3->setText(QString::number(0));
    ui->rzInp3_4->setText(QString::number(0));
    ui->rzInp3_5->setText(QString::number(0));
    ui->rzInp4_4->setText(QString::number(0));
    ui->rzInp4_5->setText(QString::number(0));
    ui->rzInp5_5->setText(QString::number(0));

    ui->rzInp1_12->setText(QString::number(0));
    ui->rzInp1_22->setText(QString::number(0));
    ui->rzInp1_32->setText(QString::number(0));
    ui->rzInp1_42->setText(QString::number(0));
    ui->rzInp1_52->setText(QString::number(0));
    ui->rzInp2_22->setText(QString::number(0));
    ui->rzInp2_32->setText(QString::number(0));
    ui->rzInp2_42->setText(QString::number(0));
    ui->rzInp2_52->setText(QString::number(0));
    ui->rzInp3_32->setText(QString::number(0));
    ui->rzInp3_42->setText(QString::number(0));
    ui->rzInp3_52->setText(QString::number(0));
    ui->rzInp4_42->setText(QString::number(0));
    ui->rzInp4_52->setText(QString::number(0));
    ui->rzInp5_52->setText(QString::number(0));

    ui->rzOut1_1->setText(QString::number(0));
    ui->rzOut1_2->setText(QString::number(0));
    ui->rzOut1_3->setText(QString::number(0));
    ui->rzOut1_4->setText(QString::number(0));
    ui->rzOut1_5->setText(QString::number(0));
    ui->rzOut2_2->setText(QString::number(0));
    ui->rzOut2_3->setText(QString::number(0));
    ui->rzOut2_4->setText(QString::number(0));
    ui->rzOut2_5->setText(QString::number(0));
    ui->rzOut3_3->setText(QString::number(0));
    ui->rzOut3_4->setText(QString::number(0));
    ui->rzOut3_5->setText(QString::number(0));
    ui->rzOut4_4->setText(QString::number(0));
    ui->rzOut4_5->setText(QString::number(0));
    ui->rzOut5_5->setText(QString::number(0));

}
