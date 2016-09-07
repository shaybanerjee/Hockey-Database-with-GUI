#include "dialog11.h"
#include "ui_dialog11.h"
#include <string>
#include <iostream>
#include "builder.h"
#include <QtCore>
#include <QtGui>
#include <QMessageBox>

Dialog11::Dialog11(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog11)
{
    ui->setupUi(this);
    QPixmap pix("C:/Users/Sunita/Desktop/ice");
    ui->labelpic->setPixmap(pix);
    QPixmap pic("C:/Users/Sunita/Desktop/team");
    ui->labelpic2->setPixmap(pic);
}

Dialog11::~Dialog11()
{
    delete ui;
}

void Dialog11::on_pushButton_clicked()
{
    std::string numb;

    numb = ui->lineEdit->text().toLocal8Bit().constData();
    close();
    builder::options(numb,"hello", "no", "no", "no", "no", "no","no");
    QMessageBox::information(this, "Update!", "Team Games Played have been Updated.");


}

void Dialog11::on_pushButton_2_clicked()
{
    close();
}
