#include "gameover.h"
#include <QMediaPlayer>
#include <QtMultimedia>

gameover::gameover() {

    this->setFixedSize(800,600);

    QGraphicsScene *scene = new QGraphicsScene();
    scene->setBackgroundBrush(QPixmap(":/over.png"));
    scene->setSceneRect(0,0,800,600);
    // *******  Create the Player ********

    this->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    this->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);

    music = new QMediaPlayer;
    QAudioOutput *output = new QAudioOutput;

    music->setAudioOutput(output);
    music->setSource(QUrl("qrc:/wah-wah-sad-trombone-6347.mp3"));
    output->setVolume(30);


    this->setScene(scene);


}
