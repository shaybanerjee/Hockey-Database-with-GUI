#ifndef DIALOG10_H
#define DIALOG10_H

#include <QDialog>

namespace Ui {
class Dialog10;
}

class Dialog10 : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog10(QWidget *parent = 0);
    ~Dialog10();

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

private:
    Ui::Dialog10 *ui;
};

#endif // DIALOG10_H
