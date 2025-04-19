#include <iostream>
#include <ncurses.h>
#include "screens/MainMenu.h"
#include "screens/Interface.h"
#include "screens/Game.h"
using namespace std;

int main()
{
    initscr();
    noecho();
    cbreak();

    MainMenu start;
    switch (start.menu())
    {
    case 0:{
        Game partita; 
        partita.game();
        break;
    }
    case 1:
        /* Classifica */
        break;
    case 2:
        /* Livelli */
        break;
    case 3:
        /* Exit */
        break;
    default:
        break;
    }
    
    getch();
    endwin();
    return 0;
}