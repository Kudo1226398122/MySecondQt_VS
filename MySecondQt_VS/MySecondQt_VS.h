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

// ������������ť�¼�
private slots:
    void img_clicked();// ����ԭͼ
    void save_gray();// ����Ҷ�ͼ
    void save_black();// ����ڰ�ͼ
    void show_all();// ��ʾ�Ҷ�ͼ�ͺڰ�ͼ
};
