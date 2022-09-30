#include "zombie.h"

Zombie::Zombie(QWidget *parent)
{

    progress = 0;
    speed = 10;
    iseating = false;
    HP = 100;
    zombielabel = new QLabel(parent);


    movement = new QMovie("://resource/zombiemove.gif");
    attacktion = new QMovie("://resource/zombieattack.gif");
    death = new QMovie("://resource/zombiedeath.gif");
    zombielabel->setMovie(movement);
    movement->start();
    zombielabel->hide();


}
