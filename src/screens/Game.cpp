#include <iostream>
#include "Game.h"
#include "../characters/Snake.h"
using namespace std;

Game::Game() : Interface() {}

void Game::initializeGrid(int height, int width)
{
    grid = vector<vector<bool>>(height, vector<bool>(width, false));
}

void Game::game(){
    createBoard();
    renderBoard();
    initializeGrid(height, width);
    if (height > 11 && width > 21)
    {
        Snake snake(grid, board);
        int ch;
        while (1){
            ch = wgetch(board);
            if (ch == 'q')
            {
                mvwprintw(board, height/2, width/2, "exit");
                break;
            }
            else
            {
                snake.move(board, ch);
            }
        }
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
