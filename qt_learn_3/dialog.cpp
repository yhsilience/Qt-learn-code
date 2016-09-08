#include <QtGui>
#include "dialog.h"

findDialog::findDialog(QWidget *parent)
    : QDialog(parent)
{
    label = new QLabel(tr("Find &what:"));   // & 表示快捷健？？？？？
    lineedit = new QLineEdit;
    label->setBuddy(lineedit);

    casecheckbox = new QCheckBox(tr("Match &case"));
    backwardcheckbox = new QCheckBox(tr("Search &backward"));

    findbutton = new QPushButton(tr("&Find"));
    findbutton->setDefault(true);
    findbutton->setEnabled(false);

    closebuton = new QPushButton(tr("Close"));


    connect(lineedit,SIGNAL(textChanged(const QString &)),this,SLOT(enableFindButton(const QString &)));
    connect(findbutton,SIGNAL(clicked()),this,SLOT(findClicked()));
    connect(closebuton,SIGNAL(clicked()),this,SLOT(close()));

    QHBoxLayout *topLeftlayout = new QHBoxLayout;
    topLeftlayout->addWidget(label);
    topLeftlayout->addWidget(lineedit);

    QVBoxLayout *leftlayout = new QVBoxLayout;
    leftlayout->addLayout(topLeftlayout);
    leftlayout->addWidget(casecheckbox);
    leftlayout->addWidget(backwardcheckbox);

    QVBoxLayout *rightlayout = new QVBoxLayout;
    rightlayout->addWidget(findbutton);
    rightlayout->addWidget(closebuton);
    rightlayout->addStretch();

    QHBoxLayout *mainlayout = new QHBoxLayout;
    mainlayout->addLayout(leftlayout);
    mainlayout->addLayout(rightlayout);
    setLayout(mainlayout);

    setWindowTitle(tr("Find"));
    setFixedHeight(sizeHint().height());
}

findDialog::~findDialog()
{

}
void findDialog::findClicked()
{
    QString text = lineedit->text();
    Qt::CaseSensitivity cs = casecheckbox->isChecked() ? Qt::CaseSensitive : Qt::CaseInsensitive;
    if(backwardcheckbox->isChecked())
    {
        emit findprevious(text,cs);
    }
    else
    {
        emit findnext(text,cs);
    }
}
void findDialog::enableFindButton(const QString &text)
{
    findbutton->setEnabled(!text.isEmpty());
}
















