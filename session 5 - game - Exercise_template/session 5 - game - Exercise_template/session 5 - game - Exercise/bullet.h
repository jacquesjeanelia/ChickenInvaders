#ifndef BULLET_H
#define BULLET_H
#include <QGraphicsItem>
#include <QGraphicsTextItem>
#include <QObject>
#include <QGraphicsPixmapItem>
#include <QPixmap>
#include <score.h>
#include <QMediaPlayer>
class Bullet: public QObject, public QGraphicsPixmapItem
{


    Q_OBJECT
public:
    Bullet();
public slots:
    void move();
private:

};

#endif // BULLET_H
