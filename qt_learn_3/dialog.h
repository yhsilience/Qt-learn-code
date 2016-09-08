#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>

class QCheckBox;
class QLabel;
class QLineEdit;
class QPushButton;

class findDialog : public QDialog
{
    Q_OBJECT

public:
    findDialog(QWidget *parent = 0);
    ~findDialog();
signals:
    void findnext(const QString &str,Qt::CaseSensitivity cs);
    void findprevious(const QString &str,Qt::CaseSensitivity cs);
private slots:
    void findClicked();
    void enableFindButton(const QString &text);
private:
    QLabel *label;
    QLineEdit *lineedit;
    QCheckBox *casecheckbox;
    QCheckBox *backwardcheckbox;
    QPushButton *findbutton;
    QPushButton *closebuton;
};

#endif // DIALOG_H
