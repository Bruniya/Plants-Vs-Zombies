#ifndef IBUTTON_H
#define IBUTTON_H

#include <QPushButton>
#include <QMouseEvent>
class Ibutton : public QPushButton
{
    Q_OBJECT
public:
    explicit Ibutton(QWidget *parent = 0);

public:

          //mouse event
    void mousePressEvent(QMouseEvent *press_event);
    void mouseMoveEvent(QMouseEvent *move_event);



signals:

public slots:
};

#endif // IBUTTON_H
