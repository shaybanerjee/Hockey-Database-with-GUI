#include "dialog.h"
#include "ui_dialog.h"
#include "builder.h"
#include "mainwindow.h"

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
    QPixmap pix("C:/Users/Sunita/Desktop/login");
    ui->labelpic->setPixmap(pix);
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::on_pushButton_clicked()
{
    std::string name;
    name = ui->lineEdit->text().toLocal8Bit().constData();
    builder::options(name, "yes", "a", "b","c","d","e","f");
    close();
}

void Dialog::on_pushButton_2_clicked()
{
    close();

}
