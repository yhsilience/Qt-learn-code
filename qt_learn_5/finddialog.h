#ifndef FINDDIALOG_H
#define FINDDIALOG_H

#include <QDialog>

class QCheckBox;
class QLabel;
class QLineEdit;
class QPushButton;

class FindDialog : public QDialog
{
    Q_OBJECT

public:
    FindDialog(QWidget *parent = 0);
    ~FindDialog();
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
