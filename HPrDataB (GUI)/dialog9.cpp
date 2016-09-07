#include "dialog9.h"
#include "ui_dialog9.h"
#include "builder.h"
Dialog9::Dialog9(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog9)
{
    ui->setupUi(this);
    QPixmap pic("C:/Users/Sunita/Desktop/ice");
    ui->labelpic->setPixmap(pic);
    QPixmap pix("C:/Users/Sunita/Desktop/pass");
    ui->labelpic2->setPixmap(pix);
}

Dialog9::~Dialog9()
{
    delete ui;
}

void Dialog9::on_pushButton_2_clicked()
{
    close();
}

void Dialog9::on_pushButton_clicked()
{
    std::string name;
    std::string assists;
    name = ui->lineEdit->text().toLocal8Bit().constData();
    assists = ui->lineEdit_2->text().toLocal8Bit().constData();
    close();
    builder::options(name, assists, "no", "no", "no", "yes", "no", "no");

}
