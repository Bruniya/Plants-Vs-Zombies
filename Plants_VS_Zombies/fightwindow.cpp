#include "fightwindow.h"
#include "mainapplication.h"
#include "ui_fightwindow.h"

#include "sunflower.h"
#include "pea.h"
#include "nut.h"
#include "zombie.h"
#include "bullet.h"
#include "sunlight.h"

#include <QDebug>
#include <QMovie>
#include <QList>
#include <QPair>




//all the global global variable
int sun = 50;
int plant_choosed = 0;
int already_choosed = 0;
int zombie_slow = 0;
//Plants STL
QList<Nut> nutlist;
QList<Sunflower> sunflowerlist;
QList<Pea> pealist;
QList<Zombie> zombielist;
QList<Bullet> bulletlist;
QList<Sunlight> sunlightlist;

#include <QTime>
#include <QtGlobal>
//RAND num for  zombies pos_y
QTime randtime;


fightwindow::fightwindow(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::fightwindow)
{
    ui->setupUi(this);
    card_label_set();


    //gif player

    //ui->label->installEventFilter(this);//注册事件过滤-label

    ui->page->setMouseTracking(true);
    ui->page->installEventFilter(this);    //注册捕获

    connect(ui->pushButton_card_sunflower, SIGNAL(clicked(bool)), this, SLOT(slot_pushButton_card_sunflower()));
    connect(ui->pushButton_card_pea, SIGNAL(clicked(bool)), this, SLOT(slot_pushButton_card_pea()));
    connect(ui->pushButton_card_nut, SIGNAL(clicked(bool)), this, SLOT(slot_pushButton_card_nut()));
    connect(&fight_timer,SIGNAL(timeout()),this,SLOT(time_over()));
    connect(&zombiecreat_timer,SIGNAL(timeout()),this,SLOT(zombiescreation()));
    connect(&scaning_timer,SIGNAL(timeout()),this,SLOT(scanning_move()));
    connect(&shoot_timer,SIGNAL(timeout()),this,SLOT(createbullet()));
    connect(&flying_timer,SIGNAL(timeout()),this,SLOT(bullet_flying()));
    connect(&sun_timer,SIGNAL(timeout()),this,SLOT(produces_sunlight()));
    connect(&recycle_timer,SIGNAL(timeout()),this,SLOT(recycle_bullet()));
    connect(&zombierecycle_timer, SIGNAL(timeout()), this, SLOT(zombiescreation()));
    //fight_timer.start(120000);
    zombiecreat_timer.start(8000);//僵尸生成时间
    scaning_timer.start(70);//僵尸移动间隔
    shoot_timer.start(2000); //子弹生成时间
    flying_timer.start(20);//子弹飞行间隔
    sun_timer.start(10000); //阳光产生间隔

    recycle_timer.start(300);//回收时间
}

fightwindow::~fightwindow()
{
    delete ui;
}

fightwindow::slot_pushButton_card_sunflower()
{

    plant_choosed = 1;already_choosed = 1;create_plant_label(1);

}

fightwindow::slot_pushButton_card_pea()
{
    plant_choosed = 2;already_choosed = 1;create_plant_label(2);
}

fightwindow::slot_pushButton_card_nut()
{
    plant_choosed = 3;already_choosed = 1;create_plant_label(3);
}

void fightwindow::zombiescreation()
{
    qDebug() << "created zombie" << endl;
    Zombie *zombie = new Zombie(this);

    randtime= QTime::currentTime();
    qsrand(randtime.msec()+randtime.second()*1000);

    int n = qrand() % 5;

    zombie->pos_y = n;
    zombie->zombielabel->setGeometry(800, 25+100*n, 150, 140);
    zombie->zombielabel->show();
    zombie->iseating = false;
    zombielist.push_back(*zombie);

   // zombiecreat_timer.stop();

//    for(auto sunflower : sunflowerlist)
//    {
//        Sunlight *sunlight = new Sunlight(this);
//        sunlight->sunlabel->resize(70, 70);
//        sunlight->sunlabel->show();
//        QPropertyAnimation *animation1 = new QPropertyAnimation(sunlight->sunlabel,"geometry");
//        animation1->setDuration(1000);  //设置动画时间为1秒
//        animation1->setStartValue(QRect(sunflower.pos_x*70+50,sunflower.pos_y*100+80,70,70));
//        animation1->setEndValue(QRect(sunflower.pos_x*70, sunflower.pos_y*100+110,70,70));


//        animation1->start();
//        sunlight->sunlabel->setGeometry(sunflower.pos_x*70, sunflower.pos_y*100+110,70,70);

//        sunlightlist.push_back(*sunlight);
//    }
}

void fightwindow::scanning_move()
{

    for(auto &it : zombielist)
    {

        for(auto &nut : nutlist)
        {

            if(800-it.progress < nut.pos_x*80+50 && it.pos_y == nut.pos_y)
            {
                it.iseating = true;
            }
            else if(800-it.progress > nut.pos_x*80+50 && it.pos_y == nut.pos_y)
            {
                it.iseating = 0;
            }

        }

        if(it.iseating == true)
        {
            if(it.HP <= 0)
            {
                break;
            }

            it.zombielabel->setMovie(it.attacktion);
            it.attacktion->start();
            it.zombielabel->setGeometry(750-it.progress, 25+100*it.pos_y, 150, 140);
            it.zombielabel->show();
        }
        else
        {
            if(it.HP <= 0)
            {
                break;
            }
            it.progress ++;
            it.zombielabel->setGeometry(750-it.progress, 25+100*it.pos_y, 150, 140);
            it.zombielabel->show();

        }

//        qDebug() << "progress = " << it.progress << endl;
//        qDebug() << "spead = " << it.speed << endl;


    }

}

void fightwindow::time_over()
{

}

void fightwindow::createbullet()
{
    int zombiespos_y[5] = {0};//记录各行是否有僵尸
    for(auto &it : zombielist)
    {

        zombiespos_y[it.pos_y] = 1;

    }
    for(auto &it : pealist)//遍历豌豆射手
    {
        if(zombiespos_y[it.pos_y] == 1)//如果豌豆射手种植行有僵尸
        {
            qDebug() << "zombiespos_y[it.pos_y] =" << zombiespos_y[it.pos_y] << endl;
            Bullet *bullet = new Bullet(this);//创建豌豆子弹
            bullet->pos_y = it.pos_y;
            bullet->pos_x = it.pos_x*70+50;
            bulletlist.push_back(*bullet);
        }

    }


}

void fightwindow::bullet_flying()//子弹飞行
{
    QPixmap brokenbullet = QPixmap("://resource/PeaNormalExplode.png");
    for(auto &it : bulletlist)//遍历子弹容器
    {
        for(auto &zombie : zombielist)
        {

            if(it.pos_y == zombie.pos_y && it.pos_x > 780-zombie.progress)
            {

                //子弹破碎并标志为可回收
                it.label_flying->setPixmap(brokenbullet);
                it.label_flying->show();
                it.recyclable = 1;
 //               recycle_timer.start(500);
//                connect(&recycle_timer,&QTimer::timeout,[=](){delete *it;
//                                                                it = nullptr;});

                //僵尸掉血
                //zombie.HP -= 20;
                if(zombie.HP <= 0)
                {
                    zombie.zombielabel->setGeometry(-200,-200,1,1);
                    zombie.recyclable = 1;
                    //zombie.zombielabel->setMovie(zombie.death);
                   // zombie.zombielabel->show();
                    zombie.pos_y = -1;
                    zombie.progress = 0;
                    zombierecycle_timer.start(1000);

                }
            }
        }
        if(it.recyclable == 0)
        {
            it.pos_x += 5;
            it.label_flying->setGeometry(it.pos_x+20, it.pos_y*100+90, 60, 40);
            it.label_flying->show();
        }
    }
}

void fightwindow::recycle_bullet()
{
    for(auto &it : bulletlist)//遍历豌豆
    {
        if(it.recyclable == 1)
        {
            it.label_flying->setGeometry(-50,-50,1,1);
            it.label_flying->hide();
//            delete *it;
//            it = nullptr;

        }
    }
}

void fightwindow::produces_sunlight()  //生成阳光动画
{
    Sunlight *sunlight = new Sunlight(this);


    sunlight->sunlabel->resize(70, 70);


    sunlight->sunlabel->show();
    QPropertyAnimation *animation1 = new QPropertyAnimation(sunlight->sunlabel,"geometry");

    animation1->setDuration(3000);  //设置动画时间为5秒

    int rand_x = qrand() % 600 + 50;
    int rand_y = qrand() % 500 + 80;
    animation1->setStartValue(QRect(rand_x,-300,70,70));
    animation1->setEndValue(QRect(rand_x, rand_y,70,70));

    qDebug() << rand_x << rand_y << endl;
    animation1->start();
    sunlight->sunlabel->setGeometry(rand_x, rand_y,this->width(),this->height());

    sunlightlist.push_back(*sunlight);

}

void fightwindow::zombie_recycle()
{
    for(auto zombie : zombielist)
    {
        if(zombie.HP <= 0)
        {
            zombie.progress = 0;
            zombie.pos_y = -1;
            zombie.zombielabel->setGeometry(-100,-100,1,1); //把僵尸藏起来
        }
    }

}

void fightwindow::card_label_set()
{
    QPixmap plantpix;
    plantlabel_sunflower = new QLabel(this);
    plantlabel_sunflower->resize(60, 75);

    plantlabel_pea = new QLabel(this);
    plantlabel_pea->resize(60, 75);

    plantlabel_nut = new QLabel(this);
    plantlabel_nut->resize(60, 75);

    plantpix = QPixmap("://resource/sunflower.gif");
    plantlabel_sunflower->setPixmap(plantpix);
    plantpix = QPixmap("://resource/pea.gif");
    plantlabel_pea->setPixmap(plantpix);
    plantpix = QPixmap("://resource/nut.gif");
    plantlabel_nut->setPixmap(plantpix);

    plantlabel_sunflower->hide();
    plantlabel_pea->hide();
    plantlabel_nut->hide();

}




bool fightwindow::eventFilter(QObject *obj, QEvent *event)
{
    if(obj == ui->page)
    {
        if (event->type() == QEvent::MouseMove)
        {
            qDebug() << "鼠标移动" << endl;
            QMouseEvent *MouseEvent = static_cast<QMouseEvent *>(event);
            QPoint pot = MouseEvent->pos();




            if(already_choosed == 1)
            {
                if(plant_choosed == 1)
                {
                    plantlabel_sunflower->setGeometry(pot.x()-35, pot.y()-70, 60, 75 );
                    plantlabel_sunflower->show();
                }
                if(plant_choosed == 2)
                {
                    plantlabel_pea->setGeometry(pot.x()-35, pot.y()-70, 60, 75 );
                    plantlabel_pea->show();
                }
                if(plant_choosed == 3)
                {
                    plantlabel_nut->setGeometry(pot.x()-35, pot.y()-70, 60, 75 );
                    plantlabel_nut->show();
                }
            }
            qDebug() << pot << endl;
            return true;
        }
        else if (event->type() == QEvent::MouseButtonPress)
        {
            qDebug() << "鼠标按下" << endl;
            QMouseEvent *MouseEvent = static_cast<QMouseEvent *>(event);
            QPoint pot = MouseEvent->pos();
            qDebug() << pot << endl;


            for(auto &sunlights : sunlightlist)
            {
                if(1)
                {
                    //sun += 50;
                    qDebug() << "sun +50" << endl;
                    ui->label_plate->setText(QString::number(sun));
                    QPropertyAnimation *animation = new QPropertyAnimation(sunlights.sunlabel,"geometry");

                    animation->setDuration(5000);  //设置动画时间为5秒


                    animation->setStartValue(QRect(sunlights.pos_x,sunlights.pos_y,70,70));
                    animation->setEndValue(QRect(-150, -150,70,70));
                    animation->start();


                }
            }
            sun += 50;
            if(sun >= 50)
            {
                if(sun >= 100)
                {
                    ui->pushButton_card_pea->setStyleSheet("border-image: url(:/resource/豌豆卡片.png);");

                }
                ui->pushButton_card_nut->setStyleSheet("border-image: url(:/resource/土豆卡片.png);");
                ui->pushButton_card_sunflower->setStyleSheet("border-image: url(:/resource/向日葵卡片.png);");
            }


            ui->label_plate->setText(QString::number(sun));


            return true;
        }
        else if (event->type() == QEvent::MouseButtonRelease)
        {
            qDebug() << "鼠标松开" << endl;
            plantlabel_sunflower->hide();
            QMouseEvent *MouseEvent = static_cast<QMouseEvent *>(event);
            QPoint pot = MouseEvent->pos();

            if(already_choosed == 1)
                //(pot.x() > sunlights.pos_x-20 && pot.x() < sunlights.pos_x+20) || (pot.y() > sunlights.pos_y-20 && pot.y() < sunlights.pos_y+20)
            {
                if(plant_choosed == 1)
                {
                    plantlabel_sunflower->setGeometry(-70, -100, 60, 75 );
                    plantlabel_sunflower->hide();
                    Sunflower *sunflower = new Sunflower(this);
                    //sunflower->setparent(this);
                    sunflower->showup((pot.x()-50)/80, (pot.y()-80)/100);

                    sunflowerlist.push_back(*sunflower);
                    qDebug() << "planted in" << "(" << sunflower->pos_x << "," << sunflower->pos_y <<endl;
                    already_choosed = 0;
                    plant_choosed = 0;


                    sun -= 50;
                    ui->label_plate->setText(QString::number(sun));

                    if(sun < 100)
                    {
                        ui->pushButton_card_pea->setStyleSheet("border-image: url(:/resource/black pea card.png);");
                        if(sun < 50)
                        {
                            ui->pushButton_card_nut->setStyleSheet("border-image: url(:/resource/black nut card.png);");
                            ui->pushButton_card_sunflower->setStyleSheet("border-image: url(:/resource/black sun flower card.png);");
                        }
                    }
                }
            }
            if(already_choosed == 1)
            {
                if(plant_choosed == 2)
                {
                    plantlabel_pea->setGeometry(-70, -100, 60, 75 );
                    plantlabel_pea->hide();
                    Pea *pea = new Pea(this);
                    //sunflower->setparent(this);
                    pea->showup((pot.x()-50)/80, (pot.y()-80)/100);
                    pealist.push_back(*pea);
                    qDebug() << "planted in" << "(" << pea->pos_x << "," << pea->pos_y <<endl;
                    already_choosed = 0;
                    plant_choosed = 0;

                    sun -= 100;
                    ui->label_plate->setText(QString::number(sun));

                    if(sun < 100)
                    {
                        ui->pushButton_card_pea->setStyleSheet("border-image: url(:/resource/black pea card.png);");
                        if(sun < 50)
                        {
                            ui->pushButton_card_nut->setStyleSheet("border-image: url(:/resource/black nut card.png);");
                            ui->pushButton_card_sunflower->setStyleSheet("border-image: url(:/resource/black sun flower card.png);");
                        }
                    }
                }
            }
            if(already_choosed == 1)
            {
                if(plant_choosed == 3)
                {
                    plantlabel_nut->setGeometry(-70, -100, 60, 75 );//hide nut card label
                    plantlabel_nut->hide();
                    Nut *nut = new Nut(this);
                    //sunflower->setparent(this);
                    nut->showup((pot.x()-50)/80, (pot.y()-80)/100);
                    nutlist.push_back(*nut);
                    qDebug() << "planted in" << "(" << nut->pos_x << "," << nut->pos_y <<endl;
                    already_choosed = 0;
                    plant_choosed = 0;

                    sun -= 50;

                    if(sun < 100)
                    {
                        ui->pushButton_card_pea->setStyleSheet("border-image: url(:/resource/black pea card.png);");
                        if(sun < 50)
                        {
                            ui->pushButton_card_nut->setStyleSheet("border-image: url(:/resource/black nut card.png);");
                            ui->pushButton_card_sunflower->setStyleSheet("border-image: url(:/resource/black sun flower card.png);");
                        }
                    }

                    ui->label_plate->setText(QString::number(sun));
                }
            }
            qDebug() << pot << endl;
            return true;
        }
    }

    return false;
}



void fightwindow::create_plant_label(int plantname)
{
//    qDebug() << "mouse tracking opend" << endl;

//    QPixmap plantpix;
//    plantlabel = new QLabel(this);
//    plantlabel->resize(60, 70);
//    if(plantname == 1)
//        plantpix = QPixmap("://resource/sunflower.gif");
//    else if(plantname == 2)
//        plantpix = QPixmap("://resource/pea.gif");
//    else if(plantname == 3)
//        plantpix = QPixmap("://resource/nut.gif");

//    plantlabel->setPixmap(plantpix);
}
