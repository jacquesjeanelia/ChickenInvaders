#ifndef GAMEOVER_H
#define GAMEOVER_H
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
#include <QMediaPlayer>

class gameover: public QGraphicsView
{
public:
    gameover();
};

#endif // GAMEOVER_H
