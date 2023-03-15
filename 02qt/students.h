#ifndef STUDENTS_H
#define STUDENTS_H

#include <QObject>

class Students : public QObject
{
    Q_OBJECT
public:
    explicit Students(QObject *parent = nullptr);

signals:

//自定义槽函数,5.0版本以上可以写在public下，或全局函数，或者lambda表达式
public slots:
//返回值为void
    //需要声明，需要实现，可以有参数和重载
    void eat();
//    void eat(QString foodName);
};

#endif // STUDENTS_H
