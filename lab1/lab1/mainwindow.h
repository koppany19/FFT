#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:

    void on_ButtonAdd_clicked();

    void on_ButtonSub_clicked();

    void on_ButtonMult_clicked();

    void on_ButtonDiv_clicked();

private:
    Ui::MainWindow *ui;
};


#endif // MAINWINDOW_H
