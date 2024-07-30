#include "ball.h"
#include <QDebug>
#include <QKeyEvent>

Ball::Ball(qreal x, qreal y,
           qreal width, qreal height,
           QGraphicsItem *parent): QGraphicsEllipseItem(x,y,width,height,parent)
{
    qDebug() << "Ball constructed!";
    acceleration.setX(0);
    acceleration.setY(0);
}

void Ball::advance(int phase)
{
    if(phase == 0)
        return;

    position.setX(pos().x());
    position.setY(pos().y());

    position += velocity;
    velocity += acceleration;

    if(position.y() > 300)
        position.setY(-300);

   setPos(position.toPointF());
}

void Ball::keyPressEvent(QKeyEvent *event)
{
    qDebug() << "Key Press Event in Ball";

    if( event->key() == Qt::Key_Left){
        velocity.setX(velocity.x() - 0.10);
    }
    if( event->key() == Qt::Key_Right){
        velocity.setX(velocity.x() + 0.10);
    }
    if( event->key() == Qt::Key_Up){
        velocity.setY(velocity.y() - 0.10);
    }
    if( event->key() == Qt::Key_Down){
        velocity.setY(velocity.y() + 0.10);
    }
    if( event->key() == Qt::Key_R){
        velocity.setX(0);
        velocity.setY(0);
    }

}
