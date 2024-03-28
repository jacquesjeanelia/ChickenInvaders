#include "gameover.h"

gameover::gameover() {

    this->setFixedSize(800,600);

    QGraphicsScene *scene = new QGraphicsScene();
    scene->setBackgroundBrush(QPixmap(":/over.png"));
    scene->setSceneRect(0,0,800,600);
    // *******  Create the Player ********

    this->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    this->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);

    this->setScene(scene);

}
