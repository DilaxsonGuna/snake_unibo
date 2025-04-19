#ifndef GAME_H
#define GAME_H

#include "Interface.h"

class Game: public Interface{
protected:
public:
    Game();
    bool initializeGrid(int height, int width);
    void game();
};

#endif
