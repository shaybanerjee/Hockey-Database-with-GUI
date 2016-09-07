#ifndef DIALOG8_H
#define DIALOG8_H

#include <QDialog>

namespace Ui {
class Dialog8;
}

class Dialog8 : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog8(QWidget *parent = 0);
    ~Dialog8();

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

private:
    Ui::Dialog8 *ui;
};

#endif // DIALOG8_H
