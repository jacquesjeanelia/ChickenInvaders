#include "player.h"
#include <QKeyEvent>
#include "bullet.h"
#include <QGraphicsScene>
#include <QGraphicsPixmapItem>
#include <QPixmap>
#include <QDebug>
#include "enemy.h"
#include "users.h"
Player::Player() {

}

void Player::keyPressEvent(QKeyEvent *event)
{
    QMediaPlayer *bulletplayer = new QMediaPlayer;
    QAudioOutput *bulletoutput = new QAudioOutput;

    bulletplayer->setAudioOutput(bulletoutput);
    bulletplayer->setSource(QUrl("qrc:/bullet.mp3"));
    bulletoutput->setVolume(40);



        // *******  Event Handling for the Player ********
    if(event->key()== Qt::Key_Left)
    {
        if(x()>0) // to prevent the player from getting out of the screen
        {
        setPos(x()-10,y());
        }
    }
    else if(event->key()== Qt::Key_Right)

    { if(x()+100<800) // to prevent the player from getting out of the screen
        setPos(x()+10,y());
    }
    else if(event->key()== Qt::Key_Space)
    {
        Bullet * bullet = new Bullet();
        bullet->setPos(x()+30,y());
        scene()->addItem(bullet);

        if(bulletplayer->playbackState() == QMediaPlayer::PlayingState)
        {
            bulletplayer->play();
        }
        else
        {
            bulletplayer->play();
        }

    }


}
 // CreateEnemy function used to create the eneimes
void Player::createEnemy()
{ Enemy* enemy = new Enemy();
  scene()->addItem(enemy);

}
