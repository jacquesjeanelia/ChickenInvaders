#include "enemy.h"
#include <QGraphicsScene>
#include <QGraphicsPixmapItem>
#include <QPixmap>
#include <stdlib.h> // rand() -> to generate really large integer
#include <QTimer>
#include <QDebug>

Enemy::Enemy() {
        // *******  Setting the size of the enemy ********

    setPixmap(QPixmap(":/new/prefix1/chicken2.png"));
    //chicken.scaled(100,100);


    //setRect(0,0,100,100);

        // *******  Setting the postion of the enemy within the view dimensions ********
    int random_number = rand()%700;
    setPos(random_number,0);

        // *******  Moving the enemies downwards automatically every 50 milli second ********
    QTimer * timer = new QTimer();
    connect(timer, SIGNAL(timeout()),this,SLOT (move()));
    timer->start(50);

}
// Function move: move the enemy downwards untill the end of the scene then remove it and delete it
void Enemy:: move()
{
    setPos(x(),y()+5);
        if(y()+100>800)
    {
        scene()->removeItem(this);
            delete this;
    }
}
