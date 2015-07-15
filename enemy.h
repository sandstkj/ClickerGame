#ifndef ENEMY_H
#define ENEMY_H
#include <QPixmap>
#include <qstring>

class Enemy
{
public:
    Enemy(QString name, int health);
private:
    QString name;
    QPixmap image;

    int health;

protected:

};

#endif // ENEMY_H
