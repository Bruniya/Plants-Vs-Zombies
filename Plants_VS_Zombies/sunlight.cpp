#include "sunlight.h"
#include <QMovie>
Sunlight::Sunlight(QWidget *parent)
{
    sunlabel =  new QLabel(parent);
    QMovie *movie1 = new QMovie("://resource/sun.gif");
    sunlabel->setMovie(movie1);
    movie1->start();
    sunlabel->hide();
}
