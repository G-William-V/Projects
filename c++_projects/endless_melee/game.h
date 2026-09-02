#include "characters.h"
#include "items.h"
#include <iostream>

#ifndef GAME_H
#define GAME_H

class Game {
    private:
        NPC * npc;
        Player * player;
        
    public:
        bool gameIsOver;

        Game(NPC *, Player *);

        void combat();
        void getItem();
        void itemDrop();
        void inventory();
};

#endif