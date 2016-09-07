#include "finaldialog.h"
#include "ui_finaldialog.h"
#include <fstream>
#include <iostream>
#include <string>
#include "database.h"
#include "builder.h"

using namespace std;
FinalDialog::FinalDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::FinalDialog)
{
    ui->setupUi(this);
}

FinalDialog::~FinalDialog()
{
    delete ui;
}

void FinalDialog::on_pushButton_clicked()
{

    close();
}

void FinalDialog::on_lineEdit_editingFinished()
{
    std::string filename;
    filename = ui->lineEdit->text().toLocal8Bit().constData();
    builder::options(filename, "hah", "yes", "no","no","no","no","no");
}


