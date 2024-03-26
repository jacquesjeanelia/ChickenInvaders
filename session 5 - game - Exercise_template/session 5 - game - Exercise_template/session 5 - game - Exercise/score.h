#ifndef SCORE_H
#define SCORE_H
#include <QGraphicsTextItem>
#include <QGraphicsTextItem>
#include <QGraphicsScene>
#include <QGraphicsPixmapItem>
#include <QPixmap>
#include <QTimer>
#include <QList>
#include <enemy.h>
#include <player.h>

class Score: public QGraphicsTextItem{
public:
    Score(QGraphicsItem * parent = 0);
    void increase();
    int getScore();
    int score = 0 ;


};

#endif // SCORE_H
