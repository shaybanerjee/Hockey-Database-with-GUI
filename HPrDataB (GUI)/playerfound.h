#ifndef PLAYERFOUND_H
#define PLAYERFOUND_H

#include <QDialog>

namespace Ui {
class PlayerFound;
}

class PlayerFound : public QDialog
{
    Q_OBJECT

public:
    explicit PlayerFound(QWidget *parent = 0);
    ~PlayerFound();

private:
    Ui::PlayerFound *ui;
};

#endif // PLAYERFOUND_H
