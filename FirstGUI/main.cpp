#include "mainwindow.h"
#include <QApplication>
#include <stack>
using namespace std;

int main(int argc, char *argv[])
{
    stack<int> s;
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();
}
