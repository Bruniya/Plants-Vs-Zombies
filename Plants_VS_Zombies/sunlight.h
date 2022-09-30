#ifndef SUNLIGHT_H
#define SUNLIGHT_H

#include <QLabel>
class Sunlight
{
public:
    Sunlight(QWidget *parent = NULL);

public:
    QLabel *sunlabel;
    int pos_x;
    int pos_y;
};

#endif // SUNLIGHT_H
