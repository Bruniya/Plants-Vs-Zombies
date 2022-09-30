#ifndef DIALOG_QUIK_H
#define DIALOG_QUIK_H

#include <QDialog>

namespace Ui {
class Dialog_quik;
}

class Dialog_quik : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog_quik(QWidget *parent = 0);
    ~Dialog_quik();

private:
    Ui::Dialog_quik *ui;
};

#endif // DIALOG_QUIK_H
