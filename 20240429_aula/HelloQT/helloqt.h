#ifndef HELLOQT_H
#define HELLOQT_H

#include <QtWidgets>

class HelloQT : public QWidget
{
    Q_OBJECT

public:
    HelloQT(const QString name, QWidget *parent = nullptr);
    ~HelloQT();

private:
    QLabel * label;
    QPushButton * button;
    QVBoxLayout * layout;

};
#endif // HELLOQT_H



