#ifndef DIALOG1_H
#define DIALOG1_H
#include "player.h"
#include <QDialog>
#include "database.h"

namespace Ui {
class Dialog1;
}

class Dialog1 : public QDialog
{   Player pl;
    Q_OBJECT

public:


    explicit Dialog1(QWidget *parent = 0);
    ~Dialog1();

private slots:


    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::Dialog1 *ui;

};

#endif // DIALOG1_H
