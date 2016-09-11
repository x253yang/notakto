#include "game.h"

static PRNG prng;

Game::Game(int player_1, int player_2, int boards) {
    num_boards = boards;
    b = new Board[num_boards];
    player_1_AI = player_1; player_2_AI = player_2;
    time_t timer;
    struct tm y2k = {0};

  y2k.tm_hour = 0;   y2k.tm_min = 0; y2k.tm_sec = 0;
  y2k.tm_year = 100; y2k.tm_mon = 0; y2k.tm_mday = 1;

  time(&timer);  /* get current time; same as: timer = time(NULL)  */
  int seconds = difftime(timer,mktime(&y2k));

    prng = PRNG(seconds);
    update_monoid();
}

Game::~Game() { delete[] b; }

int Game::game_over() {
    for(int i = 0; i < num_boards; i++) {
        if( !b[i].get_dead() ) { return 0; }
    }
    return 1;
}

void Game::display() {
    char ch;
    cout << endl;
    for(int i = 0; i < num_boards; i++) {
        if(b[i].get_dead()) { cout << "Dead     "; }
        else cout << "Board " << i+1 << "  ";
    }
    cout << endl << endl;
    for(int i = 0; i < num_boards; i++) {
        if(b[i].get_value(0) == 0) {ch = 'O';} else {ch = 'X';}
        cout << ch << " ";
        if(b[i].get_value(1) == 0) {ch = 'O';} else {ch = 'X';}
        cout << ch << " ";
        if(b[i].get_value(2) == 0) {ch = 'O';} else {ch = 'X';}
        cout << ch << "    ";
    }
    cout << endl;
    for(int i = 0; i < num_boards; i++) {
        if(b[i].get_value(3) == 0) {ch = 'O';} else {ch = 'X';}
        cout << ch << " ";
        if(b[i].get_value(4) == 0) {ch = 'O';} else {ch = 'X';}
        cout << ch << " ";
        if(b[i].get_value(5) == 0) {ch = 'O';} else {ch = 'X';}
        cout << ch << "    ";
    }
    cout << endl;
    for(int i = 0; i < num_boards; i++) {
        if(b[i].get_value(6) == 0) {ch = 'O';} else {ch = 'X';}
        cout << ch << " ";
        if(b[i].get_value(7) == 0) {ch = 'O';} else {ch = 'X';}
        cout << ch << " ";
        if(b[i].get_value(8) == 0) {ch = 'O';} else {ch = 'X';}
        cout << ch << "    ";
    }
    cout << endl;
    //cout << "Misere quotient a:" << ga << " b:" << gb << " c:" << gc << " d:" << gd << endl;
    cout << endl;
}

void Game::player_move() {
    int board;
    int pos;
    while(1) {
        cout << "Which board do you want to play on?" << endl;
        do {
            if (cin >> board) { 
                board--;
                if (board > num_boards || board < 0) {
                    cout << "Invalid board number" << endl;
                    continue;
                }
                if (b[board].get_dead()) {
                    cout << "You cannot play on a dead board" << endl;
                    continue;
                }
                break;
            } else {
                if (cin.eof() ) throw "eof";
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                cout << "Could not read input" << endl;
            }
        } while(1);
        cout << "Which position do you want to move on? [1-9] To change boards, enter 0." << endl;
        do {
            if (cin >> pos) {
                pos--;
                if (pos == -1) { goto stop; }
                if (!b[board].valid_move(pos)) {
                    cout << "Invalid position number" << endl;
                    continue;
                }
                break;
            } else {
                if (cin.eof() ) throw "eof";
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                cout << "Could not read input" << endl;
            }
        } while(1);
        b[board].set_value(pos);
        update_monoid();
        break;
        stop: cout << "Choosing another board..." << endl;
    }
    cout << "Moved on Board: " << board+1 << " Position: " << pos+1 << endl;
}

void Game::easy_ai_move() {
    int r = prng(num_boards*9-1);
    while (1) {
       if(b[r/9].valid_move(r%9)) { 
           cout << "Moved on " << "Board: " << r/9 << " Position: " << r%9 << endl;
           b[r/9].set_value(r%9); break; 
       }
       else r = prng(num_boards*9-1);
    }
    update_monoid();
}

void Game::hard_ai_move() {
    if (ga == 1 && gb == 0 && gc == 0 && gd == 0) { easy_ai_move(); return; }
    if (ga == 0 && gb == 2 && gc == 0 && gd == 0) { easy_ai_move(); return; }
    if (ga == 0 && gb == 1 && gc == 1 && gd == 0) { easy_ai_move(); return; }
    if (ga == 0 && gb == 0 && gc == 2 && gd == 0) { easy_ai_move(); return; }
    int r;
    while (1) {
       r = prng(num_boards*9-1);
       if(b[r/9].valid_move(r%9)) { b[r/9].set_value(r%9);
           update_monoid(); 
           if (!((ga == 1 && gb == 0 && gc == 0 && gd == 0)
|| (ga == 0 && gb == 2 && gc == 0 && gd == 0)
|| (ga == 0 && gb == 1 && gc == 1 && gd == 0)
|| (ga == 0 && gb == 0 && gc == 2 && gd == 0))) { b[r/9].undo_move(); continue; }
           if (game_over()) { b[r/9].undo_move(); continue; }
           break;
       }
    }
    update_monoid();
    cout << "Moved on " << "Board: " << r/9 << " Position: " << r%9 << endl;
}

void Game::update_monoid() {
    ga = 0; gb = 0; gc = 0; gd = 0;
    for (int i = 0; i < num_boards; i++) {
        ga += b[i].get_monoid('a');
        gb += b[i].get_monoid('b');
        gc += b[i].get_monoid('c');
        gd += b[i].get_monoid('d');
    }
    while (ga > 1 || gb > 2 || gc > 2 || gd > 1) {
        if (gd > 1) {
            gc += gd-1;
            gd %= 2;
        }
        if (gc > 2) {
            ga += gc-2;
            gc = 2;
        }
        if (ga > 1) { ga %= 2; }
        if (gb > 2) {
            if (gb%2 == 1) { gb = 1; }
            else gb = 2;
        }
    }
    if (gb == 2 && gc == 2) { gb = 0; }
    if (gb == 2 && gd == 1) { gb = 0; }
    if (gc == 2 && gd == 1) { gc = 0; }
}

int Game::get_game_over() { return game_over(); }

int Game::get_misere_quotient(char ch) {
    if (ch == 'a') { return ga; }
    if (ch == 'b') { return gb; }
    if (ch == 'c') { return gc; }
    if (ch == 'd') { return gd; }
    return -1;
}

void Game::reset(int player_1, int player_2, int boards) {
    delete[] b;
    num_boards = boards;
    b = new Board[num_boards];
    for (int i = 0; i < num_boards; i++) { b[i].init(); }
    player_1_AI = player_1; player_2_AI = player_2;
    time_t timer;
    struct tm y2k = {0};

  y2k.tm_hour = 0;   y2k.tm_min = 0; y2k.tm_sec = 0;
  y2k.tm_year = 100; y2k.tm_mon = 0; y2k.tm_mday = 1;

  time(&timer);  /* get current time; same as: timer = time(NULL)  */
  int seconds = difftime(timer,mktime(&y2k));

    prng = PRNG(seconds);
    update_monoid();
}

void Game::player_1_move() {
    if (player_1_AI == 0) { player_move(); }
    if (player_1_AI == 1) { easy_ai_move(); }
    if (player_1_AI == 2) { hard_ai_move(); }
}

void Game::player_2_move() {
    if (player_2_AI == 0) { player_move(); }
    if (player_2_AI == 1) { easy_ai_move(); }
    if (player_2_AI == 2) { hard_ai_move(); }
}
