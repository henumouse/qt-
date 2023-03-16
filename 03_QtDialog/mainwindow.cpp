#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QDialog>
#include<QColorDialog>
#include<QFileDialog>
#include<QColor>
#include<QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //点击按钮出发对话框
    connect(ui->actionNew,&QAction::triggered,this,[=](){
        //对话框分类  模态对话框，非模态对话框
        //模态对话框不允许对其他窗口操作
        //非模态可以对其他窗口操作
        //模态对话框创建
//        QDialog dlg(this);
//        dlg.exec();
        //非模态对话框
//        QDialog * dlg2=new QDialog(this);
//        dlg2->resize(120,30);
//        dlg2->show();
//        dlg2->setAttribute(Qt::WA_DeleteOnClose);
        //QMessageBox对话框
        //QMessageBox::critical(this,"错误","critical");
        //消息提示对话框
        //QMessageBox::information(this,"信息","info");
        //询问提示对话框
        //参数一：父窗口，2：标题 3：提示信息 4：案件类型 5：默认关联回车按键
        //QMessageBox::question(this,"问题","question",QMessageBox::Save|QMessageBox::Cancel,QMessageBox::Save);
        //警告提示对话框
        //QMessageBox::warning(this,"警告","warning");
        //颜色对话框
        //QColor color=QColorDialog::getColor(Qt::red);
        //文件对话框
        QFileDialog::getOpenFileName(this,"打开文件","D:\\毕设","*.doc");

    });
}

MainWindow::~MainWindow()
{
    delete ui;
}

