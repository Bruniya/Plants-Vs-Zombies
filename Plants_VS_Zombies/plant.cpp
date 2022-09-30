#include "plant.h"

Plant::Plant(QWidget *parent)
{
    plantlabel = new QLabel(parent);

}

Plant::~Plant()
{
    delete peace;
    delete act;
    delete plantlabel;

}

void Plant::showup(int x, int y)
{
    pos_x = x;
    pos_y = y;
    plantlabel->setGeometry(x*80+50, y*100+80, 70, 100);
    plantlabel->show();

}

void Plant::setparent(QWidget *dad)
{
    plantlabel->setParent(dad);

}


