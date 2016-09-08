#ifndef MAINAPP_H
#define MAINAPP_H
#include <QDialog>
#include "ui_maindialog.h"

class maindialog:public QDialog,public Ui::maindialog
{
    Q_OBJECT
public:
    maindialog(QWidget *parent = 0);
private slots:
    void on_LineEdit_textChanged();

};
#endif // MAINAPP_H

