#ifndef GAME_H
#define GAME_H
#include <QGraphicsView>
#include "player.h"
#include <QTimer>
#include <QDebug>
#include <QBrush>
#include "score.h"
#include "health.h"

class game:public QGraphicsView
{
public:
    game();
};

#endif // GAME_H
