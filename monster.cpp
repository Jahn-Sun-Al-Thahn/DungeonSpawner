#include "monster.h"
#include "Dungeonspawner.h"
#include <QTimer>
#include <QGraphicsScene>
#include <QList>
#include "stdlib.h"
#include "time.h"
#include <QDebug>

#include "PlaySquare.h"

using namespace std;

Monster::Monster(): QObject(), QGraphicsRectItem()
{
//Spawn Point Generator for Testing
    srand(time(NULL));
    int randX = rand() % 750;
    int randY = rand() % 750;
    setRect(randX,randY,10,15);

//Creates a Monster using the constructor to be within the levels boundary.
    QTimer * timer = new QTimer(this);
    connect(timer,SIGNAL(timeout()), this, SLOT(move()));
    timer->start(50);

//Changes the Monsters Direction at an interval.
    QTimer *Direction = new QTimer(this);
    connect(Direction,SIGNAL(timeout()), this, SLOT(Direction()));
    Direction->setInterval(2000);
    Direction->start();

}

void Monster::setName(string name)
{
    Name = name;
}

void Monster::setSpecies(string species)
{
    Species = species;
}

void Monster::setHealth(int health)
{
    Health = health;
}

void Monster::setMagic(int magic)
{
    Magic = magic;
}

void Monster::setAttack(int attack)
{
    Attack = attack;
}

void Monster::setDefense(int defense)
{
    Defense = defense;
}

void Monster::setCrit(double crit)
{
    Critical = crit;
}

string Monster::getName()
{
    return Name;
}

string Monster::getSpecies()
{
    return Species;
}

int Monster::getHealth()
{
    return Health;
}

int Monster::getMagic()
{
    return Magic;
}

int Monster::getAttack()
{
    return Attack;
}

int Monster::getDefense()
{
    return Defense;
}

double Monster::getCrit()
{
    return Critical;
}

int Monster::Direction()
{
    int choice = rand() % 5;
    int X = choice + 1;
    int Y = choice;
    if(choice == 0){
        return X;
    } else {
        return Y;
    }
}
void Monster::move()
{
    //Moves the monster in a single direction.
   // srand(time(NULL));
    int rX = Direction();
   // if(pos().x() > 0 || (pos().x() + 10) < 795 || pos().y() > 0 || (pos().y() + 15) < 600){
    switch(rX){
        case 0:
            setPos(x(),y()+5);
            break;
        case 1:
            setPos(x(),y()-5);
            break;
        case 2:
            setPos(x()+5,y());
            break;
        case 3:
            setPos(x()-5,y());
            break;
        case 4:
            setPos(x(),y()+5);
            break;
        default:
            setPos(x()+5,y());
            break;

    };
  //  };
}


