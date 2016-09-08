#include <QApplication>
#include <QLabel>
#include <QPushButton>
#include <QHBoxLayout>
#include <QSlider>
#include <QSpinBox>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    /*
    QLabel *label = new QLabel("Hello Qt !");
    label->show();
    */
    /*
    QPushButton *button = new QPushButton("Quit");
    QObject::connect(button,SIGNAL(clicked()),&app,SLOT(quit())); // 链接信号和槽
    button->show();
    */
    QWidget *mainwindows = new QWidget;
    mainwindows->setWindowTitle("Input your age");

    QSpinBox *spinBox = new QSpinBox;
    QSlider *slider = new QSlider(Qt::Vertical);

    spinBox->setRange(0,130);
    slider->setRange(0,130);

    QObject::connect(spinBox,SIGNAL(valueChanged(int)),slider,SLOT(setValue(int)));
    QObject::connect(slider,SIGNAL(valueChanged(int)),spinBox,SLOT(setValue(int)));

    spinBox->setValue(35);

    QHBoxLayout *layout = new QHBoxLayout;  //在水平方向上排列窗口

    layout->addWidget(spinBox);
    layout->addWidget(slider);

    mainwindows->setLayout(layout);
    mainwindows->show();



















    return app.exec();
}
