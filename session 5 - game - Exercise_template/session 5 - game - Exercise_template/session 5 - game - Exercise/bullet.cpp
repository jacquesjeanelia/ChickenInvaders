
#include "bullet.h"
#include <QGraphicsTextItem>
#include <QGraphicsScene>
#include <QGraphicsPixmapItem>
#include <QPixmap>
#include <QTimer>
#include <QList>
#include <enemy.h>
#include <player.h>
#include <score.h>
#include "health.h"
#include "users.h"
#include "info.h"
#include "gameover.h"
#include <QMediaPlayer>


extern info *i;
extern gameover *o;

Bullet::Bullet():QObject(), QGraphicsPixmapItem(){

        // *******  Setting the bullets' size ********
    //setRect(0,0,10,50);
        QPixmap bullet(":/new/prefix1/red_laser.png");
    setPixmap(bullet);

        // *******  Generating the Bullets automatically ********
    QTimer * timer = new QTimer();
    connect(timer, SIGNAL(timeout()),this,SLOT (move()));
    timer->start(50);





}


// Move function is used to 1-  move the bullet upwards
                         // 2- Handle the collision of the bullets with enemies
void Bullet:: move()
{
        // *******  Getting the colliding items with the Bullet ********


    QList<QGraphicsItem*>colliding_items = collidingItems();
        for (int x = 0, n = colliding_items.size();x<n;x++)
    {
        if(typeid(*(colliding_items[x])) == typeid(Enemy))
            {

                scene()->removeItem(colliding_items[x]);
                scene()->removeItem(this);

                delete colliding_items[x];

                i-> score->increase();
                delete this;
                return;
            }
    }
        // *******  Moving the bullets upward ********
        setPos(x(),y()-10);
        if(pos().y()+50<0)
        {
            scene()->removeItem(this);
            delete this;
        }

}
