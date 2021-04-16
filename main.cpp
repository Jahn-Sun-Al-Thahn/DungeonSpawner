#include <QApplication>
#include "Dungeonspawner.h"


/*
 This will be the main cpp for the Dungeon Monster Spawner Game.
*/

DungeonSpawner *DMSGame;

int main(int argc, char *argv[])
{
    QApplication DMS(argc,argv);

    DMSGame = new DungeonSpawner;

  return DMS.exec();
}
