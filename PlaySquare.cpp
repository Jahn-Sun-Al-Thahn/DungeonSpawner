#include <QGraphicsScene>
#include "PlaySquare.h"
#include <QKeyEvent>
#include "Weapon.h"
#include "monster.h"
#include "items.h"
#include <QTimer>

#include <QtDebug>

string PlaySquare::getName()
{
    return Name;
}

void PlaySquare::setName( string value)
{
    Name = value;
}

string PlaySquare::getJobClass()
{
    return JobClass;
}

void PlaySquare::setJobClass( string value)
{
    JobClass = value;
}

int PlaySquare::getHealth() const
{
    return Health;
}

void PlaySquare::setHealth(int value)
{
    Health = value;
}

int PlaySquare::getMagic() const
{
    return Magic;
}

void PlaySquare::setMagic(int value)
{
    Magic = value;
}

int PlaySquare::getAttack() const
{
    return Attack;
}

void PlaySquare::setAttack(int value)
{
    Attack = value;
}

int PlaySquare::getDefense() const
{
    return Defense;
}

void PlaySquare::setDefense(int value)
{
    Defense = value;
}

double PlaySquare::getCritical() const
{
    return Critical;
}

void PlaySquare::setCritical(double value)
{
    Critical = value;
}

int PlaySquare::getFace()
{
    return Face;
}

void PlaySquare::setFace(int value)
{
    Face = value;
}

PlaySquare::PlaySquare()
{
    setName("Unknown");
    setJobClass("Vagrant");
    setFace(1);
}

void PlaySquare::keyPressEvent(QKeyEvent *event)
{

    switch(event->key()){
    case Qt::Key_Left:
        if(pos().x() > 0){
            setPos(x()-5,y());
            this->setFace(3);
            qDebug() << getFace() << "West";
        };
        break;
    case Qt::Key_Right:
        if(pos().x() + 10 < 795){
            setPos(x()+5,y());
            this->setFace(1);
            qDebug() << getFace()<< "East";
        };
        break;
    case Qt::Key_Up:
       if(pos().y() > 0){
            setPos(x(),y()-5);
            this->setFace(0);
            qDebug() << getFace()<<"North";
        };
        break;
    case Qt::Key_Down:
        if((pos().y() + 15) < 600 ){
            setPos(x(),y()+5);
            this->setFace(2);
            qDebug() << getFace()<< "South";
        };
        break;
    case Qt::Key_Space:
      //Create the Weapon
      Weapon *Arrow = new Weapon(Face);
      scene()->addItem(Arrow);
      Arrow->setPos(x()+5,y());
      qDebug() << Arrow->pos()<< "Made A Arrow Swoosh" << "Face: " << this->getFace();
      break;
  };

}

void PlaySquare::Incoming()
{
   //Creates Enemys for Testing purposes.
    Monster * Enemy = new Monster();
    scene()->addItem(Enemy);
}

int PlaySquare::Armor::getHead() const
{
    return Head;
}

void PlaySquare::Armor::setHead(int value)
{
    Head = value;
}

int PlaySquare::Armor::getChest() const
{
    return Chest;
}

void PlaySquare::Armor::setChest(int value)
{
    Chest = value;
}

int PlaySquare::Armor::getArms() const
{
    return Arms;
}

void PlaySquare::Armor::setArms(int value)
{
    Arms = value;
}

int PlaySquare::Armor::getHands() const
{
    return Hands;
}

void PlaySquare::Armor::setHands(int value)
{
    Hands = value;
}

int PlaySquare::Armor::getLegs() const
{
    return Legs;
}

void PlaySquare::Armor::setLegs(int value)
{
    Legs = value;
}

int PlaySquare::Armor::getFeet() const
{
    return Feet;
}

void PlaySquare::Armor::setFeet(int value)
{
    Feet = value;
}
