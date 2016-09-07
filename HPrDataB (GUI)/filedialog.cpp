#include "filedialog.h"
#include "ui_filedialog.h"

filedialog::filedialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::filedialog)
{
    ui->setupUi(this);
}

filedialog::~filedialog()
{
    delete ui;
}

void filedialog::on_pushButton_clicked()
{
    close();
}
