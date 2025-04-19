#include <iostream>
#include "Game.h"
#include <ncurses.h>
using namespace std;

Game::Game() : Interface() {}

bool Game::initializeGrid(int height, int width)
{
    bool grid [height][width];
    return grid;
}

void Game::game(){
    createBoard();
    renderBoard();
    initializeGrid(height, width);
    if (height > 11 && width > 21)
    {
        mvwprintw(board, height/2, width/2, "game started");
        
        wrefresh(board);
        wgetch(board);
    }
    else
    {
        mvwprintw(board, height/2, width/2, "Error: The screen is too small!");
        mvwprintw(board, (height/2)+1, width/2, "Press any key to exit...");
        wrefresh(board);
        wgetch(board);
    }
    
}
