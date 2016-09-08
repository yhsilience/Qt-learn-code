#include <QApplication>
//#include <ui_maindialog.h>
#include "mainapp.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);  
    maindialog *dialog = new maindialog;
    dialog->show();
    return a.exec();
}
