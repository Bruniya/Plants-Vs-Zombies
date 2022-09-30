#include "pea.h"

Pea::Pea(QWidget *parent)
    :Plant(parent)
{
    QMovie *movie1 = new QMovie("://resource/pea.gif");
//    plantlabel = new QLabel;
    plantlabel->setMovie(movie1);
    movie1->start();
    plantlabel->hide();
}
