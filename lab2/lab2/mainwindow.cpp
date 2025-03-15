#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    setWindowTitle(tr("Number Display")); // ablakcím
    setFixedSize(300, 175);
    _slider = new QSlider(this);
    _slider->setMinimum(0);
    _slider->setMaximum(100);
    _slider->setValue(0);
    _slider->setOrientation(Qt::Horizontal);// csúszkairány
    _slider->setGeometry(5, 5, 290, 30);
    _lcdNumber = new QLCDNumber(4, this);
    _lcdNumber->display(0);
    _lcdNumber->setGeometry(5, 50, 290, 120);
    connect(_slider, SIGNAL(valueChanged(int)), _lcdNumber, SLOT(display(int)));
    //connect(slider, QSlider::valueChanged, _lcdNumber, QOverload<int>::of(&QLCDNumber::display));
}

