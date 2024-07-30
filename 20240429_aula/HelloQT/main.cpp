#include "helloqt.h"

#include <QApplication>
#include <QtWidgets>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    HelloQT janela01("Hello QT");
    janela01.show();

    HelloQT janela02("Hello World!!!");
    janela02.show();

    return a.exec();
}
