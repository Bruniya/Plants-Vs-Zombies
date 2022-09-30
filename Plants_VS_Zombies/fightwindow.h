#ifndef FIGHTWINDOW_H
#define FIGHTWINDOW_H

#include <QWidget>
#include <QLabel>
#include <QPushButton>
#include <QMouseEvent>
#include <QGraphicsItem>

#include <QTimer>
namespace Ui {
class fightwindow;
}

class fightwindow : public QWidget
{
    Q_OBJECT

public:
                //mouse event
    bool eventFilter(QObject *obj, QEvent *event);

    //press plant func
    QLabel *plantlabel_sunflower;
    QLabel *plantlabel_pea;
    QLabel *plantlabel_nut;
    void create_plant_label(int plantname);


public:
    explicit fightwindow(QWidget *parent = 0);
    ~fightwindow();
signals:
    void signal_back();

public slots:
    slot_pushButton_card_sunflower();//卡槽卡片按钮槽函数
    slot_pushButton_card_pea();
    slot_pushButton_card_nut();

    void zombiescreation();//创建僵尸
    void scanning_move();  //僵尸移动
    void time_over();
    void createbullet();//创建一颗子弹
    void bullet_flying();//子弹飞行
    void recycle_bullet(); //回收子弹
    void produces_sunlight();//产生阳光动画

    void zombie_recycle(); //僵尸回收
public:
    void card_label_set();

private:
    Ui::fightwindow *ui;

    QTimer fight_timer;
    QTimer zombiecreat_timer;
    QTimer scaning_timer;
    QTimer shoot_timer;
    QTimer flying_timer;
    QTimer recycle_timer;
    QTimer sun_timer;  //阳光产生时间
    QTimer zombierecycle_timer; //僵尸死亡回收时间
};








#endif // FIGHTWINDOW_H
