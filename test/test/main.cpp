#include "test.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    test w;
    w.show();
    w.showMessage("axiba");
    return a.exec();
}
