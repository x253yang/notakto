#include <iostream>
#include <string>
#include <time.h>
#include <cassert>
#include "prng.h"
#include "boards.h"
using namespace std;

#ifndef GAME_H
#define GAME_H

class Game {
    int num_boards;
    int player_1_AI;
    int player_2_AI;
    Board *b;
    int game_over();
    int ga;
    int gb;
    int gc;
    int gd;
    void player_move();
    void easy_ai_move();
    void hard_ai_move();
    void update_monoid();
public:
    void display();
    int get_game_over();
    Game(int player_1, int player_2, int boards);
    ~Game();
    int get_misere_quotient(char ch);
    void reset(int player_1, int player_2, int boards);
    void player_1_move();
    void player_2_move();
};

#endif
