#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <QPixmap>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QPixmap pix("C:/Users/Jin/Documents/QT/LoginApp/login.png");
    // \를 / 로 바꿔야됨! 주의
    int w = ui->label_pic->width();
    int h = ui->label_pic->height();
    ui->label_pic->setPixmap(pix.scaled(w,h,Qt::KeepAspectRatio));
    ui->statusbar->addPermanentWidget(ui->label_3, 1);
    ui->statusbar->addPermanentWidget(ui->progressBar, 1);
    // 1:1 비율로 하단에 permanent bar 생성
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_Login_clicked()
{
    QString username = ui->lineEdit_username->text();
    QString password = ui->lineEdit_password->text();

    if(username == "test" && password=="test") {
        //QMessageBox::information(this, "Login", "Username and password is correct");
        //hide();
        //secDialog = new SecDialog(this);
        //secDialog->show();
        ui->statusbar->showMessage("Username and password is correct", 5000);
        // status bar에 해당 문구 출력후 5초동안 지속
        ui->label_3->setText("Username and password is correct");
    }

    else {
        //QMessageBox::warning(this, "Login", "Username and password is not correct");
        ui->statusbar->showMessage("Username and password is not correct", 5000);
        ui->label_3->setText("Username and password is not correct");
    }

}
