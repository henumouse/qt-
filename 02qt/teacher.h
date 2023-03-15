#ifndef TEACHER_H
#define TEACHER_H

#include <QObject>

class Teacher : public QObject
{
    Q_OBJECT
public:
    explicit Teacher(QObject *parent = nullptr);


signals:
    //返回值为void，只需要声明不需要实现
    //可以有参数和发生重载
    void afterClass();
    //void afterClass(QString foodName);


public slots:

};

#endif // TEACHER_H
