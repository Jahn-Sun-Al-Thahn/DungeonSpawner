#include "creator.h"
#include "ui_creator.h"

Creator::Creator(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Creator)
{
    ui->setupUi(this);
}

Creator::~Creator()
{
    delete ui;
}
