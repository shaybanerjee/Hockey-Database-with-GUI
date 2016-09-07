#ifndef FINALDIALOG_H
#define FINALDIALOG_H

#include <QDialog>

namespace Ui {
class FinalDialog;
}

class FinalDialog : public QDialog
{
    Q_OBJECT

public:
    explicit FinalDialog(QWidget *parent = 0);
    ~FinalDialog();

private slots:
    void on_pushButton_clicked();

    void on_lineEdit_editingFinished();

private:
    Ui::FinalDialog *ui;
};

#endif // FINALDIALOG_H
