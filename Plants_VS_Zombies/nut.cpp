#include "nut.h"

Nut::Nut(QWidget *parent)
    :Plant(parent)
{
    QMovie *movie1 = new QMovie("://resource/nut.gif");
//    plantlabel = new QLabel;
    plantlabel->setMovie(movie1);
    movie1->start();
    plantlabel->hide();

    HP = 800;
}
