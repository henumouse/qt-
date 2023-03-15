#ifndef WIDGET_H
#define WIDGET_H
#include"teacher.h"
#include"students.h"

#include <QWidget>

QT_BEGIN_NAMESPACE
namespace Ui { class Widget; }
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();
    Teacher *zt;
    Students *st;
    void afterClass();

private:
    Ui::Widget *ui;
};
#endif // WIDGET_H
