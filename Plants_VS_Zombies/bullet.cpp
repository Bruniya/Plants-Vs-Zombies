#include "bullet.h"

Bullet::Bullet(QWidget *parent)
{
    label_flying = new QLabel(parent);
    ATK = 20;
    recyclable = 0;
    QPixmap peabul = QPixmap("://resource/PeaNormal.png");
    label_flying->setPixmap(peabul);
    label_flying->hide();
}
