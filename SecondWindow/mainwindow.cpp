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
//    SecondDialog seconddialog;
//    seconddialog.setModal(true);
//    seconddialog.exec();
    secdialog = new SecondDialog(this);
    secdialog->show();
    // 이방법으로 메인 윈도우와 세컨다이얼로그를 같이 access 가능
}
