#ifndef ZOMBIE_H
#define ZOMBIE_H

#include <QMovie>
#include <QLabel>
class Zombie
{
public:
    Zombie(QWidget *parent = NULL);

public:
    int HP;
    int pos_y;
    int progress;
    int speed;

    bool iseating;
    bool recyclable;
    QMovie *movement;
    QMovie *attacktion;
    QMovie *death;
    QLabel *zombielabel;

};

#endif // ZOMBIE_H
