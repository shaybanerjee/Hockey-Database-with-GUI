#include "subdialog1.h"
#include "ui_subdialog1.h"

SubDialog1::SubDialog1(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SubDialog1)
{
    ui->setupUi(this);
}

SubDialog1::~SubDialog1()
{
    delete ui;
}
