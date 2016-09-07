#ifndef DIALOG9_H
#define DIALOG9_H

#include <QDialog>

namespace Ui {
class Dialog9;
}

class Dialog9 : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog9(QWidget *parent = 0);
    ~Dialog9();

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

private:
    Ui::Dialog9 *ui;
};

#endif // DIALOG9_H
