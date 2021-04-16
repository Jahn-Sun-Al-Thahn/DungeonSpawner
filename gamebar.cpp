#include "gamebar.h"
#include "PlaySquare.h"
#include "monster.h"
#include <QFont>
#include <QDebug>

GameBar::GameBar(QGraphicsItem *parent): QGraphicsTextItem(parent)
{
    setPos(0,0);
    setHealth(200);
    setMagic(200);
    //Will be something like this ->  setPlainText("Health: " + QString::number(PlaySquare::getHealth()));
    Heal = new QGraphicsTextItem;
    Magi = new QGraphicsTextItem;

    Heal->setPlainText("Health: " + QString::number(Health));
    Heal->setDefaultTextColor(Qt::red);
    Heal->setFont(QFont("Arial",12));
    Heal->setPos(5,0);
    qDebug() << Heal->pos();

    Magi->setPlainText("Magic: " + QString::number(Magic));
    Magi->setDefaultTextColor(Qt::blue);
    Magi->setFont(QFont("Arial",12));
    Magi->setPos((Heal->x()+50),(Heal->y()));
    qDebug() << Magi->pos();



};

void GameBar::decreaseHealth()
{
     // Will be something like this ->(Monster::getAttack() / 2) - Health;
    Health = 25 - Health;
};

void GameBar::increaseHealth()
{
    Health = 25 + Health;
}

void GameBar::setHealth(int health)
{
    Health = health;
}

void GameBar::setMagic(int magic)
{
    Magic = magic;
};

int GameBar::getHealth()
{
    return Health;
};

int GameBar::getMagic()
{
    return Magic;
};
