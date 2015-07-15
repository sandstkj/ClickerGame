#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <iostream>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent)/*, count(0)*/
{
    resize(500,500);
    move(1000,1000);

    //generateButtons();
    //    connect(increaseCountButton, SIGNAL(triggered()), this, SLOT(increaseCount()));



    game = new gameWidget(this, size());
    game->lower();
}

MainWindow::~MainWindow()
{

}

