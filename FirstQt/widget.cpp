#include "widget.h"
#include "ui_widget.h"
#include"mypushbutton.h"
#include<QDebug>
//#include<QPushButton>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    QPushButton *btn=new QPushButton;
    //btn->show();//show是用顶层弹出，新建一个窗口，显示在当前窗口需要做依赖
    btn->setParent(this);
    btn->setText("close button");
    QPushButton *btn2=new QPushButton("test2",this);
    //按钮的移动
    btn2->move(100,100);
    //重置窗口的大小
    resize(600,400);
    //重置按钮的大小
    btn2->resize(60,40);
    //重置窗口的标题
    setWindowTitle("first window");
    //设置窗口固定大小
    setFixedSize(600,400);
    //自定义按钮
    MyPushButton *mbtn=new MyPushButton;
    mbtn->setParent(this);
    mbtn->setText("myPushButton");
    mbtn->move(200,200);
    //实现点击按钮关闭窗口
    connect(btn,&QPushButton::clicked,this,&QWidget::close);

    ui->setupUi(this);
}

Widget::~Widget()
{
    delete ui;
}

