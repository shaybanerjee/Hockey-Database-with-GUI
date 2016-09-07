#ifndef DISPLAYSCREEN_H
#define DISPLAYSCREEN_H
#include <string>
#include <iostream>
#include <QDialog>
using namespace std;

namespace Ui {
class DisplayScreen;
}

class DisplayScreen : public QDialog
{
    Q_OBJECT

public:
    explicit DisplayScreen(QWidget *parent = 0);
    ~DisplayScreen();
    static void displayfn(std::string name, int num, std::string handdir, int goals, int assists, double new_time_played, double new_pminutes);

private slots:
    void on_pushButton_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

private:
    Ui::DisplayScreen *ui;
};

#endif // DISPLAYSCREEN_H
