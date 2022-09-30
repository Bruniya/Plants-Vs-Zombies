#ifndef PLANT_H
#define PLANT_H

#include <QMovie>
#include <QLabel>
#include <QWidget>
class Plant
{
public:
    Plant(QWidget *parent = NULL);
    ~Plant();

public:
    int HP;
    int ATK;
    int pos_x;
    int pos_y;
    QMovie *peace;
    QMovie *act;

    QLabel *plantlabel;

public:
    void showup(int x, int y);
    void setparent(QWidget *dad);

};

#endif // PLANT_H
