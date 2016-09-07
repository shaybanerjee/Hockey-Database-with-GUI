#ifndef SUBDIALOG1_H
#define SUBDIALOG1_H

#include <QDialog>

namespace Ui {
class SubDialog1;
}

class SubDialog1 : public QDialog
{
    Q_OBJECT

public:
    explicit SubDialog1(QWidget *parent = 0);
    ~SubDialog1();

private:
    Ui::SubDialog1 *ui;
};

#endif // SUBDIALOG1_H
