/********************************************************************************
** Form generated from reading UI file 'MySecondQt_VS.ui'
**
** Created by: Qt User Interface Compiler version 6.2.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MYSECONDQT_VS_H
#define UI_MYSECONDQT_VS_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MySecondQt_VSClass
{
public:
    QWidget *centralWidget;
    QLabel *origin_img;
    QLabel *gray_img;
    QLabel *black_img;
    QLabel *label;
    QLabel *label_2;
    QPushButton *get_img;
    QPushButton *save_gray_img;
    QPushButton *save_black_img;
    QPushButton *show_all_img;
    QMenuBar *menuBar;
    QMenu *menu;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MySecondQt_VSClass)
    {
        if (MySecondQt_VSClass->objectName().isEmpty())
            MySecondQt_VSClass->setObjectName(QString::fromUtf8("MySecondQt_VSClass"));
        MySecondQt_VSClass->resize(1270, 720);
        centralWidget = new QWidget(MySecondQt_VSClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        origin_img = new QLabel(centralWidget);
        origin_img->setObjectName(QString::fromUtf8("origin_img"));
        origin_img->setGeometry(QRect(20, 30, 381, 241));
        gray_img = new QLabel(centralWidget);
        gray_img->setObjectName(QString::fromUtf8("gray_img"));
        gray_img->setGeometry(QRect(520, 30, 341, 221));
        black_img = new QLabel(centralWidget);
        black_img->setObjectName(QString::fromUtf8("black_img"));
        black_img->setGeometry(QRect(870, 30, 361, 221));
        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(660, 260, 61, 51));
        QFont font;
        font.setPointSize(13);
        label->setFont(font);
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(1020, 260, 61, 51));
        label_2->setFont(font);
        get_img = new QPushButton(centralWidget);
        get_img->setObjectName(QString::fromUtf8("get_img"));
        get_img->setGeometry(QRect(150, 290, 121, 61));
        get_img->setFont(font);
        get_img->setCursor(QCursor(Qt::PointingHandCursor));
        save_gray_img = new QPushButton(centralWidget);
        save_gray_img->setObjectName(QString::fromUtf8("save_gray_img"));
        save_gray_img->setGeometry(QRect(650, 310, 81, 41));
        QFont font1;
        font1.setPointSize(11);
        save_gray_img->setFont(font1);
        save_gray_img->setCursor(QCursor(Qt::PointingHandCursor));
        save_black_img = new QPushButton(centralWidget);
        save_black_img->setObjectName(QString::fromUtf8("save_black_img"));
        save_black_img->setGeometry(QRect(1010, 310, 81, 41));
        save_black_img->setFont(font1);
        save_black_img->setCursor(QCursor(Qt::PointingHandCursor));
        show_all_img = new QPushButton(centralWidget);
        show_all_img->setObjectName(QString::fromUtf8("show_all_img"));
        show_all_img->setGeometry(QRect(820, 440, 141, 61));
        show_all_img->setFont(font1);
        show_all_img->setCursor(QCursor(Qt::PointingHandCursor));
        MySecondQt_VSClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MySecondQt_VSClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1270, 21));
        menu = new QMenu(menuBar);
        menu->setObjectName(QString::fromUtf8("menu"));
        MySecondQt_VSClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MySecondQt_VSClass);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MySecondQt_VSClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MySecondQt_VSClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MySecondQt_VSClass->setStatusBar(statusBar);

        menuBar->addAction(menu->menuAction());

        retranslateUi(MySecondQt_VSClass);
        QObject::connect(get_img, SIGNAL(clicked()), MySecondQt_VSClass, SLOT(img_clicked()));
        QObject::connect(save_gray_img, SIGNAL(clicked()), MySecondQt_VSClass, SLOT(save_gray()));
        QObject::connect(save_black_img, SIGNAL(clicked()), MySecondQt_VSClass, SLOT(save_black()));
        QObject::connect(show_all_img, SIGNAL(clicked()), MySecondQt_VSClass, SLOT(show_all()));

        QMetaObject::connectSlotsByName(MySecondQt_VSClass);
    } // setupUi

    void retranslateUi(QMainWindow *MySecondQt_VSClass)
    {
        MySecondQt_VSClass->setWindowTitle(QCoreApplication::translate("MySecondQt_VSClass", "MySecondQt_VS", nullptr));
        origin_img->setText(QString());
        gray_img->setText(QString());
        black_img->setText(QString());
        label->setText(QCoreApplication::translate("MySecondQt_VSClass", "\347\201\260\345\272\246\345\233\276", nullptr));
        label_2->setText(QCoreApplication::translate("MySecondQt_VSClass", "\351\273\221\347\231\275\345\233\276", nullptr));
        get_img->setText(QCoreApplication::translate("MySecondQt_VSClass", "\350\216\267\345\217\226\345\233\276\347\211\207", nullptr));
        save_gray_img->setText(QCoreApplication::translate("MySecondQt_VSClass", "\344\277\235\345\255\230\347\201\260\345\272\246\345\233\276", nullptr));
        save_black_img->setText(QCoreApplication::translate("MySecondQt_VSClass", "\344\277\235\345\255\230\351\273\221\347\231\275\345\233\276", nullptr));
        show_all_img->setText(QCoreApplication::translate("MySecondQt_VSClass", "\346\230\276\347\244\272\347\201\260\345\272\246\345\233\276\345\222\214\351\273\221\347\231\275\345\233\276", nullptr));
        menu->setTitle(QCoreApplication::translate("MySecondQt_VSClass", "\347\201\260\345\272\246\345\233\276\345\222\214\351\273\221\347\231\275\345\233\276", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MySecondQt_VSClass: public Ui_MySecondQt_VSClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYSECONDQT_VS_H
