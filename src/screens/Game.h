#ifndef GAME_H
#define GAME_H

#include "Interface.h"
using namespace std;

class Game: public Interface{
protected:
    vector<vector<bool>> grid;
public:
    Game();
    void initializeGrid(int height, int width);
    void game();
};

#endif
