#ifndef BULLET_H
#define BULLET_H


#include <QLabel>
class Bullet
{
public:
    Bullet(QWidget *parent = NULL);

public:
    int ATK;
    int pos_x;
    int pos_y;
    int recyclable;
    QLabel *label_flying;
};

#endif // BULLET_H
