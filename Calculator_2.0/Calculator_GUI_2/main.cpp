#include "calculator.h"

#include <QObject>
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Calculator c;
    c.show();

    return a.exec();
}
