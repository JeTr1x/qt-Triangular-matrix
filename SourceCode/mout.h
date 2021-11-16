#ifndef MOUT_H
#define MOUT_H

#include <QDialog>

namespace Ui {
class mOut;
}

class mOut : public QDialog
{
    Q_OBJECT


public:

    explicit mOut(QWidget *parent = nullptr);
    ~mOut();

private:
    Ui::mOut *ui;
};

#endif // MOUT_H
