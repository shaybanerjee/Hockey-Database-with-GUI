#ifndef UPDATED2_H
#define UPDATED2_H

#include <QDialog>

namespace Ui {
class updated2;
}

class updated2 : public QDialog
{
    Q_OBJECT

public:
    explicit updated2(QWidget *parent = 0);
    ~updated2();

private slots:
    void on_pushButton_clicked();

private:
    Ui::updated2 *ui;
};

#endif // UPDATED2_H
