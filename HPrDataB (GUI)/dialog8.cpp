#include "dialog8.h"
#include "ui_dialog8.h"
#include <string>
#include "builder.h"
#include <iostream>
using namespace std;
Dialog8::Dialog8(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog8)
{
    ui->setupUi(this);
    QPixmap pic("C:/Users/Sunita/Desktop/ice");
    ui->labelpic->setPixmap(pic);
    QPixmap pix("C:/Users/Sunita/Desktop/goal");
    ui->labelpic2->setPixmap(pix);
}

Dialog8::~Dialog8()
{
    delete ui;
}

void Dialog8::on_pushButton_2_clicked()
{
    close();
}

void Dialog8::on_pushButton_clicked()
{
    std::string name;
    std::string goals;
    name = ui->lineEdit->text().toLocal8Bit().constData();
    goals = ui->lineEdit_2->text().toLocal8Bit().constData();
    close();
    builder::options (name, goals, "no", "no", "yes", "no", "no", "no");

}
