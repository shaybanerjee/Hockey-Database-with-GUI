#ifndef FILEDIALOG_H
#define FILEDIALOG_H

#include <QDialog>

namespace Ui {
class filedialog;
}

class filedialog : public QDialog
{
    Q_OBJECT

public:
    explicit filedialog(QWidget *parent = 0);
    ~filedialog();

private slots:
    void on_pushButton_clicked();

private:
    Ui::filedialog *ui;
};

#endif // FILEDIALOG_H
