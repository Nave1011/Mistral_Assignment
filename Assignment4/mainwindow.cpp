#include "mainwindow.h"
#include "ui_mainwindow.h"
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

}

MainWindow::~MainWindow()
{
    delete ui;

}
void MainWindow::on_pushButton_clicked()
{

    QString lname = ui->lnamei->text();
    QString email = ui->emaili->text();
    QString college = ui->collegei->text();

    if(lname=="")
    {
        ui->lnamei->setText("Enter your name");
    }
    if(email=="")
    {
        ui->emaili->setText("Enter your email");
    }
    if(college=="")
    {
        ui->collegei->setText("Enter your college name");
    }


}




void MainWindow::on_namei_inputRejected()
{

}

