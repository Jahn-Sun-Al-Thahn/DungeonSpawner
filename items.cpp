#include "items.h"
#include "monster.h"
#include "PlaySquare.h"
#include <QRandomGenerator>
#include <QtDebug>



Items::Items():QObject(), QGraphicsRectItem()
{

    //Creates Random Number generator to get random calculations for item stats.
    QRandomGenerator *Calcs = new QRandomGenerator;
    int rar;
    vector<int> values;
    int teep;
    int random = Calcs->global()->bounded(1,30);
    int LRan = Calcs->global()->bounded(0,600);

    //Setting the position in a random spot.
    setRect(LRan,LRan,15,15);

    //Draws random number for weapon rarity.
    setName("Weapon");
    for(int i = 0; i < random; i++){
        rar = Calcs->global()->bounded(0, 9);
    };
    switch(rar){
        case 0:
            this->setItemType("D-Sword");
        case 1:
            this->setItemType("Axe");
            break;
        case 2:
            this->setItemType("Dual Daggers");
            break;
        case 3:
            this->setItemType("Long Bow");
            break;
        case 4:
            this->setItemType("Staff");
            break;
        case 5:
            this->setItemType("Tonfa");
            break;
        case 6:
            this->setItemType("Spear");
            break;
        case 7:
            this->setItemType("Halberd");
            break;
        case 8:
            this->setItemType("Rapier");
            break;
        case 9:
            this->setItemType("Giant Hammer");
            break;
    };
    setRarity(rar);



    //Draws random number or Type.
    for(int i = 0; i < random; i++){
        teep = Calcs->global()->bounded(0, 4);
    };
    switch(teep){
        case 0:
            this->setItemType(ItemType + " Dark Matter");
            break;
        case 1:
            this->setItemType(ItemType +" Void");
            break;
        case 2:
            this->setItemType(ItemType + " Earth");
            break;
        case 3:
            this->setItemType(ItemType + " Acid");
            break;
        case 4:
            this->setItemType(ItemType + " Fire");
            break;
    };

    //Putting random Values to the Items "Stats".
    setAtkEnhance(Calcs->global()->bounded(25, 100));
    setDefEnhance(Calcs->global()->bounded(25, 100));
    setMagicEnhance(Calcs->global()->bounded(25, 100));
    setHealthEnhance(Calcs->global()->bounded(25, 100));
    setRecovHealth(Calcs->global()->bounded(25, 100));
    setRecovMagic(Calcs->global()->bounded(25, 100));
    setCost(Calcs->global()->bounded(200, 1000));

    qDebug() << "AttackEnhance: " << getAtkEnhance();
     delete Calcs;

}
string Items::getItemType() const
{
    return ItemType;
}

void Items::setItemType(const string value)
{
    ItemType = value;
}

string Items::getName() const
{
    return Name;
}

void Items::setName(const string value)
{
    Name = value;
}

int Items::getCost() const
{
    return Cost;
}

void Items::setCost(int value)
{
    Cost = value;
}

int Items::getMagicEnhance() const
{
    return MagicEnhance;
}

void Items::setMagicEnhance(int value)
{
    MagicEnhance = value;
}

int Items::getAtkEnhance() const
{
    return AtkEnhance;
}

void Items::setAtkEnhance(int value)
{
    AtkEnhance = value;
}

int Items::getDefEnhance() const
{
    return DefEnhance;
}

void Items::setDefEnhance(int value)
{
    DefEnhance = value;
}

int Items::getHealthEnhance() const
{
    return HealthEnhance;
}

void Items::setHealthEnhance(int value)
{
    HealthEnhance = value;
}

int Items::getRecovHealth() const
{
    return RecovHealth;
}

void Items::setRecovHealth(int value)
{
    RecovHealth = value;
}

int Items::getRecovMagic() const
{
    return RecovMagic;
}

void Items::setRecovMagic(int value)
{
    RecovMagic = value;
}

int Items::getRarity() const
{
    return Rarity;
}

void Items::setRarity(int value)
{
    Rarity = value;
}




