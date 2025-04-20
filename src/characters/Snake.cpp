#include <iostream>
#include "Snake.h"

Snake::Snake(vector<vector<bool>>& gridRef, WINDOW *board) {
    yHead = 10;
    xHead = 10;
    grid = &gridRef;
    body.push_back({yHead, xHead});
    draw(board, yHead, xHead);
    (*grid)[yHead][xHead] = true;  
}

void Snake::draw(WINDOW *board, int y, int x){
    mvwprintw(board, y, x, "@");
    wrefresh(board);
}

void Snake::erase(WINDOW *board, int y, int x){
    mvwprintw(board, y, x, " ");
    wrefresh(board);
}

void Snake::move(WINDOW *board, int ch){
    switch (ch) {
        case KEY_RIGHT:
            (*grid)[yHead][xHead] = false;
            erase(board, yHead, xHead);
            xHead = xHead + 1;
            (*grid)[yHead][xHead] = true;
            body.push_back({yHead, xHead});
            body.erase(body.begin());
            draw(board, yHead, xHead);
            break;
        case KEY_LEFT:
            (*grid)[yHead][xHead] = false;
            erase(board, yHead, xHead);
            xHead = xHead - 1;
            (*grid)[yHead][xHead] = true;
            body.push_back({yHead, xHead});
            body.erase(body.begin());
            draw(board, yHead, xHead);
            break;
        case KEY_UP:
            (*grid)[yHead][xHead] = false;
            erase(board, yHead, xHead);
            yHead = yHead - 1;
            (*grid)[yHead][xHead] = true;
            body.push_back({yHead, xHead});
            body.erase(body.begin());
            draw(board, yHead, xHead);
            break;
        case KEY_DOWN:
            (*grid)[yHead][xHead] = false;
            erase(board, yHead, xHead);
            yHead = yHead + 1;
            (*grid)[yHead][xHead] = true;
            body.push_back({yHead, xHead});
            body.erase(body.begin());
            draw(board, yHead, xHead);
            break;
    }
}