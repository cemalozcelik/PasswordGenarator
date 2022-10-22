/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label_lenght;
    QLineEdit *lineEdit;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_lowerCase;
    QCheckBox *checkBox_lowerCase;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_ambiguous;
    QCheckBox *checkBox_ambiguous;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_password;
    QTextEdit *textEdit_password;
    QVBoxLayout *verticalLayout_3;
    QPushButton *pushButto_copy;
    QPushButton *pushButton;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_numbers;
    QCheckBox *checkBox_numbers;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_symbols;
    QCheckBox *checkBox_symbols;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_empty;
    QPushButton *pushButton_generate;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_upperCase;
    QCheckBox *checkBox_upperCase;
    QTextEdit *textEdit_list;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(674, 486);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout_2 = new QGridLayout(centralwidget);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_lenght = new QLabel(centralwidget);
        label_lenght->setObjectName(QString::fromUtf8("label_lenght"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::MinimumExpanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_lenght->sizePolicy().hasHeightForWidth());
        label_lenght->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(label_lenght);

        lineEdit = new QLineEdit(centralwidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        QSizePolicy sizePolicy1(QSizePolicy::MinimumExpanding, QSizePolicy::Maximum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(lineEdit->sizePolicy().hasHeightForWidth());
        lineEdit->setSizePolicy(sizePolicy1);

        horizontalLayout->addWidget(lineEdit);


        gridLayout->addLayout(horizontalLayout, 0, 0, 1, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_lowerCase = new QLabel(centralwidget);
        label_lowerCase->setObjectName(QString::fromUtf8("label_lowerCase"));
        sizePolicy.setHeightForWidth(label_lowerCase->sizePolicy().hasHeightForWidth());
        label_lowerCase->setSizePolicy(sizePolicy);

        horizontalLayout_4->addWidget(label_lowerCase);

        checkBox_lowerCase = new QCheckBox(centralwidget);
        checkBox_lowerCase->setObjectName(QString::fromUtf8("checkBox_lowerCase"));
        sizePolicy.setHeightForWidth(checkBox_lowerCase->sizePolicy().hasHeightForWidth());
        checkBox_lowerCase->setSizePolicy(sizePolicy);

        horizontalLayout_4->addWidget(checkBox_lowerCase);


        gridLayout->addLayout(horizontalLayout_4, 3, 0, 1, 1);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        label_ambiguous = new QLabel(centralwidget);
        label_ambiguous->setObjectName(QString::fromUtf8("label_ambiguous"));
        sizePolicy.setHeightForWidth(label_ambiguous->sizePolicy().hasHeightForWidth());
        label_ambiguous->setSizePolicy(sizePolicy);

        horizontalLayout_6->addWidget(label_ambiguous);

        checkBox_ambiguous = new QCheckBox(centralwidget);
        checkBox_ambiguous->setObjectName(QString::fromUtf8("checkBox_ambiguous"));
        sizePolicy.setHeightForWidth(checkBox_ambiguous->sizePolicy().hasHeightForWidth());
        checkBox_ambiguous->setSizePolicy(sizePolicy);

        horizontalLayout_6->addWidget(checkBox_ambiguous);


        gridLayout->addLayout(horizontalLayout_6, 5, 0, 1, 1);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        label_password = new QLabel(centralwidget);
        label_password->setObjectName(QString::fromUtf8("label_password"));

        horizontalLayout_8->addWidget(label_password);

        textEdit_password = new QTextEdit(centralwidget);
        textEdit_password->setObjectName(QString::fromUtf8("textEdit_password"));

        horizontalLayout_8->addWidget(textEdit_password);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(9, 9, 9, -1);
        pushButto_copy = new QPushButton(centralwidget);
        pushButto_copy->setObjectName(QString::fromUtf8("pushButto_copy"));

        verticalLayout_3->addWidget(pushButto_copy);

        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        verticalLayout_3->addWidget(pushButton);


        horizontalLayout_8->addLayout(verticalLayout_3);


        gridLayout->addLayout(horizontalLayout_8, 7, 0, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_numbers = new QLabel(centralwidget);
        label_numbers->setObjectName(QString::fromUtf8("label_numbers"));
        sizePolicy.setHeightForWidth(label_numbers->sizePolicy().hasHeightForWidth());
        label_numbers->setSizePolicy(sizePolicy);

        horizontalLayout_3->addWidget(label_numbers);

        checkBox_numbers = new QCheckBox(centralwidget);
        checkBox_numbers->setObjectName(QString::fromUtf8("checkBox_numbers"));
        sizePolicy.setHeightForWidth(checkBox_numbers->sizePolicy().hasHeightForWidth());
        checkBox_numbers->setSizePolicy(sizePolicy);

        horizontalLayout_3->addWidget(checkBox_numbers);


        gridLayout->addLayout(horizontalLayout_3, 2, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_symbols = new QLabel(centralwidget);
        label_symbols->setObjectName(QString::fromUtf8("label_symbols"));
        sizePolicy.setHeightForWidth(label_symbols->sizePolicy().hasHeightForWidth());
        label_symbols->setSizePolicy(sizePolicy);

        horizontalLayout_2->addWidget(label_symbols);

        checkBox_symbols = new QCheckBox(centralwidget);
        checkBox_symbols->setObjectName(QString::fromUtf8("checkBox_symbols"));
        sizePolicy.setHeightForWidth(checkBox_symbols->sizePolicy().hasHeightForWidth());
        checkBox_symbols->setSizePolicy(sizePolicy);

        horizontalLayout_2->addWidget(checkBox_symbols);


        gridLayout->addLayout(horizontalLayout_2, 1, 0, 1, 1);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        label_empty = new QLabel(centralwidget);
        label_empty->setObjectName(QString::fromUtf8("label_empty"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(label_empty->sizePolicy().hasHeightForWidth());
        label_empty->setSizePolicy(sizePolicy2);

        horizontalLayout_7->addWidget(label_empty);

        pushButton_generate = new QPushButton(centralwidget);
        pushButton_generate->setObjectName(QString::fromUtf8("pushButton_generate"));
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::MinimumExpanding);
        sizePolicy3.setHorizontalStretch(1);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(pushButton_generate->sizePolicy().hasHeightForWidth());
        pushButton_generate->setSizePolicy(sizePolicy3);
        pushButton_generate->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_generate->setMouseTracking(false);
        pushButton_generate->setContextMenuPolicy(Qt::PreventContextMenu);
        pushButton_generate->setLayoutDirection(Qt::LeftToRight);
        pushButton_generate->setAutoFillBackground(true);

        horizontalLayout_7->addWidget(pushButton_generate);


        gridLayout->addLayout(horizontalLayout_7, 6, 0, 1, 1);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_upperCase = new QLabel(centralwidget);
        label_upperCase->setObjectName(QString::fromUtf8("label_upperCase"));
        sizePolicy.setHeightForWidth(label_upperCase->sizePolicy().hasHeightForWidth());
        label_upperCase->setSizePolicy(sizePolicy);

        horizontalLayout_5->addWidget(label_upperCase);

        checkBox_upperCase = new QCheckBox(centralwidget);
        checkBox_upperCase->setObjectName(QString::fromUtf8("checkBox_upperCase"));
        sizePolicy.setHeightForWidth(checkBox_upperCase->sizePolicy().hasHeightForWidth());
        checkBox_upperCase->setSizePolicy(sizePolicy);

        horizontalLayout_5->addWidget(checkBox_upperCase);


        gridLayout->addLayout(horizontalLayout_5, 4, 0, 1, 1);

        textEdit_list = new QTextEdit(centralwidget);
        textEdit_list->setObjectName(QString::fromUtf8("textEdit_list"));

        gridLayout->addWidget(textEdit_list, 8, 0, 1, 1);


        gridLayout_2->addLayout(gridLayout, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        label_lenght->setText(QApplication::translate("MainWindow", "Password Lenght :", nullptr));
        label_lowerCase->setText(QApplication::translate("MainWindow", "Include Lower Case :", nullptr));
        checkBox_lowerCase->setText(QApplication::translate("MainWindow", "(e.g. abcz)", nullptr));
        label_ambiguous->setText(QApplication::translate("MainWindow", "Exclude Ambiguous Characters :", nullptr));
        checkBox_ambiguous->setText(QApplication::translate("MainWindow", "(e.g. /(){[[]})", nullptr));
        label_password->setText(QApplication::translate("MainWindow", "Password :", nullptr));
        pushButto_copy->setText(QApplication::translate("MainWindow", "Copy", nullptr));
        pushButton->setText(QApplication::translate("MainWindow", "Paste", nullptr));
        label_numbers->setText(QApplication::translate("MainWindow", "Include Numbers :", nullptr));
        checkBox_numbers->setText(QApplication::translate("MainWindow", "(e.g. 123)", nullptr));
        label_symbols->setText(QApplication::translate("MainWindow", "Include Symbols :", nullptr));
        checkBox_symbols->setText(QApplication::translate("MainWindow", "(e.g. @#\302\276&)", nullptr));
        label_empty->setText(QString());
        pushButton_generate->setText(QApplication::translate("MainWindow", "Generate Password", nullptr));
        label_upperCase->setText(QApplication::translate("MainWindow", "Include Upper Case :", nullptr));
        checkBox_upperCase->setText(QApplication::translate("MainWindow", "(e.g. ABCZ)", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
