#include "QApplication"
#include "mywidget.h"

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    mywidget *s = new mywidget();
    s->show();
    return app.exec();
}
