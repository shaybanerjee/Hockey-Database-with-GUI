#include "playerfound.h"
#include "ui_playerfound.h"

PlayerFound::PlayerFound(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::PlayerFound)
{
    ui->setupUi(this);
}

PlayerFound::~PlayerFound()
{
    delete ui;
}
