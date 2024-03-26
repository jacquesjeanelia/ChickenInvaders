#ifndef TEXT_H
#define TEXT_H
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

class text
{
public:
    text();
    Score *score = new Score;
    Health *health = new Health;
};

#endif // TEXT_H
