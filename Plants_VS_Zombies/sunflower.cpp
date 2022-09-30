#include "sunflower.h"

Sunflower::Sunflower(QWidget *parent)
    :Plant(parent)
{
    QMovie *movie1 = new QMovie("://resource/sunflower.gif");
//    plantlabel = new QLabel;
    plantlabel->setMovie(movie1);
    movie1->start();
    plantlabel->hide();
}
