#include "mainwindow.h"
#include "ui_mainwindow.h"

#include "dialog1.h"
#include <fstream>
#include <string>
#include "player.h"
#include "database.h"
#include <cstdlib>
#include <iostream>
#include "finaldialog.h"
#include "dialog2.h"
#include "dialog8.h"
#include "dialog9.h"
#include "dialog10.h"
#include "builder.h"
#include "displayscreen.h"
#include "dialog.h"
#include "dialog11.h"
#include "dialog3.h"
#include "dialog4.h"
using namespace std;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{   ui->setupUi(this);
    QPixmap pic("C:/Users/Sunita/Desktop/background");
    ui->labelpic->setPixmap(pic);
    Dialog d;
    d.setModal(true);
    d.exec();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    if(ui->radioButton1->isChecked()) {

        Dialog1 addPlayer;
        addPlayer.setModal(true);
        addPlayer.exec();
    }
    if (ui->radioButton_5->isChecked()) {
        Dialog2 remPlayer;
        remPlayer.setModal(true);
        remPlayer.exec();


        }
    else {
        if (ui->radioButton_8->isChecked()) {
            Dialog8 ug;
            ug.setModal(true);
            ug.exec();
        }
        else {
            if (ui->radioButton_9->isChecked()) {
                Dialog9 ua;
                ua.setModal(true);
                ua.exec();
            }
            else {
                if (ui->radioButton_10->isChecked()) {
                    Dialog10 ugp;
                    ugp.setModal(true);
                    ugp.exec();
                }
                else {
                    if (ui->radioButton_4->isChecked()) {
                        DisplayScreen ds;
                        ds.setModal(true);
                        ds.exec();

                    }
                    else {
                        if (ui->radioButton_11->isChecked()) {
                            Dialog11 tpd;
                            tpd.setModal(true);
                            tpd.exec();
                        }
                        else {
                            if (ui->radioButton_2->isChecked()) {
                                Dialog3 sn;
                                sn.setModal(true);
                                sn.exec();
                            }
                            else {
                                if (ui->radioButton_3->isChecked()) {
                                    Dialog4 snum;
                                    snum.setModal(true);
                                    snum.exec();
                                }
                            }
                        }
                    }
                }
            }
        }
    }
}

void MainWindow::on_pushButton_2_clicked()
{
    FinalDialog fd;
    fd.setModal(true);
    fd.exec();
    close();
}


