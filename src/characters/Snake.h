#ifndef SNAKE_H
#define SNAKE_H
#include <ncurses.h>

using namespace std;

class Snake {
protected:
    int lenght = 5;
    int xHead;
    int yHead;
    vector<pair<int, int>> body;
    vector<vector<bool>>* grid;  
public:
    Snake(vector<vector<bool>>& gridRef, WINDOW *board);  
    void draw(WINDOW *board, int y, int x);
    void move(WINDOW *board, int ch);
    void erase(WINDOW *board, int y, int x);
};

#endif