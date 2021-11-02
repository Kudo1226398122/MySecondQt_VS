#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_MySecondQt_VS.h"

class MySecondQt_VS : public QMainWindow
{
    Q_OBJECT

public:
    MySecondQt_VS(QWidget *parent = Q_NULLPTR);

private:
    Ui::MySecondQt_VSClass ui;

// 在这里声明按钮事件
private slots:
    void img_clicked();// 绘制原图
    void save_gray();// 保存灰度图
    void save_black();// 保存黑白图
    void show_all();// 显示灰度图和黑白图
};
