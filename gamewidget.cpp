#include "gamewidget.h"


gameWidget::gameWidget(QWidget *parent, QSize tempSize) :
    QWidget(parent), count(0)
{

    resize(tempSize);

    Button *face = new Button(QPixmap("/home/kyle/add.png"), this);
    
//    layout = new QHBoxLayout();
//    QLabel* label = new QLabel(this, 0);
//    label->setText("Hello, World!");
//    connect(label, SIGNAL(), this, SLOT(increaseCount()));

//    layout->addWidget(label);
//    setLayout(layout);
}

void
gameWidget::paintEvent(QPaintEvent *e) {

    QPainter painter(this);
    painter.drawEllipse(10,10,1000,1000);
}

void
gameWidget::increaseCount(){
    count++;
    std::cout << count << std::endl;
}
