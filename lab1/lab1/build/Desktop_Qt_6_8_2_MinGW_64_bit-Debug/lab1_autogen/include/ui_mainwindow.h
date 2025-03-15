/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *FirstNrLabel;
    QLineEdit *lineEdit;
    QHBoxLayout *horizontalLayout_2;
    QLabel *SecondNrLabel;
    QLineEdit *lineEdit_2;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *ButtonAdd;
    QPushButton *ButtonSub;
    QPushButton *ButtonMult;
    QPushButton *ButtonDiv;
    QHBoxLayout *horizontalLayout_4;
    QLabel *ResultLabel;
    QLineEdit *lineEdit_3;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(455, 461);
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName("centralWidget");
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        FirstNrLabel = new QLabel(centralWidget);
        FirstNrLabel->setObjectName("FirstNrLabel");

        horizontalLayout->addWidget(FirstNrLabel);

        lineEdit = new QLineEdit(centralWidget);
        lineEdit->setObjectName("lineEdit");

        horizontalLayout->addWidget(lineEdit);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        SecondNrLabel = new QLabel(centralWidget);
        SecondNrLabel->setObjectName("SecondNrLabel");

        horizontalLayout_2->addWidget(SecondNrLabel);

        lineEdit_2 = new QLineEdit(centralWidget);
        lineEdit_2->setObjectName("lineEdit_2");

        horizontalLayout_2->addWidget(lineEdit_2);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        ButtonAdd = new QPushButton(centralWidget);
        ButtonAdd->setObjectName("ButtonAdd");

        horizontalLayout_3->addWidget(ButtonAdd);

        ButtonSub = new QPushButton(centralWidget);
        ButtonSub->setObjectName("ButtonSub");

        horizontalLayout_3->addWidget(ButtonSub);

        ButtonMult = new QPushButton(centralWidget);
        ButtonMult->setObjectName("ButtonMult");

        horizontalLayout_3->addWidget(ButtonMult);

        ButtonDiv = new QPushButton(centralWidget);
        ButtonDiv->setObjectName("ButtonDiv");

        horizontalLayout_3->addWidget(ButtonDiv);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        ResultLabel = new QLabel(centralWidget);
        ResultLabel->setObjectName("ResultLabel");

        horizontalLayout_4->addWidget(ResultLabel);

        lineEdit_3 = new QLineEdit(centralWidget);
        lineEdit_3->setObjectName("lineEdit_3");
        lineEdit_3->setReadOnly(true);

        horizontalLayout_4->addWidget(lineEdit_3);


        verticalLayout->addLayout(horizontalLayout_4);

        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        FirstNrLabel->setText(QCoreApplication::translate("MainWindow", "First Number", nullptr));
        SecondNrLabel->setText(QCoreApplication::translate("MainWindow", "Second Number", nullptr));
        ButtonAdd->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        ButtonSub->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        ButtonMult->setText(QCoreApplication::translate("MainWindow", "*", nullptr));
        ButtonDiv->setText(QCoreApplication::translate("MainWindow", "/", nullptr));
        ResultLabel->setText(QCoreApplication::translate("MainWindow", "Result", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
