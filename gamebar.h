#ifndef GAMEBAR_H
#define GAMEBAR_H
#include <QGraphicsTextItem>
#include <QFrame>
#include "PlaySquare.h"

class GameBar: public QGraphicsTextItem
{
private:
    int Health;
    int Magic;
    QGraphicsTextItem *Heal;
    QGraphicsTextItem *Magi;
public:
    GameBar(QGraphicsItem *parent=0);
    void decreaseHealth();
    void increaseHealth();
    void setHealth(int health);
    void setMagic(int magic);
    int getHealth();
    int getMagic();
};

#endif // GAMEBAR_H
