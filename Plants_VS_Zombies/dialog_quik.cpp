#include "dialog_quik.h"
#include "ui_dialog_quik.h"

Dialog_quik::Dialog_quik(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog_quik)
{
    ui->setupUi(this);
}

Dialog_quik::~Dialog_quik()
{
    delete ui;
}
