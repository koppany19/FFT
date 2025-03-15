#include "mainwindow.h"

#include <QApplication>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    // UI komponensek létrehozása
    this->window = new QWidget;
    this->label = new QLabel("Hello GUI World!");
    this->button = new QPushButton("Quit!");
    this->layout = new QVBoxLayout;
    this->newButton = new QPushButton("Magyar");
    this->visButton =  new QPushButton("Visibility");

    // elemek elrendezése layoutba
    this->layout->addWidget(this->label);
    this->layout->addWidget(this->button);
    this->layout->addWidget(this->newButton);
    this->layout->addWidget(this->visButton);

    // ha a gombra kattint a felhasználó, akkor az applikáció álljon le
    QObject::connect(this->button, SIGNAL(clicked()), QApplication::instance(), SLOT(quit()));
    QObject::connect(this->newButton, &QPushButton::clicked, [&](){
        label->setText("Szia GUI vilag!");
    });
    QObject::connect(this->visButton, &QPushButton::clicked, [&](){
        if(label->isVisible()){
            label->hide();
            visButton->setText("show");
        } else {
            label->show();
            visButton->setText("hide");
        }
    });

    // az ablak nevének beállítása
    this->setWindowTitle("Quit Button");

    // jelenítsük meg az elemeket a felületen
    this->window->setLayout(layout);
    this->setCentralWidget(window);

}




