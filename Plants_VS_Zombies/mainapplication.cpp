#include "mainapplication.h"
#include "fightwindow.h"
#include "ui_mainapplication.h"

#include <QMovie>
#include <QLabel>
#include <QInputDialog>
#include <QFile>
#include <QDebug>

#include <QSound>

MainApplication::MainApplication(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::MainApplication)
{

    ui->setupUi(this);
//play sound

 //   QSound::play("://resource/游戏开始背景音乐.wav");


/*
    //Play opening animation

    QLabel *opening_animation_label = new QLabel;
    QMovie *opening_animation = new QMovie("://resource/$$SOMH1KK[]A9UT}6)NFK[G.gif");
    opening_animation->start();
    opening_animation_label->setMovie(opening_animation);
    opening_animation_label->setMinimumSize(800,600);
    opening_animation_label->setParent(this);
    */

    connect(ui->click_to_start_button,SIGNAL(clicked(bool)),this,SLOT(swich_page_to_menu()));//第一页开始按钮
    connect(ui->pushButton_achievements, SIGNAL(clicked(bool)), this, SLOT(slot_pushbutton_achievements()));
    connect(ui->pushButton_back, SIGNAL(clicked(bool)), this, SLOT(slot_pushbutton_back()));

/* connect quit and cancel */
    connect(ui->pushButton_quit, SIGNAL(clicked(bool)), this, SLOT(slot_pushButton_quit()));
    connect(ui->pushButton_quik, SIGNAL(clicked(bool)), this, SLOT(close()));
    connect(ui->pushButton_cancel, SIGNAL(clicked(bool)), this, SLOT(slot_pushButton_cancel()));


    //pushButton-help
    connect(ui->pushButton_help, SIGNAL(clicked(bool)), this, SLOT(slot_pushbutton_help()));
    connect(&timer,SIGNAL(timeout()),this,SLOT(fade_on_fade_out()));

    //pushButton-mainmenu
    connect(ui->pushButton_main_menu, SIGNAL(clicked(bool)), this, SLOT(slot_pushbutton_main_menu()));

    //pushButton-adventure
    connect(ui->pushButton_adventure, SIGNAL(clicked(bool)), this, SLOT(slot_pushbutton_adventure()));
}

MainApplication::~MainApplication()
{
    delete ui;
}


void MainApplication::swich_page_to_menu()
{
    ui->stackedWidget->setCurrentIndex(1);
}

void MainApplication::slot_pushbutton_achievements()//the same
{
    QLabel *templabel = new QLabel(this);
    templabel->resize(800, 600);
    templabel->setPixmap(ui->stackedWidget->currentWidget()->grab());  //捕获当前界面并绘制到label上

    templabel->show();
    QPropertyAnimation *animation1 = new QPropertyAnimation(templabel,"geometry");

    animation1->setDuration(400);  //设置动画时间为1秒

    animation1->setStartValue(QRect(0,0,this->width(),this->height()));
    animation1->setEndValue(QRect(0,-this->height(),this->width(),this->height()));

    ui->stackedWidget->setCurrentIndex(2);  //切换界面

    QPropertyAnimation *animation2 = new QPropertyAnimation(ui->stackedWidget->currentWidget(),"geometry");
    animation2->setDuration(400);
    animation2->setStartValue(QRect(0,this->height(),this->width(),this->height()));
    animation2->setEndValue(QRect(0,0,this->width(),this->height()));

//    animation1->start();
//    animation2->start();
    QParallelAnimationGroup *group = new QParallelAnimationGroup;  //动画容器
    group->addAnimation(animation1);
    group->addAnimation(animation2);

    group->start();
    connect(group,&QParallelAnimationGroup::finished,[=](){
        qDebug() << "delete ok" << endl;
        delete animation2;
        delete animation1;
        delete group;
    });
}


void MainApplication::slot_pushbutton_back()//the same
{
    QLabel *templabel = new QLabel(this);
    templabel->resize(800, 600);
    templabel->setPixmap(ui->stackedWidget->currentWidget()->grab());  //捕获当前界面并绘制到label上

    templabel->show();
    QPropertyAnimation *animation1 = new QPropertyAnimation(templabel,"geometry");
    animation1->setDuration(400);  //设置动画时间为1秒
    animation1->setStartValue(QRect(0,0,this->width(),this->height()));
    animation1->setEndValue(QRect(0,this->height(),this->width(),this->height()));

    ui->stackedWidget->setCurrentIndex(1);  //切换界面

    QPropertyAnimation *animation2 = new QPropertyAnimation(ui->stackedWidget->currentWidget(),"geometry");
    animation2->setDuration(400);
    animation2->setStartValue(QRect(0,-this->height(),this->width(),this->height()));
    animation2->setEndValue(QRect(0,0,this->width(),this->height()));

//    animation1->start();
//    animation2->start();
    QParallelAnimationGroup *group = new QParallelAnimationGroup;  //动画容器
    group->addAnimation(animation2);
    group->addAnimation(animation1);
    group->start();

    connect(group,&QParallelAnimationGroup::finished,[=](){
        qDebug() << "delete ok" << endl;
        delete animation2;
        delete animation1;
        delete group;
    });
}


void MainApplication::slot_pushbutton_adventure()
{
//    ui->stackedWidget->setCurrentIndex(3);
    fightwindow *fp = new fightwindow;

    fp->show();

    connect(fp,&fightwindow::signal_back,[=](){
        this->show();
        delete fp;
    });

    this->hide();
}

void MainApplication::slot_pushButton_quit()
{
    ui->stackedWidget->setCurrentIndex(4);//swich to quit page
}

void MainApplication::slot_pushButton_cancel()
{
    ui->stackedWidget->setCurrentIndex(1);//swich to menue page
}

void MainApplication::slot_pushbutton_help()  //swich to help page
{
    ui->stackedWidget->setCurrentIndex(5);
    blacklabel = new QLabel(this);
    blacklabel->resize(800, 600);
    blacklabel->setStyleSheet("background-color:black");
    blacklabel->show();
    opacity = 255;
    timer.start(10);
}

void MainApplication::fade_on_fade_out()
{
    if (opacity > 0)
    {
        QString styleSheetLanguage;
        styleSheetLanguage = QString("background-color:rgb(0,0,0,%1)").arg(opacity);
        blacklabel->setStyleSheet(styleSheetLanguage);
        opacity--;
    }
    else
    {
        timer.stop();
        opacity = 255;
        delete blacklabel;
    }
}

void MainApplication::slot_pushbutton_main_menu()  //from help back to menu
{
    ui->stackedWidget->setCurrentIndex(1);
}
