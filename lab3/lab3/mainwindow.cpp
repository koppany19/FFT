#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    ui->comboBox->addItem("BIN",2);
    ui->comboBox->addItem("OCT",8);
    ui->comboBox->addItem("DEC",10);
    ui->comboBox->addItem("HEX",16);

    connect (ui->buttonConvert, &QPushButton::clicked, this, &MainWindow::convertNumber);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow :: convertNumber(){
    bool ok;
    int number = ui->lineEdit->text().toInt(&ok, 10);
    if (!ok)
    {
        QMessageBox::critical(this, "Hiba", "Hibás bemenet!");
        return;
    }

    int base = ui->comboBox->currentData().toInt();
    QString result = QString::number(number, base).toUpper();

    ui->labelResult->setVisible(true);
    ui->lineEdit_3->setVisible(true);
    ui->lineEdit_3->setText(result);
}

void MainWindow::on_buttonConvert_clicked()
{
    QMessageBox::information(this, "Atalakit", ui->comboBox->currentText());
}

