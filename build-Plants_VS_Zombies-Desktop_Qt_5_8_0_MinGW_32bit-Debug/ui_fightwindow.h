/********************************************************************************
** Form generated from reading UI file 'fightwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FIGHTWINDOW_H
#define UI_FIGHTWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_fightwindow
{
public:
    QHBoxLayout *horizontalLayout;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QWidget *widget;
    QPushButton *pushButton_card_sunflower;
    QPushButton *pushButton_card_pea;
    QPushButton *pushButton_card_nut;
    QLabel *label;

    void setupUi(QWidget *fightwindow)
    {
        if (fightwindow->objectName().isEmpty())
            fightwindow->setObjectName(QStringLiteral("fightwindow"));
        fightwindow->resize(800, 600);
        fightwindow->setMinimumSize(QSize(800, 600));
        QIcon icon;
        icon.addFile(QStringLiteral(":/resource/newwindowicon.png"), QSize(), QIcon::Normal, QIcon::Off);
        fightwindow->setWindowIcon(icon);
        fightwindow->setStyleSheet(QStringLiteral(""));
        horizontalLayout = new QHBoxLayout(fightwindow);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        stackedWidget = new QStackedWidget(fightwindow);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        stackedWidget->setStyleSheet(QStringLiteral(""));
        page = new QWidget();
        page->setObjectName(QStringLiteral("page"));
        page->setMouseTracking(true);
        page->setStyleSheet(QStringLiteral(""));
        widget = new QWidget(page);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(10, 0, 522, 87));
        widget->setMaximumSize(QSize(522, 87));
        widget->setMouseTracking(true);
        widget->setStyleSheet(QStringLiteral("background-image: url(:/resource/ChooserBackground.png);"));
        pushButton_card_sunflower = new QPushButton(widget);
        pushButton_card_sunflower->setObjectName(QStringLiteral("pushButton_card_sunflower"));
        pushButton_card_sunflower->setGeometry(QRect(80, 10, 50, 70));
        pushButton_card_sunflower->setCursor(QCursor(Qt::ArrowCursor));
        pushButton_card_sunflower->setStyleSheet(QString::fromUtf8("border-image: url(:/resource/\345\220\221\346\227\245\350\221\265\345\215\241\347\211\207.png);"));
        pushButton_card_pea = new QPushButton(widget);
        pushButton_card_pea->setObjectName(QStringLiteral("pushButton_card_pea"));
        pushButton_card_pea->setGeometry(QRect(135, 10, 50, 70));
        pushButton_card_pea->setCursor(QCursor(Qt::ArrowCursor));
        pushButton_card_pea->setStyleSheet(QString::fromUtf8("border-image: url(:/resource/\350\261\214\350\261\206\345\215\241\347\211\207.png);"));
        pushButton_card_nut = new QPushButton(widget);
        pushButton_card_nut->setObjectName(QStringLiteral("pushButton_card_nut"));
        pushButton_card_nut->setGeometry(QRect(190, 10, 50, 70));
        pushButton_card_nut->setCursor(QCursor(Qt::ArrowCursor));
        pushButton_card_nut->setStyleSheet(QString::fromUtf8("border-image: url(:/resource/\345\234\237\350\261\206\345\215\241\347\211\207.png);"));
        label = new QLabel(page);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(0, 0, 800, 600));
        label->setStyleSheet(QLatin1String("background-image: none;\n"
"border-image: none;"));
        label->setPixmap(QPixmap(QString::fromUtf8(":/resource/fightwindow_background.png")));
        stackedWidget->addWidget(page);
        label->raise();
        widget->raise();

        horizontalLayout->addWidget(stackedWidget);


        retranslateUi(fightwindow);

        QMetaObject::connectSlotsByName(fightwindow);
    } // setupUi

    void retranslateUi(QWidget *fightwindow)
    {
        fightwindow->setWindowTitle(QApplication::translate("fightwindow", "Plants vs Zombies", Q_NULLPTR));
        pushButton_card_sunflower->setText(QString());
        pushButton_card_pea->setText(QString());
        pushButton_card_nut->setText(QString());
        label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class fightwindow: public Ui_fightwindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FIGHTWINDOW_H
