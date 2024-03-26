#include "info.h"
#include <QPixmap>
#include <QApplication>
#include <QGraphicsTextItem>
#include <QGraphicsPixmapItem>
#include <QGraphicsRectItem>
#include <QGraphicsScene>
#include <QGraphicsView>
#include "player.h"
#include <QTimer>
#include <QDebug>
#include <QBrush>
#include "score.h"
#include "health.h"
#include "text.h"
#include "users.h"


info::info() {

    this->setFixedSize(800,600);

    QGraphicsScene *scene = new QGraphicsScene();
    scene->setSceneRect(0,0,800,600);
    // *******  Create the Player ********

    this->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    this->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    Player * player = new Player();
    // *******  Setting the foucs to the Player ********

    player->setFlag(QGraphicsItem::ItemIsFocusable);
    player->setFocus();
    // *******  Adjust the location of the Player (middle of the screen) ********

    player->setPixmap(QPixmap(":/new/prefix1/ship.png"));
    player->setPos(this->width()/2, this->height()-100);
    scene->addItem(player);

    //creating score


    score = new Score;
    health = new Health;

    score->setPos(0,0);
    scene->addItem(score);
    //creating health

    health->setPos(health->x(), health->y()+25);
    scene->addItem(health);

    // *******   Assign scene to the view   ***************

    //this->setScene(scene);
    //view->show();
    // *******  Create the Enemies automatically ********
    QTimer * time = new QTimer();
    QObject::connect(time, SIGNAL(timeout()),player,SLOT(createEnemy()));
    time->start(2000);


    // *******   Assign scene to the view   ***************

    this->setScene(scene);
    //this->show();
}
