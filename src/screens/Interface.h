#ifndef INTERFACE_H
#define INTERFACE_H

#include <ncurses.h>

class Interface {
protected:
    int height;
    int width;
    WINDOW *board;
public:
    Interface();               

    void createBoard();      
    void renderBoard();      
};

#endif