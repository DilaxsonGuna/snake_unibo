#include <iostream>
#include "MainMenu.h"
using namespace std;

MainMenu::MainMenu() : Interface() {}


int MainMenu::menu()
{
    string title = "SnakeGame";
    string menu_options[] = {"Start Game", "Classifica", "Livelli", "Esci dal Gioco"};
    int option;
    int highlight = 0;
    createBoard();
    renderBoard();

    mvwprintw(board, height/3, (width/2)-5, title.c_str());
    
    while (1)
    {
        for (int i = 0; i < 4; i++)
        {
            if (i == highlight)
                wattron(board, A_REVERSE);
                mvwprintw(board, (height/2)+i, (width/2)-5, menu_options[i].c_str());
                wattroff(board, A_REVERSE);
        }
        option = wgetch(board);

        switch (option)
        {
        case KEY_UP:
            highlight--;
            if (highlight == -1)
                highlight = 0;
            break;
        case KEY_DOWN:
            highlight++;
            if (highlight == 4)
                highlight = 3;
            break;
        default:
            break;
        }
        if (option == 10)
            break;
    }
    wclear(board);
    refresh();
    return highlight;
}