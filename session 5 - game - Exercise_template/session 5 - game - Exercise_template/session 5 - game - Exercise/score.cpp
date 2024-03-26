#include "score.h"
#include "QFont"
#include "users.h"
Score::Score(QGraphicsItem *parent):QGraphicsTextItem(parent){

    setPlainText  (QString ("score: ") + QString::number(score));
    setDefaultTextColor(Qt::blue);
    setFont(QFont("times", 16));
}
void Score::increase(){
    score++;
    setPlainText  (QString ("score: ") + QString::number(score));
}

