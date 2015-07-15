#ifndef GAMEWIDGET_H
#define GAMEWIDGET_H

#include <QWidget>
#include <QPainter>
#include <iostream>
#include <QLabel>
#include <QHBoxLayout>


class gameWidget : public QWidget
{
    Q_OBJECT
public:
    gameWidget(QWidget *parent, QSize tempSize);

signals:

public slots:

protected:
    void paintEvent(QPaintEvent *e);

protected slots:
    void increaseCount();

private:
    QPainter painter;
    QHBoxLayout *layout;

    int count;


};

#endif // GAMEWIDGET_H
