#include "asteroidswindow.h"

AsteroidsWindow::AsteroidsWindow(QWidget *parent)
    : QWidget(parent)
{
    _scene = new QGraphicsScene();
    _scene->setBackgroundBrush(Qt::lightGray);
    //_scene->setSceneRect(-300,-300,600,600);

    QGraphicsLineItem * x_axis = _scene->addLine(-300, 0, 300, 0);
    x_axis->setZValue(10);
    QGraphicsLineItem * y_axis = _scene->addLine(0, -300, 0, 300);
    y_axis->setZValue(10);
    QGraphicsTextItem * minus_x = _scene->addText("-300");
    minus_x->setZValue(10);
    minus_x->setPos(QPointF(-300,0));
    QGraphicsTextItem * more_x = _scene->addText("300");
    more_x->setZValue(10);
    more_x->setPos(QPointF(250,0));

    //QGraphicsEllipseItem *ball = _scene->addEllipse(QRectF(-50, -50, 100, 100));
    //ball->setBrush(Qt::blue);
    _ball = new Ball(-50,-50,100,100);
    _ball->setBrush(Qt::blue);
    _scene->addItem(_ball);
    QPen mPen;
    mPen.setBrush(Qt::red);
    mPen.setWidth(3);
    _ball->setPen(mPen);

    _ball->setScale(2);

    _ball->setFlag(QGraphicsItem::ItemIsMovable);
    _ball->setFlag(QGraphicsItem::ItemIsFocusable);


    this->width();
    this->height();

    QGraphicsRectItem * rect = new QGraphicsRectItem(-300,-300,600,600);
    _scene->addItem(rect);



    _view = new QGraphicsView();
    _view->setScene(_scene);

    _layout = new QVBoxLayout();
    _layout->addWidget(_view);
    this->setLayout(_layout);
    //setFixedSize(sizeHint());
    setWindowTitle("Asteroids");

    _timer = new QTimer;
    QObject::connect(_timer, SIGNAL(timeout()), _scene, SLOT(advance()));
    _timer->start(1000 / 24);
}

AsteroidsWindow::~AsteroidsWindow() {}
