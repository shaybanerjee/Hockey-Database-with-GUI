#ifndef ERRORTRYAGAIN_H
#define ERRORTRYAGAIN_H

#include <QDialog>

namespace Ui {
class ErrorTryAgain;
}

class ErrorTryAgain : public QDialog
{
    Q_OBJECT

public:
    explicit ErrorTryAgain(QWidget *parent = 0);
    ~ErrorTryAgain();

private slots:
    void on_pushButton_clicked();

private:
    Ui::ErrorTryAgain *ui;
};

#endif // ERRORTRYAGAIN_H
