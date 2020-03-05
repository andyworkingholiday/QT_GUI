#include <QApplication>
#include <QLabel>
int main(int argc, char* argv[]) {
    QApplication app(argc, argv);
    QLabel *label = new QLabel("Hello QT");
    label->setWindowTitle("MY APP");
    //exec 파일 이름을 바꿀때 사용
    label->resize(400,400);
    // size 조정
    label->show();
    //show를 하지 않으면 출력 안되는것 같음
    return app.exec();
}
