#include "view.h"
#include "control.h"
#include "model.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    View w;
    Model m;
    Control(&m, &w);

    w.show();



    return a.exec();
}
