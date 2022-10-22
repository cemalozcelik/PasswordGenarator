#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <string>
QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void setPassword(std::string);
    const std::string getPassword(void);

private slots:
    void on_pushButton_generate_clicked();


    void on_pushButto_copy_clicked();

    void on_pushButton_clicked();

private:
    Ui::MainWindow *ui;
    std::string password;
};
#endif // MAINWINDOW_H
