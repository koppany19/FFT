#include "timer.h"
#include "ui_timer.h"
#include <QDateTime>
#include <QDebug>

Timer::Timer(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Timer)
{
    ui->setupUi(this);


    QDateTime now = QDateTime::currentDateTime();
    QString format = "yyyy/MM/dd";

    QString actualDate = now.toString(format);

    qDebug() << "The actual date is: " << actualDate;

    ui->labelDate->setText(actualDate);


}

Timer::~Timer()
{
    delete ui;
}
