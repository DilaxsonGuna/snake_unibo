#include <iostream>
#include "Interface.h"
#include <ncurses.h>
using namespace std;

Interface::Interface() {
    height = 0;
    width = 0;
    board = nullptr;
}

void Interface::createBoard() {
    getmaxyx(stdscr, height, width);
    board = newwin(height, width, 0, 0);
    keypad(board, true);
}

void Interface::renderBoard() {
    if (board != nullptr) {
        box(board, 0, 0);
        wrefresh(board);
    }
}