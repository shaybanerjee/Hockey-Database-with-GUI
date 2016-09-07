#include "dialog2.h"
#include "ui_dialog2.h"
#include "builder.h"
#include <string>
using namespace std;


Dialog2::Dialog2(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog2)
{
    ui->setupUi(this);
    QPixmap pic("C:/Users/Sunita/Desktop/ice");
    ui->labelpic->setPixmap(pic);
    QPixmap pix("C:/Users/Sunita/Desktop/fight");
    ui->labelpic2->setPixmap(pix);
}

Dialog2::~Dialog2()
{
    delete ui;
}

void Dialog2::on_pushButton_2_clicked()
{
    close();
}

void Dialog2::on_lineEdit_editingFinished()
{
    string name;
    name = ui->lineEdit->text().toLocal8Bit().constData();
    builder::options(name, "no", "no", "yes", "no", "no","no","no");

}
