#ifndef HEALTH_H
#define HEALTH_H

#include <QGraphicsTextItem>

class Health: public QGraphicsTextItem{
public:
    Health(QGraphicsItem * parent = 0);
    void decrease();
    int health =3;


};
#endif // HEALTH_H
