#ifndef ENEMY_H
#define ENEMY_H

#include <QWidget>
#include <QPixmap>
#include <QString>
#include <QPainter>

class Enemy : public QWidget
{
    //Q_OBJECT

public:
    Enemy(QWidget *parent, QString name, QString enemyImage, int health);

    void damage(int hit);

    int getHealth();

private:
    QString name;
    QString dir;
    QPixmap *image;
    QPainter *painter;

    int health;

protected:
    void paintEvent(QPaintEvent *e);

};

#endif // ENEMY_H
