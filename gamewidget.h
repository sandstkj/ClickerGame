#ifndef GAMEWIDGET_H
#define GAMEWIDGET_H

#include <QWidget>
#include <QPainter>
#include <iostream>
#include <QLabel>
#include <QHBoxLayout>

#include "enemy.h"

class GameWidget : public QWidget
{
    Q_OBJECT
public:
    GameWidget(QWidget *parent, QSize tempSize);

signals:
    void clicked();
    void release();
    void pressed();

public slots:

protected:
    void paintEvent(QPaintEvent *e);
    void mousePressEvent(QMouseEvent*);
    void mouseReleaseEvent(QMouseEvent*);

protected slots:
    void increaseCount();

private:
    QHBoxLayout *layout;
    Enemy *hostile;
    QLabel* label;

    int count;
    int state;

};

#endif // GAMEWIDGET_H
