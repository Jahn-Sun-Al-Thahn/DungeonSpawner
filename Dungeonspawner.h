#ifndef DUNGEONSPAWNER_H
#define DUNGEONSPAWNER_H

#include <QWidget>
#include <QGraphicsScene>
#include "PlaySquare.h"
#include "gamebar.h"
#include <QGraphicsView>
#include <QList>
#include "items.h"

class DungeonSpawner: public QGraphicsView
{
public:
    DungeonSpawner(QWidget *parent=0);

    QGraphicsScene *theWorld;
    PlaySquare *playR;
    GameBar *gameBar;
    QList<QObject *> LevelItems;
    Items *items[10];

    void ItemSpawner();

};

#endif // DUNGEONSPAWNER_H
