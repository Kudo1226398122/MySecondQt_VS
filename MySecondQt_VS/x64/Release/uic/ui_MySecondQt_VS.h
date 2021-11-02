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
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MySecondQt_VSClass
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MySecondQt_VSClass)
    {
        if (MySecondQt_VSClass->objectName().isEmpty())
            MySecondQt_VSClass->setObjectName(QString::fromUtf8("MySecondQt_VSClass"));
        MySecondQt_VSClass->resize(600, 400);
        menuBar = new QMenuBar(MySecondQt_VSClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        MySecondQt_VSClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MySecondQt_VSClass);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MySecondQt_VSClass->addToolBar(mainToolBar);
        centralWidget = new QWidget(MySecondQt_VSClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        MySecondQt_VSClass->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(MySecondQt_VSClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MySecondQt_VSClass->setStatusBar(statusBar);

        retranslateUi(MySecondQt_VSClass);

        QMetaObject::connectSlotsByName(MySecondQt_VSClass);
    } // setupUi

    void retranslateUi(QMainWindow *MySecondQt_VSClass)
    {
        MySecondQt_VSClass->setWindowTitle(QCoreApplication::translate("MySecondQt_VSClass", "MySecondQt_VS", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MySecondQt_VSClass: public Ui_MySecondQt_VSClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYSECONDQT_VS_H
