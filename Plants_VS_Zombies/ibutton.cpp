#include "ibutton.h"

#include <QDebug>
#include <QWidget>
Ibutton::Ibutton(QWidget *parent)
    : QPushButton(parent)
{

}

void Ibutton::mousePressEvent(QMouseEvent *press_event)
{
    qDebug() << "mouse press trigger" << endl;
    int mouse_button = press_event->button();
    if(mouse_button == Qt::LeftButton)
    {
        qDebug() << "LeftButton trigger" << endl;
        /*if(already_choosed == 0)  //if mouse have not choose a plant card
        {
            setMouseTracking(true);
            qDebug() << "MouseTracking trigger" << endl;
            switch (plant_choosed)    //if mouse want to choose a plant card
            {
            case 0:
                setMouseTracking(false);
                qDebug() << "MouseTracking shutdown" << endl;
                break;
            case 1:
                qDebug() << "choosed sunflower" << endl;

                break;
            case 2:

                break;
            case 3:

                break;
            default:
                break;
            }
        }
        else  //if mouse already choosed a card then plant a plant
        {

        }*/
    }
    else if(mouse_button == Qt::RightButton)
    {
        //plant_choosed = 0;
    }

}

void Ibutton::mouseMoveEvent(QMouseEvent *move_event)
{
    /*if(already_choosed == 1 && plant_choosed != 0)
    {
        plantlabel->setGeometry(move_event->pos().x(),move_event->pos().y(),60,70);
        plantlabel->show();
    }*/
}
