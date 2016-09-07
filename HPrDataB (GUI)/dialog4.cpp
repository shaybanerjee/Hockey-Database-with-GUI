#include "dialog4.h"
#include "ui_dialog4.h"
#include <string>
#include <iostream>
#include "builder.h"

Dialog4::Dialog4(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog4)
{
   ui->setupUi(this);
   QPixmap pix("C:/Users/Sunita/Desktop/ice");
   ui->labelpic->setPixmap(pix);
   QPixmap pic("C:/Users/Sunita/Desktop/puck");
   ui->labelpic2->setPixmap(pic);
}

Dialog4::~Dialog4()
{
    delete ui;
}

void Dialog4::on_pushButton_clicked()
{
    std::string number;
    number = ui->lineEdit->text().toLocal8Bit().constData();
    close();
    builder::options(number, "no", "no", "no", "no", "true","no","no");



}

void Dialog4::on_pushButton_2_clicked()
{
    close();
}
