#ifndef CREATOR_H
#define CREATOR_H

#include <QMainWindow>

namespace Ui {
class Creator;
}

class Creator : public QMainWindow
{
    Q_OBJECT

public:
    explicit Creator(QWidget *parent = nullptr);
    ~Creator();

private:
    Ui::Creator *ui;
};

#endif // CREATOR_H
