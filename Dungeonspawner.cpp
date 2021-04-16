#include "Dungeonspawner.h"
#include "monster.h"
#include "PlaySquare.h"
#include "items.h"
#include <QTimer>
#include <QGraphicsTextItem>

DungeonSpawner::DungeonSpawner(QWidget *parent)
{
    //Creates Scene or All Game Data
    QGraphicsScene *theWorld = new QGraphicsScene();
    theWorld->setSceneRect(0,0,800,600);

    //Create a View to see the scene
    QGraphicsView *Level = new QGraphicsView();
    Level->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    Level->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    Level->setScene(theWorld);
    Level->show();
    Level->setFixedSize(800,600);


    //Creates an Item(player), Define its shape.
    PlaySquare *playR = new PlaySquare();
    playR->setRect(0,0,10,15); // The 10 by 15 changes the default size.

    //Add Item(player) to the Scene
    theWorld->addItem(playR);

    //Makes the item(player) Focusable, then sets position to center of screen.
    playR->setFlag(QGraphicsItem::ItemIsFocusable);
    playR->setFocus();
    playR->setPos(Level->width()/2,Level->height()/2 - playR->rect().height());

    //Creates the Gamebar and Initialize all the player Stats ******Test TODO: Link Character Creator results to here.
    gameBar = new GameBar;
    theWorld->addItem(gameBar);

    //Creates item(Items) in the scene
    ItemSpawner();
    /*
    items = new Items();
    theWorld->addItem(items);
    */

    //Spawns Monsters
    QTimer *Spawner = new QTimer();
    QObject::connect(Spawner,SIGNAL(timeout()),playR,SLOT(Incoming()));
    Spawner->start(2000);



}

void DungeonSpawner::ItemSpawner()
{
    for(int i = 0; i < 9; i++){
        items[i] = new Items();
        theWorld->addItem(items[i]);
    };

}

