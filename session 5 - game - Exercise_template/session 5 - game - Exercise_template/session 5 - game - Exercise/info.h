#ifndef INFO_H
#define INFO_H
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


class info:public QGraphicsView
{
public:
    info();
    Score * score;
    Health *health;
};

#endif // INFO_H
