#ifndef SUNFLOWER_H
#define SUNFLOWER_H
#include "plant.h"

class Sunflower : public Plant
{
public:
    Sunflower(QWidget *parent = nullptr);


    void produc_sun();
};

#endif // SUNFLOWER_H
