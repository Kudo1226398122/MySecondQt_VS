#include "MySecondQt_VS.h"
#include <qmessagebox.h>
#include <qfiledialog.h>
#include <opencv2/opencv.hpp>
#include <opencv2/highgui.hpp>

using namespace cv;
using namespace std;

MySecondQt_VS::MySecondQt_VS(QWidget *parent)
    : QMainWindow(parent)
{
    
    ui.setupUi(this);
    ui.save_gray_img->setEnabled(false);
    ui.save_black_img->setEnabled(false);
    ui.show_all_img->setEnabled(false);
}

// �Թ��������ͱ���
Mat mat = Mat();
Mat mat_origin = Mat();
Mat mat_gray = Mat();
Mat mat_black = Mat();
Mat mat_gray1 = Mat();
Mat mat_black1 = Mat();
bool img_flag = false;

void MySecondQt_VS::img_clicked() {
    QString fileName = QFileDialog::getOpenFileName(this, QString::fromLocal8Bit("ѡ���ļ�"), QCoreApplication::applicationDirPath(), tr("JPG(*.jpg);;JPEG(*.jpeg);;GIF(*.gif);;PNG(*.png);;BMP(*.bmp);;ICO(*.ico)"));
    if (fileName.isEmpty()) {
        QMessageBox qmb;
        qmb.information(this, QString::fromLocal8Bit("��ʾ"), QString::fromLocal8Bit("δ���κ��ļ�"), QMessageBox::Yes);
        ui.save_gray_img->setEnabled(false);
        ui.save_black_img->setEnabled(false);
        ui.show_all_img->setEnabled(false);
    }
    else {
        img_flag = true;
        ui.save_gray_img->setEnabled(true);
        ui.save_black_img->setEnabled(true);
        ui.show_all_img->setEnabled(true);
        mat = cv::imread(fileName.toLocal8Bit().toStdString());
        QSize laSize = ui.origin_img->size();//  origin_img��Ҫ��ʾͼƬ��label������

        // ԭͼ����
        cvtColor(mat, mat_origin, COLOR_BGR2RGB);// ��RGB��ʽ��ʾ
        QImage disImage = QImage((const unsigned char*)(mat_origin.data), mat_origin.cols, mat_origin.rows, mat_origin.step, QImage::Format_RGB888);
        disImage = disImage.scaled(laSize, Qt::KeepAspectRatio);
        QPixmap pixmap = QPixmap::fromImage(disImage);
        ui.origin_img->setPixmap(pixmap);
        ui.origin_img->show();

        // �Ҷȴ���
        cvtColor(mat, mat_gray, COLOR_BGR2GRAY);

        // ��ֵ���ڰ״���
        cvtColor(mat, mat_black, COLOR_BGR2GRAY);
        threshold(mat_black, mat_black, 0, 255, THRESH_OTSU);
    }
}

void MySecondQt_VS::save_gray() {
    if (img_flag) {
        imwrite("D:\\GrayImage.jpg", mat_gray);
    }
    else {
        QMessageBox qmb;
        qmb.information(this, QString::fromLocal8Bit("��ʾ"), QString::fromLocal8Bit("δ���κ��ļ�"));
    }
}

void MySecondQt_VS::save_black() {
    if (img_flag) {
        imwrite("D:\\BlackImage.jpg", mat_black);
    }
    else {
        QMessageBox qmb;
        qmb.information(this, QString::fromLocal8Bit("��ʾ"), QString::fromLocal8Bit("δ���κ��ļ�"));
    }
}

void MySecondQt_VS::show_all() {
    if (img_flag) {
        cvtColor(mat_gray, mat_gray1, COLOR_GRAY2RGB);
        cvtColor(mat_black, mat_black1, COLOR_BGR2RGB);

        // ��ʾ�Ҷ�ͼ
        QSize gary_laSize = ui.gray_img->size();//  lopencv_img��Ҫ��ʾͼƬ��label������
        QImage gray_disImage = QImage((const unsigned char*)(mat_gray1.data), mat_gray1.cols, mat_gray1.rows, mat_gray1.step, QImage::Format_RGB888);
        gray_disImage = gray_disImage.scaled(gary_laSize, Qt::KeepAspectRatio);
        QPixmap gray_pixmap = QPixmap::fromImage(gray_disImage);
        ui.gray_img->setPixmap(gray_pixmap);
        ui.gray_img->show();

        // ��ʾ��ֵ�ڰ�ͼ
        QSize black_laSize = ui.black_img->size();//  lopencv_img��Ҫ��ʾͼƬ��label������
        QImage black_disImage = QImage((const unsigned char*)(mat_black1.data), mat_black1.cols, mat_black1.rows, mat_black1.step, QImage::Format_RGB888);
        black_disImage = black_disImage.scaled(black_laSize, Qt::KeepAspectRatio);
        QPixmap black_pixmap = QPixmap::fromImage(black_disImage);
        ui.black_img->setPixmap(black_pixmap);
        ui.black_img->show();
    }
    else {
        QMessageBox qmb;
        qmb.warning(this, QString::fromLocal8Bit("����"), QString::fromLocal8Bit("δ����ͼƬ"));
    }
}