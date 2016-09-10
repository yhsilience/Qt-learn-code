#include "mainwindow.h"
#include <QApplication>
#include <QSplashScreen>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    /*启动动画*/
    /*
    QSplashScreen * splash = new QSplashScreen;
    splash->setPixmap(QPixmap(":/images/splash.png"));
    splash->show();
    */
    MainWindow *mainwindow = new MainWindow;
    mainwindow->show();
    return app.exec();
}
