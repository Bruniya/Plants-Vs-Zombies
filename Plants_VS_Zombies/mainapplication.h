#ifndef MAINAPPLICATION_H
#define MAINAPPLICATION_H

#include <synchapi.h>
#include <QTimer>

#include <QWidget>

#include <QLabel>
#include <QPropertyAnimation>
#include <QParallelAnimationGroup>
namespace Ui {
class MainApplication;
}

class MainApplication : public QWidget
{
    Q_OBJECT



public:
    explicit MainApplication(QWidget *parent = 0);
    ~MainApplication();

private:
    Ui::MainApplication *ui;

    QTimer timer;
    QLabel *blacklabel;
    int opacity;


public slots:


    void swich_page_to_menu();//change page to menue
    void slot_pushbutton_achievements();  //change to achievements page
    void slot_pushbutton_back();  //change to menue page
    //adventure slot
    void slot_pushbutton_adventure();


    /* quit slots */
    void slot_pushButton_quit();
    void slot_pushButton_cancel();

    //help slot
    void slot_pushbutton_help();
    void fade_on_fade_out();
    //help back
    void slot_pushbutton_main_menu();
};

#endif // MAINAPPLICATION_H
