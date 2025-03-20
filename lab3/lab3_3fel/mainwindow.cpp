#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->calculateButton, &QPushButton::clicked, this, &MainWindow::calculate);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::calculate()
{
    bool ok1, ok2, ok3;
    double a = ui->lineEdit_a->text().toDouble(&ok1);
    double b = ui->lineEdit_b->text().toDouble(&ok2);
    double c = ui->lineEdit_c->text().toDouble(&ok3);

    if (!ok1 || !ok2 || !ok3) {
        QMessageBox::warning(this, "error", "please add valid numbers");
        return;
    }

    if (a == 0) {
        QMessageBox::warning(this, "error", "a: could not be 0");
        return;
    }

    double delta = b * b - 4 * a * c;

    if (delta < 0) {
        QMessageBox::warning(this, "nincs valos megoldas", "nincs valos gyok");
        ui->resultText->setText("");
    } else if (delta == 0) {
        double x = -b / (2 * a);
        ui->resultText->setText(QString("1 megolas: x = %1").arg(x));
    } else {
        double x1 = (-b + sqrt(delta)) / (2 * a);
        double x2 = (-b - sqrt(delta)) / (2 * a);
        ui->resultText->setText(QString("2 megoldas:\nx1 = %1\nx2 = %2").arg(x1).arg(x2));
    }
}
