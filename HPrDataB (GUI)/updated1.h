#ifndef UPDATED1_H
#define UPDATED1_H

#include <QDialog>

namespace Ui {
class Updated1;
}

class Updated1 : public QDialog
{
    Q_OBJECT

public:
    explicit Updated1(QWidget *parent = 0);
    ~Updated1();

private slots:
    void on_pushButton_clicked();

private:
    Ui::Updated1 *ui;
};

#endif // UPDATED1_H
