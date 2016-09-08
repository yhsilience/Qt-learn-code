#include <QtGui>
#include "mainapp.h"

maindialog::maindialog(QWidget *parent)
    :QDialog(parent)
{
    setupUi(this);
    QRegExp regExp("[A-Za-z][1-9][0-9]{0,2}");
    lineEdit->setValidator(new QRegExpValidator(regExp,this));
    connect(okButton,SIGNAL(clicked()),this,SLOT(accept()));
    connect(cancelButton,SIGNAL(clicked()),this,SLOT(reject()));

}

void maindialog::on_LineEdit_textChanged()
{
    okButton->setEnabled(lineEdit->hasAcceptableInput());
}
