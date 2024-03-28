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
#include "info.h"
#include "gameover.h"
#include <QMediaPlayer>





info *i;
gameover *o;

int main(int argc, char *argv[])
{

    QApplication a (argc,argv);


    i = new info;
    i->show();
    o = new gameover;

     return a.exec();
}
