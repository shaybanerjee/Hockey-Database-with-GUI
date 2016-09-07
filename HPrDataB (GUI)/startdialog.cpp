#include "startdialog.h"
#include "ui_startdialog.h"
#include <iostream>
#include <string>
#include <cstdlib>
#include <fstream>
#include "database.h"
#include "dialog1.h"
#include "builder.h"
using namespace std;

StartDialog::StartDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::StartDialog)
{
    ui->setupUi(this);
}

StartDialog::~StartDialog()
{
    delete ui;
}


void StartDialog::on_lineEdit_editingFinished()
{


    std::string filename;
    filename = ui->lineEdit->text().toLocal8Bit().constData();
    builder::options(filename, "yes", "no", "no", "no", "no", "no", "no");
}
