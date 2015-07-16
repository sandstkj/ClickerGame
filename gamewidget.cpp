#include "gamewidget.h"

GameWidget::GameWidget(QWidget *parent, QSize tempSize) :
    QWidget(parent), state(0), count(0)
{

    resize(tempSize);

    //Connecting the widget to mouse events
    connect(this, SIGNAL(release()), this, SLOT(increaseCount()));

    //Creating enemy "Hostile"
    hostile = new Enemy(this, "Bob", "/home/kyle/Pictures/Memes/JoeHead.png", 100);
    hostile->lower();

    //Sorting layout for health, name, etc.
    layout = new QHBoxLayout();
    label = new QLabel(this, 0);
    updateHealth();
    label->setText("Health: 100");
    //layout->addWidget(hostile);
    setLayout(layout);
}

void
GameWidget::paintEvent(QPaintEvent *e) {
    QPainter painter(this);
    painter.setPen(Qt::green);
    //painter.drawEllipse(10,10,1000,1000);
}

void
GameWidget::increaseCount(){
    count++;
    std::cout << count << std::endl;
    hostile->damage(1);
    label->setText("Health: " + (QString)(hostile->getHealth()));
}

void
GameWidget::mousePressEvent(QMouseEvent* e)
{
         state = 1;
         repaint();
         emit pressed();
}

void
GameWidget::mouseReleaseEvent(QMouseEvent* e)
{
         state = 0;
         repaint();
         emit release();
         emit clicked();
}

//void
//GameWidget::release(){


//}

//void
//GameWidget::clicked(){


//}
