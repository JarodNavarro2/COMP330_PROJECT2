#include "mainwindow.h"
#include <QApplication>
#include <QSplashScreen>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QPixmap screen(":/Images/images/win/Hoot.png");
    QSplashScreen splash(screen);
    MainWindow w;
    splash.show();
    a.processEvents();
    w.show();
    splash.finish(&w);
    w.setWindowTitle("Hoot Notes Beta v1.02");
    return a.exec();
}
