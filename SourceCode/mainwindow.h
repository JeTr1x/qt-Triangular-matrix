#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE
class MainWindow : public QMainWindow
{
    Q_OBJECT


public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButton_clicked();


    void on_pushButton_2_clicked();

    void on_ijButton_clicked();

    void on_saveMatr_clicked();

    void on_spinBoxI_valueChanged(int arg1);

    void on_readyBut_clicked();

    void on_ijSaveBut_clicked();

    void on_ijOutBut_clicked();

    void on_raznBut_clicked();

    void on_ravnBut_clicked();

    void on_rzBut_clicked();

    void on_rvBut_clicked();

    void on_backButt_clicked();

    void on_clearAllButton_clicked();

private:
    Ui::MainWindow *ui;
};
namespace  MyMass{
extern int n;
extern int mass[25];
extern int deleteAll;

}

#endif // MAINWINDOW_H

