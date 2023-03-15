#include "widget.h"
#include "ui_widget.h"
#include<QPushButton>
//Teacher老师类
//Students学生类
//下课后老师触发 下课信号
//学生响应信号并吃饭

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    resize(600,400);
    this->zt=new Teacher(this);
    this->st=new Students(this);
    //连接线信号和曹
    connect(zt,&Teacher::afterClass,st,&Students::eat);

    afterClass();
    //链接有参数的信号和槽
    //区分有参和无参函数，函数指针可以指向函数地址
//    void(Teacher::*teacherSignal)(QString) =&Teacher::afterClass;
//    void(Students::*studentsSlot)(QString)=&Students::eat;
//     connect(zt,teacherSignal,st,studentsSlot);
//     afterClass();
    QPushButton * btn2=new QPushButton("匿名函数",this);
    [=](){
        btn2->setText("set匿名函数");
    }();


    ui->setupUi(this);
}
void Widget::afterClass(){
    //触发自定义信号
    emit this->zt->afterClass();
    //emit this->zt->afterClass("apple");
}
Widget::~Widget()
{
    delete ui;
}

