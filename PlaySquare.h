#ifndef PLAYSQUARE_H
#define PLAYSQUARE_H

#include <QGraphicsRectItem>
#include <QObject>
#include "string.h"
using namespace std;

class PlaySquare: public QObject, public QGraphicsRectItem{
    Q_OBJECT

private:
    string Name;
    string JobClass;
    int Health;
    int Magic;
    int Attack;
    int Defense;
    double Critical;
    int Face;
    struct Armor {
        int Head;
        int Chest;
        int Arms;
        int Hands;
        int Legs;
        int Feet;

    public:
        int getHead() const;
        void setHead(int value);
        int getChest() const;
        void setChest(int value);
        int getArms() const;
        void setArms(int value);
        int getHands() const;
        void setHands(int value);
        int getLegs() const;
        void setLegs(int value);
        int getFeet() const;
        void setFeet(int value);
    };
public:
    PlaySquare();
    void keyPressEvent(QKeyEvent *event);

    string getName();
    void setName(string value);

    string getJobClass();
    void setJobClass(string value);

    int getHealth() const;
    void setHealth(int value);

    int getMagic() const;
    void setMagic(int value);

    int getAttack() const;
    void setAttack(int value);

    int getDefense() const;
    void setDefense(int value);

    double getCritical() const;
    void setCritical(double value);


    void setFace(int value);


public slots:
    void Incoming();
    int getFace();
};

#endif // PLAYSQUARE_H
