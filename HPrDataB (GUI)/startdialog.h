#ifndef STARTDIALOG_H
#define STARTDIALOG_H
#include "dialog1.h"
#include <QDialog>

namespace Ui {
class StartDialog;
}

class StartDialog : public QDialog
{
    Q_OBJECT

public:
    explicit StartDialog(QWidget *parent = 0);
    ~StartDialog();


private slots:

    void on_lineEdit_editingFinished();



private:
    Ui::StartDialog *ui;

};

#endif // STARTDIALOG_H
