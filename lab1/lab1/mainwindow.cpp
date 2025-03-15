#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow(){
    delete ui;
}


void MainWindow::on_ButtonAdd_clicked()
{
    int firstNum = ui->lineEdit->text().toInt();
    int secondNum = ui->lineEdit_2->text().toInt();
    int result = firstNum + secondNum;

    QString resultAsText = QString::number(result);

    ui->lineEdit_3->setText(resultAsText);
}


void MainWindow::on_ButtonSub_clicked()
{
    int firstNum = ui->lineEdit->text().toInt();
    int secondNum = ui->lineEdit_2->text().toInt();
    int result = firstNum - secondNum;

    QString resultAsText = QString::number(result);

    ui->lineEdit_3->setText(resultAsText);
}



void MainWindow::on_ButtonMult_clicked()
{
    double firstNum = ui->lineEdit->text().toDouble();
    double secondNum = ui->lineEdit_2->text().toDouble();
    double result = firstNum * secondNum;

    QString resultAsText = QString::number(result);

    ui->lineEdit_3->setText(resultAsText);
}


void MainWindow::on_ButtonDiv_clicked()
{
    double firstNum = ui->lineEdit->text().toDouble();
    double secondNum = ui->lineEdit_2->text().toDouble();
    double result = firstNum / secondNum;

    QString resultAsText = QString::number(result);

    ui->lineEdit_3->setText(resultAsText);
}

