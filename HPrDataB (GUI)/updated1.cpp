#include "updated1.h"
#include "ui_updated1.h"

Updated1::Updated1(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Updated1)
{
    ui->setupUi(this);
}

Updated1::~Updated1()
{
    delete ui;
}

void Updated1::on_pushButton_clicked()
{
    close();
}
