#include "dialog10.h"
#include "ui_dialog10.h"
#include "builder.h"
#include <string>
#include <QtGui>
#include <QtCore>
#include <QMessageBox>
using namespace std;

Dialog10::Dialog10(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog10)
{
    ui->setupUi(this);
    QPixmap pic("C:/Users/Sunita/Desktop/ice");
    ui->labelpic->setPixmap(pic);
    QPixmap pix("C:/Users/Sunita/Desktop/referee");
    ui->labelpic2->setPixmap(pix);
}

Dialog10::~Dialog10()
{
    delete ui;
}

void Dialog10::on_pushButton_2_clicked()
{
    close();
}

void Dialog10::on_pushButton_clicked()
{
    std::string name;
    string pminutes;
    name = ui->lineEdit->text().toLocal8Bit().constData();
    pminutes = ui->lineEdit_2->text().toLocal8Bit().constData();
    close();
    builder::options(name, pminutes, "no", "no", "no", "no", "yes","no");


}
