#include "updated2.h"
#include "ui_updated2.h"

updated2::updated2(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::updated2)
{
    ui->setupUi(this);
}

updated2::~updated2()
{
    delete ui;
}

void updated2::on_pushButton_clicked()
{
    close();
}
