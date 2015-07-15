#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

#include <gamewidget.h>

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

protected slots:
    //void increaseCount();

private:

    //QAction* increaseCountButton;
    gameWidget *game;

    int count;

    //void generateButtons();
};

#endif // MAINWINDOW_H
