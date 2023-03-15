#include "students.h"
#include<QDebug>
#pragma comment  (lib, "User32.lib")

Students::Students(QObject *parent) : QObject(parent)
{

}
void Students:: eat(){
    qDebug()<<"student eat";
};
//void eat(QString foodName){
//     qDebug()<<"student eat"<<foodName;
//};
