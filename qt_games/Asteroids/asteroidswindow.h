#ifndef ASTEROIDSWINDOW_H
#define ASTEROIDSWINDOW_H

#include <QWidget>
#include <QGraphicsScene>
#include <QGraphicsView>
#include <QtWidgets>
#include "ball.h"

class AsteroidsWindow : public QWidget
{
    Q_OBJECT

public:
    AsteroidsWindow(QWidget *parent = nullptr);
    ~AsteroidsWindow();

private:
    QGraphicsScene * _scene;
    QGraphicsView  * _view;

    Ball           * _ball;

    QTimer         * _timer;

    QVBoxLayout    * _layout;

};
#endif // ASTEROIDSWINDOW_H
