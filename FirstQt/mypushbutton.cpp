#include "mypushbutton.h"
#include<QDebug>

MyPushButton::MyPushButton(QWidget *parent) : QPushButton(parent)
{

};
MyPushButton::~MyPushButton(){
    qDebug()<<"自定义按钮的析构函数调用";
}
