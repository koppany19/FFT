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
#include <QtWidgets/QGridLayout>
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
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_2;
    QGridLayout *gridLayout_2;
    QLabel *label_3;
    QLineEdit *lineEdit_b;
    QLabel *label;
    QLineEdit *lineEdit_a;
    QLabel *label_2;
    QLineEdit *lineEdit_c;
    QVBoxLayout *verticalLayout_6;
    QLabel *label_4;
    QVBoxLayout *verticalLayout_8;
    QLineEdit *resultText;
    QVBoxLayout *verticalLayout_9;
    QPushButton *calculateButton;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(735, 598);
        QFont font;
        font.setPointSize(18);
        MainWindow->setFont(font);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        verticalLayout_2 = new QVBoxLayout(centralwidget);
        verticalLayout_2->setObjectName("verticalLayout_2");
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName("gridLayout_2");
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");

        gridLayout_2->addWidget(label_3, 0, 4, 1, 1);

        lineEdit_b = new QLineEdit(centralwidget);
        lineEdit_b->setObjectName("lineEdit_b");

        gridLayout_2->addWidget(lineEdit_b, 0, 3, 1, 1);

        label = new QLabel(centralwidget);
        label->setObjectName("label");

        gridLayout_2->addWidget(label, 0, 0, 1, 1);

        lineEdit_a = new QLineEdit(centralwidget);
        lineEdit_a->setObjectName("lineEdit_a");

        gridLayout_2->addWidget(lineEdit_a, 0, 1, 1, 1);

        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");

        gridLayout_2->addWidget(label_2, 0, 2, 1, 1);

        lineEdit_c = new QLineEdit(centralwidget);
        lineEdit_c->setObjectName("lineEdit_c");

        gridLayout_2->addWidget(lineEdit_c, 0, 5, 1, 1);


        verticalLayout_2->addLayout(gridLayout_2);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName("verticalLayout_6");
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName("label_4");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy);
        QFont font1;
        font1.setPointSize(12);
        label_4->setFont(font1);

        verticalLayout_6->addWidget(label_4);


        verticalLayout_2->addLayout(verticalLayout_6);

        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setObjectName("verticalLayout_8");
        resultText = new QLineEdit(centralwidget);
        resultText->setObjectName("resultText");
        resultText->setEnabled(false);
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(resultText->sizePolicy().hasHeightForWidth());
        resultText->setSizePolicy(sizePolicy1);

        verticalLayout_8->addWidget(resultText);


        verticalLayout_2->addLayout(verticalLayout_8);

        verticalLayout_9 = new QVBoxLayout();
        verticalLayout_9->setObjectName("verticalLayout_9");
        calculateButton = new QPushButton(centralwidget);
        calculateButton->setObjectName("calculateButton");

        verticalLayout_9->addWidget(calculateButton);


        verticalLayout_2->addLayout(verticalLayout_9);

        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "c", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "a", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "b", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Result:", nullptr));
        calculateButton->setText(QCoreApplication::translate("MainWindow", "Calculate!", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
