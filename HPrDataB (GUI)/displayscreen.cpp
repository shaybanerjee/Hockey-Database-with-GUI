#include "displayscreen.h"
#include "ui_displayscreen.h"
#include <iostream>
#include <string>
#include <QTextEdit>
#include "builder.h"
using namespace std;
DisplayScreen::DisplayScreen(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DisplayScreen)
{
    ui->setupUi(this);
    QPixmap pic("C:/Users/Sunita/Desktop/ice");
    ui->labelpic->setPixmap(pic);
}

DisplayScreen::~DisplayScreen()
{
    delete ui;
}


void DisplayScreen::on_pushButton_clicked()
{
    builder::options("yes", "no", "no", "no", "no", "no", "no", "no");
    close();
}

void DisplayScreen::on_pushButton_4_clicked()
{
    close();
}

void DisplayScreen::on_pushButton_2_clicked()
{
    builder::options("true","no","no","no","no","no","no","no");
    close();
}

void DisplayScreen::on_pushButton_3_clicked()
{
    builder::options("false","no","no","no","no","no","no","no");
    close();
}
