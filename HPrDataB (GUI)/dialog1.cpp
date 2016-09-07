#include "dialog1.h"
#include "ui_dialog1.h"
#include <iostream>
#include "player.h"
#include <cstdlib>
#include <string>
#include "database.h"
#include "builder.h"
#include <QtCore>
#include <QtGui>
#include <QMessageBox>


using namespace std;
Dialog1::Dialog1(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog1)
{
    ui->setupUi(this);
    QPixmap pic ("C:/Users/Sunita/Desktop/goalie");
    ui->labelpic->setPixmap(pic);
    QPixmap pict ("C:/Users/Sunita/Desktop/goalieleft.png");
    ui->labelpic2->setPixmap(pict);

}

Dialog1::~Dialog1()
{
    delete ui;
}

void Dialog1::on_pushButton_clicked()
{
    string one;
    string two;
    string three;
    string four;
    string five;
    string six;
    string seven;
    one = ui->lineEdit->text().toLocal8Bit().constData();
    two = ui->lineEdit_2->text().toLocal8Bit().constData();
    three = ui->lineEdit_3->text().toLocal8Bit().constData();
    four = ui->lineEdit_4->text().toLocal8Bit().constData();
    five = ui->lineEdit_5->text().toLocal8Bit().constData();
    six = ui->lineEdit_6->text().toLocal8Bit().constData();
    seven = ui->lineEdit_7->text().toLocal8Bit().constData();   
    builder::options (one, two, three, four, five, six, seven, "yes");
    close();
    QMessageBox::information(this, "Update!", "The Player has Succesfully been Added!");

}


void Dialog1::on_pushButton_2_clicked()
{
    close();
}

