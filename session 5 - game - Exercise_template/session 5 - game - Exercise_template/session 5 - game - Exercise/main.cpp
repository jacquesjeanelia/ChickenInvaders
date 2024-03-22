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
#include "health.h""


int main(int argc, char *argv[])
{
    QApplication a (argc,argv);
    QGraphicsView *view = new QGraphicsView();
    view->setFixedSize(800,600);
    view->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    view->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);

    // ******* Create the Scene ********

    QGraphicsScene *scene = new QGraphicsScene();
    scene->setSceneRect(0,0,800,600);
    // *******  Create the Player ********

    Player * player = new Player();
    // *******  Setting the foucs to the Player ********

    player->setFlag(QGraphicsItem::ItemIsFocusable);
    player->setFocus();
    // *******  Adjust the location of the Player (middle of the screen) ********

    player->setPixmap(QPixmap(":/new/prefix1/ship.png"));
    player->setPos(view->width()/2, view->height()-100);
    scene->addItem(player);

    //creating score
    Score * score_main = new Score;
    scene->addItem(score_main);
    //creating health
    Health * health_main = new Health;
    health_main->setPos(health_main->x(), health_main->y()+25);
    scene->addItem(health_main);

    // *******   Assign scene to the view   ***************

    view->setScene(scene);
    view->show();
    // *******  Create the Enemies automatically ********
    QTimer * time = new QTimer();
    QObject::connect(time, SIGNAL(timeout()),player,SLOT(createEnemy()));
    time->start(2000);


    return a.exec();
}
