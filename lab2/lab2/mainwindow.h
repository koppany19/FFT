#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QSlider>
#include <QLCDNumber>
#include <QVBoxLayout>


class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    //MainWindow::~QMainWindow();

private:
    QWidget *window;
    QSlider *_slider;
    QLCDNumber *_lcdNumber;
    QVBoxLayout *layout;
};
#endif // MAINWINDOW_H
