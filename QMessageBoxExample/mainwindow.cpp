#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>

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

// void about 창 하나 더생김
// viud aboutQt ㄹㅇ루 큐트 프로그램에 대한 정보가 생김
// StandardButton   Critical 빨간창
// StandardButton   information 정보창
// StandardButton   question 물음표창
// StandardButton   warning 주의창


void MainWindow::on_pushButton_clicked()
{
    QMessageBox::about(this, "Warning", "Showing Message!!");
}

void MainWindow::on_pushButton_2_clicked()
{
    QMessageBox::aboutQt(this, "QT is...");
}

void MainWindow::on_pushButton_3_clicked()
{
    QMessageBox::critical(this, "Critical", "This system will be critical!!");

}

void MainWindow::on_pushButton_4_clicked()
{
    QMessageBox::information(this, "Info", "This system is...");
}

void MainWindow::on_pushButton_5_clicked()
{
    QMessageBox::question(this, "help?", "have a question...?",
                          QMessageBox::Yes | QMessageBox::No);
}

void MainWindow::on_pushButton_6_clicked()
{
    QMessageBox::warning(this, "Warning", "Don't do that!");
}
