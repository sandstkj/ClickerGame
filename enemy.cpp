#include "enemy.h"
#include <iostream>

Enemy::Enemy(QWidget *parent, QString name, QString enemyImage, int health) :
    QWidget(parent)
{
    painter = new QPainter();
    dir = enemyImage;
    this->name = name;
    image = new QPixmap(enemyImage);
    this->health = health;
    resize(300,300);
}

void
Enemy::paintEvent(QPaintEvent *e) {

    QPainter painter(this);
    painter.drawPixmap(0, 0, image->width(), image->height(), dir);
    std::cout << "Health: " << health << std::endl;
}

void
Enemy::damage(int hit){
    health -= hit;
}

int
Enemy::getHealth(){
    return health;
}
