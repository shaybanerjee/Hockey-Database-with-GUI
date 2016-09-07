#include "errortryagain.h"
#include "ui_errortryagain.h"
#include "finaldialog.h"

ErrorTryAgain::ErrorTryAgain(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ErrorTryAgain)
{
    ui->setupUi(this);
}

ErrorTryAgain::~ErrorTryAgain()
{
    delete ui;
}

void ErrorTryAgain::on_pushButton_clicked()
{
    FinalDialog fd;
    fd.setModal(true);
    fd.exec();
}
