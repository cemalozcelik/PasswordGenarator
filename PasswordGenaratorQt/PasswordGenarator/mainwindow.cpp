#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <iostream>


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setPassword("");
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::setPassword(std::string p)
{
    password = p;
}

const std::string MainWindow::getPassword()
{
    return password;
}


void MainWindow::on_pushButton_generate_clicked()
{   setPassword("");
    std::string charSet(" ");
    std::string s1 = "abcdefghijklmnopqrstuvxyz";
    int lenght;
    lenght = ui->lineEdit->text().toInt();

    if(ui->checkBox_numbers->isChecked()){
        charSet += "0123456";
    }
    if(ui->checkBox_symbols->isChecked()){
        charSet += "£#$%&@é";
    }
    if(ui->checkBox_upperCase->isChecked()){
        std::transform(s1.begin(), s1.end(), s1.begin(), ::toupper);
        charSet += s1;
    }
    if(ui->checkBox_lowerCase->isChecked()){
        std::transform(s1.begin(), s1.end(), s1.begin(), ::tolower);
        charSet += s1;
    }
    if(ui->checkBox_ambiguous->isChecked()){
        charSet += "!'^+/()=?>{[]}\|-_.,+";
    }

    //QStringList strings;
    //strings << "line one" << "line two";
    //yourTextEdit->setText(strings.join("\n"));

    if (charSet != "") {
        for (int i = 0; i<lenght ; i++) {
            password += charSet.at(rand()%(int)charSet.length());
        }
        ui->textEdit_password->setPlainText(password.c_str());
    }
    setPassword(password);
}


void MainWindow::on_pushButto_copy_clicked()
{
    std::string copied = "";
    copied = getPassword().c_str();
}

void MainWindow::on_pushButton_clicked()
{
    std::string pass;
    if(pass != getPassword().c_str())  ui->textEdit_password->setPlainText(QString("Please click on generate..."));
    pass = getPassword();
    ui->textEdit_list->append(getPassword().c_str());
}

