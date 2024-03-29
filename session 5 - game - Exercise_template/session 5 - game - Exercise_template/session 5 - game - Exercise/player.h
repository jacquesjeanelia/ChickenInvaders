#ifndef PLAYER_H
#define PLAYER_H
#include <QGraphicsItem>
#include <QObject>
#include <QGraphicsPixmapItem>
#include <QPixmap>
#include <QtMultimedia>


class Player: public QObject, public QGraphicsPixmapItem
{
    Q_OBJECT
public:
    Player();
public:
    void keyPressEvent(QKeyEvent * event);
public slots:
    void createEnemy();
private:
    QMediaPlayer *bulletsound;

};

#endif // PLAYER_H
