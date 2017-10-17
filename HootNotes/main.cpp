#include "mainwindow.h"
#include <QApplication>
#include <QSplashScreen>
#include <QMessageBox>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QPixmap screen(":/Images/images/win/Hoot.png");
    QSplashScreen splash(screen);
    MainWindow w;
    QMessageBox acknowledge;
    acknowledge.setText("Terms and Conditions");
    acknowledge.setIcon(QMessageBox::Question);
    acknowledge.setInformativeText("This is a work in progress build, currently at Beta. There might be bugs in the program. Do you accept these terms and wish to continue?");
    acknowledge.setStandardButtons(QMessageBox::Yes | QMessageBox::No);
    acknowledge.setDefaultButton(QMessageBox::Yes);
    splash.show();

    if (acknowledge.exec() == QMessageBox::Yes)
    {
        a.processEvents();
        w.show();
        splash.finish(&w);
    }
    else
    {
        a.quit();
        exit(1);
    }
    return a.exec();
}
