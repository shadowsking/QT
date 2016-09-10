#ifndef MYWIDGET_H
#define MYWIDGET_H

#include "QDialog"
#include "QLabel"
#include "QPushButton"
#include "QBoxLayout"

class mywidget: public QDialog
{
    Q_OBJECT
public:
    mywidget(QWidget *parent=0);
    ~mywidget();
private:
    QLabel *lb;
    QPushButton *btn;
};


#endif // MYWIDGET_H
