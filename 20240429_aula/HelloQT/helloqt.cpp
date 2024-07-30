#include "helloqt.h"

HelloQT::HelloQT(const QString name, QWidget *parent)
    : QWidget(parent)
{
    layout = new QVBoxLayout;

    label = new QLabel(name);
    label->setAlignment(Qt::AlignCenter);
    layout->addWidget(label);

    button = new QPushButton("Quit");
    QObject::connect(button, SIGNAL(clicked()),
                     this, SLOT(close()));

    layout->addWidget(button);

    setLayout(layout);

}

HelloQT::~HelloQT()
{
}

