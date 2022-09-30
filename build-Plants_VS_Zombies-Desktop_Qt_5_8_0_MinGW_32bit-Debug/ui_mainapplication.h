/********************************************************************************
** Form generated from reading UI file 'mainapplication.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINAPPLICATION_H
#define UI_MAINAPPLICATION_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainApplication
{
public:
    QGridLayout *gridLayout;
    QStackedWidget *stackedWidget;
    QWidget *start_page;
    QPushButton *click_to_start_button;
    QWidget *menu_page;
    QPushButton *pushButton_quit;
    QPushButton *pushButton_help;
    QPushButton *pushButton_options;
    QPushButton *pushButton_achievements;
    QPushButton *pushButton_adventure;
    QWidget *achievement_page;
    QPushButton *pushButton_back;
    QWidget *fight_page;
    QHBoxLayout *horizontalLayout;
    QGraphicsView *graphicsView;
    QWidget *quik_page;
    QPushButton *pushButton_cancel;
    QPushButton *pushButton_quik;
    QWidget *help_page;
    QPushButton *pushButton_main_menu;

    void setupUi(QWidget *MainApplication)
    {
        if (MainApplication->objectName().isEmpty())
            MainApplication->setObjectName(QStringLiteral("MainApplication"));
        MainApplication->resize(800, 600);
        MainApplication->setMinimumSize(QSize(800, 600));
        MainApplication->setMaximumSize(QSize(800, 600));
        QIcon icon;
        icon.addFile(QStringLiteral(":/resource/newwindowicon.png"), QSize(), QIcon::Normal, QIcon::Off);
        MainApplication->setWindowIcon(icon);
        gridLayout = new QGridLayout(MainApplication);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        stackedWidget = new QStackedWidget(MainApplication);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        stackedWidget->setMinimumSize(QSize(800, 600));
        stackedWidget->setMaximumSize(QSize(800, 600));
        stackedWidget->setCursor(QCursor(Qt::ArrowCursor));
        stackedWidget->setStyleSheet(QStringLiteral(""));
        start_page = new QWidget();
        start_page->setObjectName(QStringLiteral("start_page"));
        start_page->setMinimumSize(QSize(800, 600));
        start_page->setMaximumSize(QSize(800, 600));
        start_page->setBaseSize(QSize(800, 600));
        start_page->setStyleSheet(QStringLiteral("background-image: url(:/resource/openbackground.png);"));
        click_to_start_button = new QPushButton(start_page);
        click_to_start_button->setObjectName(QStringLiteral("click_to_start_button"));
        click_to_start_button->setGeometry(QRect(310, 550, 180, 20));
        click_to_start_button->setMinimumSize(QSize(180, 20));
        click_to_start_button->setMaximumSize(QSize(180, 20));
        click_to_start_button->setBaseSize(QSize(180, 20));
        click_to_start_button->setCursor(QCursor(Qt::PointingHandCursor));
        click_to_start_button->setStyleSheet(QString::fromUtf8("QPushButton \n"
"\n"
"{\n"
"	border: none;\n"
"	/*border-radius:33px;  /*\345\234\206\345\275\242\346\214\211\351\222\256\357\274\214QPushButton\347\232\204\345\215\212\345\276\204*/\n"
"	border-image: url(:/resource/click to start0.png);\n"
"	\n"
"}\n"
" \n"
"QPushButton:hover\n"
"{\n"
"	border: none;\n"
"	/*border-radius:33px;  /*\345\234\206\345\275\242\346\214\211\351\222\256\357\274\214QPushButton\347\232\204\345\215\212\345\276\204*/\n"
"	border-image: url(:/resource/click to start2.png);\n"
"}\n"
""));
        click_to_start_button->setIconSize(QSize(180, 20));
        stackedWidget->addWidget(start_page);
        menu_page = new QWidget();
        menu_page->setObjectName(QStringLiteral("menu_page"));
        menu_page->setStyleSheet(QLatin1String("\n"
"background-image: url(:/resource/newnew_menue_page_background.png);"));
        pushButton_quit = new QPushButton(menu_page);
        pushButton_quit->setObjectName(QStringLiteral("pushButton_quit"));
        pushButton_quit->setGeometry(QRect(720, 510, 50, 30));
        pushButton_quit->setMinimumSize(QSize(50, 30));
        pushButton_quit->setMaximumSize(QSize(50, 30));
        pushButton_quit->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_quit->setStyleSheet(QLatin1String("QPushButton \n"
"\n"
"{\n"
"	border: none;\n"
"	\n"
"	\n"
"	border-image: url(:/resource/quit0.png);\n"
"	\n"
"}\n"
" \n"
"QPushButton:hover\n"
"{\n"
"	border: none;\n"
"	\n"
"	\n"
"	border-image: url(:/resource/quit1.png);\n"
"}\n"
""));
        pushButton_help = new QPushButton(menu_page);
        pushButton_help->setObjectName(QStringLiteral("pushButton_help"));
        pushButton_help->setGeometry(QRect(650, 530, 50, 20));
        pushButton_help->setMinimumSize(QSize(50, 20));
        pushButton_help->setMaximumSize(QSize(50, 20));
        pushButton_help->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_help->setStyleSheet(QLatin1String("QPushButton \n"
"\n"
"{\n"
"	border: none;\n"
"	\n"
"	\n"
"	border-image: url(:/resource/help0.png);\n"
"	\n"
"}\n"
" \n"
"QPushButton:hover\n"
"{\n"
"	border: none;\n"
"	\n"
"	\n"
"	border-image: url(:/resource/help1.png);\n"
"}"));
        pushButton_options = new QPushButton(menu_page);
        pushButton_options->setObjectName(QStringLiteral("pushButton_options"));
        pushButton_options->setGeometry(QRect(567, 490, 80, 30));
        pushButton_options->setMinimumSize(QSize(80, 30));
        pushButton_options->setMaximumSize(QSize(80, 30));
        pushButton_options->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_options->setStyleSheet(QLatin1String("QPushButton \n"
"\n"
"{\n"
"	border: none;\n"
"	\n"
"	\n"
"	\n"
"	border-image: url(:/resource/options8.png);\n"
"	\n"
"}\n"
" \n"
"QPushButton:hover\n"
"{\n"
"	border: none;\n"
"	\n"
"	\n"
"	\n"
"	border-image: url(:/resource/options9.png);\n"
"}"));
        pushButton_achievements = new QPushButton(menu_page);
        pushButton_achievements->setObjectName(QStringLiteral("pushButton_achievements"));
        pushButton_achievements->setGeometry(QRect(66, 499, 80, 50));
        pushButton_achievements->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_achievements->setStyleSheet(QLatin1String("QPushButton \n"
"\n"
"{\n"
"	border: none;\n"
"	\n"
"	\n"
"	border-image: url(:/resource/achievements0.png);\n"
"	\n"
"}\n"
" \n"
"QPushButton:hover\n"
"{\n"
"	border: none;\n"
"	\n"
"	border-image: url(:/resource/achievements1.png);\n"
"}"));
        pushButton_adventure = new QPushButton(menu_page);
        pushButton_adventure->setObjectName(QStringLiteral("pushButton_adventure"));
        pushButton_adventure->setGeometry(QRect(403, 66, 330, 145));
        pushButton_adventure->setMinimumSize(QSize(330, 145));
        pushButton_adventure->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_adventure->setStyleSheet(QLatin1String("QPushButton \n"
"\n"
"{\n"
"	border: none;\n"
"	\n"
"	\n"
"	\n"
"	border-image: url(:/resource/adventure2.png);\n"
"	\n"
"}\n"
" \n"
"QPushButton:hover\n"
"{\n"
"	border: none;\n"
"	\n"
"	\n"
"	\n"
"	border-image: url(:/resource/adventure1.png);\n"
"}\n"
""));
        stackedWidget->addWidget(menu_page);
        achievement_page = new QWidget();
        achievement_page->setObjectName(QStringLiteral("achievement_page"));
        achievement_page->setStyleSheet(QStringLiteral("background-image: url(:/resource/achievement_page_background.png);"));
        pushButton_back = new QPushButton(achievement_page);
        pushButton_back->setObjectName(QStringLiteral("pushButton_back"));
        pushButton_back->setGeometry(QRect(127, 53, 90, 40));
        pushButton_back->setMinimumSize(QSize(90, 40));
        pushButton_back->setMaximumSize(QSize(90, 40));
        pushButton_back->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_back->setStyleSheet(QLatin1String("QPushButton \n"
"\n"
"{\n"
"	border: none;\n"
"	\n"
"	\n"
"	\n"
"	border-image: url(:/resource/back0.png);\n"
"	\n"
"}\n"
" \n"
"QPushButton:hover\n"
"{\n"
"	border: none;\n"
"	\n"
"	\n"
"	\n"
"	border-image: url(:/resource/back1.png);\n"
"}\n"
""));
        pushButton_back->setAutoRepeatDelay(300);
        stackedWidget->addWidget(achievement_page);
        fight_page = new QWidget();
        fight_page->setObjectName(QStringLiteral("fight_page"));
        fight_page->setMinimumSize(QSize(1400, 600));
        fight_page->setMaximumSize(QSize(1400, 600));
        fight_page->setStyleSheet(QStringLiteral("background-image: url(:/resource/newfight_page.jpg);"));
        horizontalLayout = new QHBoxLayout(fight_page);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        graphicsView = new QGraphicsView(fight_page);
        graphicsView->setObjectName(QStringLiteral("graphicsView"));
        graphicsView->setEnabled(true);
        graphicsView->setMinimumSize(QSize(800, 600));
        graphicsView->setMaximumSize(QSize(800, 600));
        graphicsView->setStyleSheet(QStringLiteral("background-image: url(:/resource/newfight_page.jpg);"));

        horizontalLayout->addWidget(graphicsView);

        stackedWidget->addWidget(fight_page);
        quik_page = new QWidget();
        quik_page->setObjectName(QStringLiteral("quik_page"));
        quik_page->setStyleSheet(QStringLiteral("background-image: url(:/resource/quik_page.png);"));
        pushButton_cancel = new QPushButton(quik_page);
        pushButton_cancel->setObjectName(QStringLiteral("pushButton_cancel"));
        pushButton_cancel->setGeometry(QRect(400, 375, 160, 40));
        pushButton_cancel->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_cancel->setStyleSheet(QLatin1String("QPushButton \n"
"\n"
"{\n"
"	border: none;\n"
"	\n"
"	\n"
"	\n"
"	\n"
"	border-image: url(:/resource/cancel0.png);\n"
"	\n"
"}\n"
" \n"
"QPushButton:hover\n"
"{\n"
"	border: none;\n"
"	\n"
"	\n"
"	\n"
"	\n"
"	border-image: url(:/resource/cancel1.png);\n"
"}\n"
""));
        pushButton_quik = new QPushButton(quik_page);
        pushButton_quik->setObjectName(QStringLiteral("pushButton_quik"));
        pushButton_quik->setGeometry(QRect(225, 375, 160, 40));
        pushButton_quik->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_quik->setStyleSheet(QLatin1String("QPushButton \n"
"\n"
"{\n"
"	border: none;\n"
"	\n"
"	\n"
"	\n"
"	\n"
"	border-image: url(:/resource/quik0.png);\n"
"	\n"
"}\n"
" \n"
"QPushButton:hover\n"
"{\n"
"	border: none;\n"
"	\n"
"	\n"
"	\n"
"	\n"
"	border-image: url(:/resource/quik1.png);\n"
"}\n"
""));
        stackedWidget->addWidget(quik_page);
        help_page = new QWidget();
        help_page->setObjectName(QStringLiteral("help_page"));
        help_page->setStyleSheet(QStringLiteral("background-image: url(:/resource/newhelp_page_background.png);"));
        pushButton_main_menu = new QPushButton(help_page);
        pushButton_main_menu->setObjectName(QStringLiteral("pushButton_main_menu"));
        pushButton_main_menu->setGeometry(QRect(327, 522, 153, 37));
        pushButton_main_menu->setMinimumSize(QSize(153, 37));
        pushButton_main_menu->setMaximumSize(QSize(153, 37));
        pushButton_main_menu->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_main_menu->setStyleSheet(QLatin1String("QPushButton \n"
"\n"
"{\n"
"	border: none;\n"
"	\n"
"	\n"
"	\n"
"	\n"
"	\n"
"	border-image: url(:/resource/mainmenu0.png);\n"
"	\n"
"}\n"
" \n"
"QPushButton:hover\n"
"{\n"
"	border: none;\n"
"	\n"
"	\n"
"	\n"
"	\n"
"	\n"
"	border-image: url(:/resource/mainmenu1.png);\n"
"}\n"
""));
        stackedWidget->addWidget(help_page);

        gridLayout->addWidget(stackedWidget, 0, 0, 1, 1);


        retranslateUi(MainApplication);

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainApplication);
    } // setupUi

    void retranslateUi(QWidget *MainApplication)
    {
        MainApplication->setWindowTitle(QApplication::translate("MainApplication", "Plants vs. Zombies", Q_NULLPTR));
        click_to_start_button->setText(QString());
        pushButton_quit->setText(QString());
        pushButton_help->setText(QString());
        pushButton_options->setText(QString());
        pushButton_achievements->setText(QString());
        pushButton_adventure->setText(QString());
        pushButton_back->setText(QString());
        pushButton_cancel->setText(QString());
        pushButton_quik->setText(QString());
        pushButton_main_menu->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainApplication: public Ui_MainApplication {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINAPPLICATION_H
