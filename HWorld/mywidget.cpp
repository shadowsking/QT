#include "mywidget.h"

mywidget::mywidget(QWidget *parent) : QDialog(parent){
    resize(300,350);
    setWindowTitle("Widget");
    //lb = new QLabel("<center>Hello World!!!<\center>");
    lb = new QLabel("Hello World!!!");
    lb->setAlignment(Qt::AlignCenter);
    btn = new QPushButton("Выход");

    QVBoxLayout *layout = new QVBoxLayout();
    QHBoxLayout *lowerHLayout = new QHBoxLayout();

    lowerHLayout->addStretch();
    lowerHLayout->addWidget(btn);
    layout->addWidget(lb);
    layout->addLayout(lowerHLayout);
    setLayout(layout);

    connect(btn, SIGNAL(clicked()),this, SLOT(close()));
}

mywidget::~mywidget()
{
}
