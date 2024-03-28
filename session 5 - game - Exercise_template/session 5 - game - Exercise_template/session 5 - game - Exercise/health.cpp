#include "health.h"
#include "QFont"
#include "main.cpp"
#include "users.h"


Health::Health(QGraphicsItem *parent):QGraphicsTextItem(parent){

    setPlainText  (QString ("health: ") + QString::number(health));
    setDefaultTextColor(Qt::red);
    setFont(QFont("times", 16));
}
void Health::decrease(){
    health--;
    setPlainText  (QString ("Health: ") + QString::number(health));
}


