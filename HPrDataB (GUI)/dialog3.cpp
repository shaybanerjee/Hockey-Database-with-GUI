#include "dialog3.h"
#include "ui_dialog3.h"
#include <string>
#include <iostream>
#include "builder.h"

Dialog3::Dialog3(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog3)
{
    ui->setupUi(this);
    QPixmap pic("C:/Users/Sunita/Desktop/ice");
    ui->labelpic->setPixmap(pic);
    QPixmap pix("C:/Users/Sunita/Desktop/player");
    ui->labelpic2->setPixmap(pix);
}

Dialog3::~Dialog3()
{
    delete ui;
}

void Dialog3::on_pushButton_clicked()
{   std::string name;
    name = ui->lineEdit->text().toLocal8Bit().constData();
    close();
    builder::options(name, "no","no","true","no","no","no","no");


}

void Dialog3::on_pushButton_2_clicked()
{
    close();
}
