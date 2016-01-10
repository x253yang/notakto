//
//  NOTAKTO Program
//
//  Created by Justin Yang on 2016-01-08.
//

#include <iostream>

const int c1[9] = {0,0,0,0,0,0,0,0,0};

const int s1[9] = {0,0,0,0,1,0,0,0,0};

const int o1[9] = {1,0,0,0,0,0,0,0,0};
const int o2[9] = {0,1,0,0,0,0,0,0,0};
const int o3[9] = {0,0,1,0,0,0,0,0,0};
const int o4[9] = {0,0,0,1,0,0,0,0,0};

const int ad1[9] = {1,1,0,0,0,0,0,0,0};
const int ad2[9] = {0,1,1,0,0,0,0,0,0};
const int ad3[9] = {1,0,0,1,0,0,0,0,0};
const int ad4[9] = {0,0,1,0,0,1,0,0,0};

const int b1[9] = {1,0,1,0,0,0,0,0,0};
const int b2[9] = {1,0,0,0,0,0,1,0,0};

const int b3[9] = {1,0,0,0,1,0,0,0,0};
const int b4[9] = {0,0,1,0,1,0,0,0,0};

const int b5[9] = {1,0,0,0,0,1,0,0,0};
const int b6[9] = {1,0,0,0,0,0,0,1,0};
const int b7[9] = {0,1,0,0,0,0,1,0,0};
const int b8[9] = {0,0,1,1,0,0,0,0,0};

//const int a1[9] = {1,0,0,0,0,0,0,0,1};
//const int a2[9] = {0,0,1,0,0,0,1,0,0};

//const int a3[9] = {0,1,0,1,0,0,0,0,0};
//const int a4[9] = {0,1,0,0,0,1,0,0,0};

const int b9[9] = {0,1,0,0,1,0,0,0,0};
const int b10[9] = {0,0,0,1,1,0,0,0,0};

//const int a5[9] = {0,1,0,0,0,0,0,1,0};
//const int a6[9] = {0,0,0,1,0,1,0,0,0};

const int b11[9] = {1,1,0,1,0,0,0,0,0};
const int b12[9] = {0,1,1,0,0,1,0,0,0};

const int ab1[9] = {1,1,0,0,1,0,0,0,0};
const int ab2[9] = {0,1,1,0,1,0,0,0,0};
const int ab3[9] = {1,0,0,1,1,0,0,0,0};
const int ab4[9] = {0,0,1,0,1,1,0,0,0};

const int d1[9] = {1,1,0,0,0,1,0,0,0};
const int d2[9] = {1,0,0,1,0,0,0,1,0};
const int d3[9] = {0,1,0,1,0,0,1,0,0};
const int d4[9] = {0,1,1,1,0,0,0,0,0};

//const int a7[9] = {1,0,1,1,0,0,0,0,0};
//const int a8[9] = {1,1,0,0,0,0,1,0,0};
//const int a9[9] = {1,0,1,0,0,1,0,0,0};
//const int a10[9] = {1,0,0,0,0,0,1,1,0};

const int d5[9] = {1,1,0,0,0,0,0,1,0};
const int d6[9] = {1,0,0,1,0,1,0,0,0};
const int d7[9] = {0,1,1,0,0,0,0,1,0};
const int d8[9] = {0,0,1,1,0,1,0,0,0};

const int d9[9] = {1,1,0,0,0,0,0,0,1};
const int d10[9] = {0,1,1,0,0,0,1,0,0};
const int d11[9] = {1,0,0,1,0,0,0,0,1};
const int d12[9] = {0,0,1,1,0,0,1,0,0};

//const int a11[9] = {1,0,1,0,1,0,0,0,0};
//const int a12[9] = {1,0,0,0,1,0,1,0,0};

const int ab5[9] = {1,0,1,0,0,0,1,0,0};
const int ab6[9] = {1,0,1,0,0,0,0,0,1};

//const int a13[9] = {1,0,1,0,0,0,0,1,0};
//const int a14[9] = {1,0,0,0,0,1,1,0,0};

//const int a15[9] = {1,0,0,0,1,0,0,1,0};
//const int a16[9] = {1,0,0,0,1,1,0,0,0};
//const int a17[9] = {0,1,0,0,1,0,1,0,0};
//const int a18[9] = {0,0,1,1,1,0,0,0,0};

const int o5[9] = {1,0,0,0,0,1,0,1,0};
const int o6[9] = {0,1,0,0,0,1,1,0,0};

const int ab7[9] = {0,1,0,1,1,0,0,0,0};
const int ab8[9] = {0,1,0,0,1,1,0,0,0};

const int b13[9] = {0,1,0,1,0,1,0,0,0};
const int b14[9] = {0,1,0,1,0,0,0,1,0};

//const int a19[9] = {1,1,0,1,1,0,0,0,0};
//const int a20[9] = {0,1,1,0,1,1,0,0,0};

//const int a21[9] = {1,1,0,1,0,1,0,0,0};
//const int a22[9] = {1,1,0,1,0,0,0,1,0};
//const int a23[9] = {0,1,1,1,0,1,0,0,0};
//const int a24[9] = {0,1,1,0,0,1,0,1,0};

//const int a25[9] = {1,1,0,1,0,0,0,0,1};
//const int a26[9] = {0,1,1,0,0,1,1,0,0};

const int b15[9] = {1,1,0,0,1,1,0,0,0};
const int b16[9] = {0,1,1,1,1,0,0,0,0};
const int b17[9] = {1,0,0,1,1,0,0,1,0};
const int b18[9] = {0,1,0,1,1,0,1,0,0};

const int b19[9] = {1,1,0,0,1,0,1,0,0};
const int b20[9] = {1,1,0,1,0,0,0,1,0};
const int b21[9] = {0,1,1,1,0,1,0,0,0};
const int b22[9] = {0,1,1,0,0,1,0,1,0};

const int b23[9] = {1,1,0,0,0,1,1,0,0};
const int b24[9] = {1,0,1,1,0,0,0,1,0};
const int b25[9] = {1,0,1,0,0,1,0,1,0};
const int b26[9] = {1,0,0,0,0,1,1,1,0};

const int ab9[9] = {1,1,0,0,0,1,0,1,0};
const int ab10[9] = {1,0,0,1,0,1,0,1,0};
const int ab11[9] = {0,1,0,1,0,1,1,0,0};
const int ab12[9] = {0,1,1,1,0,0,0,1,0};

const int ab13[9] = {1,1,0,0,0,1,0,0,1};
const int ab14[9] = {0,1,1,1,0,0,1,0,0};

const int b27[9] = {1,1,0,0,0,0,1,1,0};
const int b28[9] = {1,0,1,1,0,1,0,0,0};

const int b29[9] = {1,1,0,0,0,0,1,0,1};
const int b30[9] = {1,0,1,0,0,1,1,0,0};
const int b31[9] = {1,0,1,1,0,0,0,0,1};
const int b32[9] = {1,0,1,0,0,0,1,1,0};

const int b41[9] = {1,0,1,0,1,0,0,1,0};
const int b42[9] = {1,0,0,0,1,1,1,0,0};

//const int a27[9] = {1,1,0,0,0,0,0,1,1};
//const int a28[9] = {0,1,1,0,0,0,1,1,0};
//const int a29[9] = {0,0,1,1,0,1,1,0,0};
//const int a30[9] = {1,0,0,1,0,1,0,0,1};

const int b33[9] = {0,1,0,0,1,1,1,0,0};
const int b34[9] = {1,0,0,0,1,1,0,1,0};

//const int a31[9] = {0,1,0,1,0,1,0,1,0};

const int b35[9] = {1,1,0,1,0,1,0,1,0};
const int b36[9] = {0,1,1,1,0,1,0,1,0};

const int b37[9] = {1,1,0,1,0,1,0,1,0};
const int b38[9] = {1,1,0,1,0,0,0,1,1};
const int b39[9] = {0,1,1,1,0,1,1,0,0};
const int b40[9] = {0,1,1,1,0,0,1,1,0};

//const int a32[9] = {1,1,0,0,1,1,1,0,0};
//const int a33[9] = {1,0,1,1,1,0,0,1,0};
//const int a34[9] = {1,0,1,0,1,1,0,1,0};
//const int a35[9] = {1,0,0,0,1,1,1,1,0};

//const int a36[9] = {1,1,0,0,0,1,1,1,0};
//const int a37[9] = {1,0,1,1,0,1,0,1,0};

//const int a38[9] = {1,1,0,0,0,1,1,0,1};
//const int a39[9] = {1,0,1,0,0,1,1,1,0};

//const int a40[9] = {1,1,0,1,0,1,0,1,1};
//const int a41[9] = {0,1,1,1,0,1,1,1,0};

int equal9(char *a1, const int *a2) {
    int i = 0;
    while (i < 9) {
        if((a1[i] == 'X' and a2[i] == 1) or ((a1[i] == '_') and a2[i] == 0))
        {i++;
        } else {
            break;
        }
        if (i == 9) {return 1;}
    }
    i = 0;
    while (i < 9) {
        if((a1[i] == 'X' and a2[8-i] == 1) or (a1[i] == '_' and a2[8-i] == 0))
        {i++;
        } else {
            break;
        }
        if (i == 9) {return 1;}
    }
    return 0;
}

struct game {
    struct board *first;
    struct board *cur;
    int nb;
    int mqa;
    int mqb;
    int mqc;
    int mqd;
};

struct board {
    int dead;
    int depth;
    char *first;
    int ma;
    int mb;
    int mc;
    int md;
    struct board *next;
};

void initialize_board(struct board *b, int cur) {
    b->first = new char[9] {'_','_','_','_','_','_','_','_','_'};
    b->depth = cur;
    b->ma = 0;
    b->mb = 0;
    b->mc = 1;
    b->md = 0;
}

void initialize_game(struct game *g) {
    int i = 1;
    g->first = new struct board;
    initialize_board(g->first, i);
    g->cur = g->first;
    while (i < g->nb) {
        i++;
        g->cur->next = new struct board;
        g->cur = g->cur->next;
        initialize_board(g->cur, i);
    }
    g->mqa = 0;
    g->mqb = 0;
    g->mqc = 0;
    g->mqd = 0;
}

void destroy_board(struct board *b) {
    while(b) {
        destroy_board(b->next);
        if (b->first) {
            delete b->first;
        }
        delete b;
    }
}

void dead(struct board *b) {
    if ((b->first[0] == 'X' and
         b->first[1] == 'X' and
         b->first[2] == 'X') or
        (b->first[3] == 'X' and
         b->first[4] == 'X' and
         b->first[5] == 'X') or
        (b->first[6] == 'X' and
         b->first[7] == 'X' and
         b->first[8] == 'X') or
        (b->first[0] == 'X' and
         b->first[3] == 'X' and
         b->first[6] == 'X') or
        (b->first[1] == 'X' and
         b->first[4] == 'X' and
         b->first[7] == 'X') or
        (b->first[2] == 'X' and
         b->first[5] == 'X' and
         b->first[8] == 'X') or
        (b->first[0] == 'X' and
         b->first[4] == 'X' and
         b->first[8] == 'X') or
        (b->first[2] == 'X' and
         b->first[4] == 'X' and
         b->first[6] == 'X')) {
            b->dead = 1;
            b->ma = 0;
            b->mb = 0;
            b->mc = 0;
            b->md = 0;
        }
}

void monoid(struct board *b) {
    if (equal9(b->first, s1)) {
        b->ma = 0;
        b->mb = 0;
        b->mc = 2;
        b->md = 0;
    } else if
    (equal9(b->first, c1)) {
        b->ma = 0;
        b->mb = 0;
        b->mc = 1;
        b->md = 0;
    } else if
    (equal9(b->first, d1) or equal9(b->first, d7) or
     equal9(b->first, d2) or equal9(b->first, d8) or
     equal9(b->first, d3) or equal9(b->first, d9) or
     equal9(b->first, d4) or equal9(b->first, d10) or
     equal9(b->first, d5) or equal9(b->first, d11) or
     equal9(b->first, d6) or equal9(b->first, d12)) {
        b->ma = 0;
        b->mb = 0;
        b->mc = 0;
        b->md = 1;
    } else if
    (equal9(b->first, ad1) or
     equal9(b->first, ad2) or
     equal9(b->first, ad3) or
     equal9(b->first, ad4)) {
        b->ma = 1;
        b->mb = 0;
        b->mc = 0;
        b->md = 1;
    } else if
    (equal9(b->first, b1) or equal9(b->first, b21) or
     equal9(b->first, b2) or equal9(b->first, b22) or
     equal9(b->first, b3) or equal9(b->first, b23) or
     equal9(b->first, b4) or equal9(b->first, b24) or
     equal9(b->first, b5) or equal9(b->first, b25) or
     equal9(b->first, b6) or equal9(b->first, b26) or
     equal9(b->first, b7) or equal9(b->first, b27) or
     equal9(b->first, b8) or equal9(b->first, b28) or
     equal9(b->first, b9) or equal9(b->first, b29) or
     equal9(b->first, b10) or equal9(b->first, b30) or
     equal9(b->first, b11) or equal9(b->first, b31) or
     equal9(b->first, b12) or equal9(b->first, b32) or
     equal9(b->first, b13) or equal9(b->first, b33) or
     equal9(b->first, b14) or equal9(b->first, b34) or
     equal9(b->first, b15) or equal9(b->first, b35) or
     equal9(b->first, b16) or equal9(b->first, b36) or
     equal9(b->first, b17) or equal9(b->first, b37) or
     equal9(b->first, b18) or equal9(b->first, b38) or
     equal9(b->first, b19) or equal9(b->first, b39) or
     equal9(b->first, b20) or equal9(b->first, b40) or
     equal9(b->first, b41) or equal9(b->first, b42)) {
        b->ma = 0;
        b->mb = 1;
        b->mc = 0;
        b->md = 0;
    } else if
    (equal9(b->first, o1) or equal9(b->first, o4) or
     equal9(b->first, o2) or equal9(b->first, o5) or
     equal9(b->first, o3) or equal9(b->first, o6)) {
        b->ma = 0;
        b->mb = 0;
        b->mc = 0;
        b->md = 0;
    } else if
    (equal9(b->first, ab1) or equal9(b->first, ab8) or
     equal9(b->first, ab2) or equal9(b->first, ab9) or
     equal9(b->first, ab3) or equal9(b->first, ab10) or
     equal9(b->first, ab4) or equal9(b->first, ab11) or
     equal9(b->first, ab5) or equal9(b->first, ab12) or
     equal9(b->first, ab6) or equal9(b->first, ab13) or
     equal9(b->first, ab7) or equal9(b->first, ab14)) {
        b->ma = 1;
        b->mb = 1;
        b->mc = 0;
        b->md = 0;
    } else {
        b->ma = 1;
        b->mb = 0;
        b->mc = 0;
        b->md = 0;
    }
}

void make_move(struct board *b) {
    int move = 0;
    std::cout << "Which box will you put an x in?[1-9]\n";
    while (move < 1 or move > 9 or b->first[move-1] == 'X') {
        std::cin >> move;
        if (b->first[move-1] == 'X') {
            std::cout << "Invalid move (box filled)";
        }
    }
    b->first[move-1] = 'X';
    dead(b);
    if (b->dead == 0) {
        monoid(b);
    }
    if (/* DISABLES CODE */ (1)) {
        std::cout << "The monoid (a,b,c,d) for this board is: ";
        std::cout << b->ma;
        std::cout << b->mb;
        std::cout << b->mc;
        std::cout << b->md;
        std::cout << "\n";
    }
}

void misère_quotient(struct game *g) {
    int i = g->nb;
    g->cur = g->first;
    g->mqa = 0;
    g->mqb = 0;
    g->mqc = 0;
    g->mqd = 0;
    while (i > 0) {
        i--;
        g->mqa += g->cur->ma;
        g->mqb += g->cur->mb;
        g->mqc += g->cur->mc;
        g->mqd += g->cur->md;
        g->cur = g->cur->next;
    }
    while (g->mqa > 1 or g->mqb > 2 or g->mqc > 2 or g->mqd > 1) {
        if (g->mqd > 1) {
            g->mqc += (g->mqd-1);
            g->mqd %= 2;
        }
        if (g->mqc > 2) {
            g->mqa += (g->mqc-2);
            g->mqc = 2;
        }
        if (g->mqa > 1) {
            g->mqa %= 2;
        }
        if (g->mqb > 2) {
            if (g->mqb%2 == 1) {
                g->mqb = 1;
            } else {
                g->mqb = 2;
            }
        }
    }
    if (g->mqb == 2 and g->mqc == 2) {
        g->mqb = 0;
    }
    if (g->mqb == 2 and g->mqd == 1) {
        g->mqb = 0;
    }
    if (g->mqc == 2 and g->mqd == 1) {
        g->mqc = 0;
    }
}

void draw_board(char values[9], int depth, int dead) {
    std::cout << "\nBoard "; std::cout << depth;
    if (dead) {
        std::cout << " (DEAD)";
    }
    std::cout << "\n";
    std::cout << values[0]; std::cout << " ";
    std::cout << values[1]; std::cout << " ";
    std::cout << values[2]; std::cout << " \n";
    std::cout << values[3]; std::cout << " ";
    std::cout << values[4]; std::cout << " ";
    std::cout << values[5]; std::cout << " \n";
    std::cout << values[6]; std::cout << " ";
    std::cout << values[7]; std::cout << " ";
    std::cout << values[8]; std::cout << " \n";
}

void draw_game(struct game *g) {
    int i = g->nb;
    g->cur = g->first;
    while (i > 0) {
        i--;
        draw_board(g->cur->first, g->cur->depth, g->cur->dead);
        g->cur = g->cur->next;
    }
    if (/* DISABLES CODE */ (1)) {
        std::cout << "The misère quotient (a,b,c,d) for this game is: ";
        std::cout << g->mqa;
        std::cout << g->mqb;
        std::cout << g->mqc;
        std::cout << g->mqd;
        std::cout << "\n";
    }
}

void ai_move(struct board *b, int p) {
    b->first[p] = 'X';
    dead(b);
    if (b->dead == 0) {
        monoid(b);
    }
}

int between_turns(struct game *g) {
    misère_quotient(g);
    g->cur = g->first;
    int db = 0;
    while (db < g->nb and g->cur->dead == 1) {
        g->cur = g->cur->next;
        db++;
    }
    if (db == g->nb) {
        return 0;
    } else {
        return 1;
    }
}

int player_move(struct game *g) {
    g->cur = g->first;
    int bn = 0;
    std::cout << "\nWhich board do you want to move on?";
    do {
        std::cout << "\nEnter a positive integer no greater than the number of boards, ";
        std::cout << g->nb;
        std::cin >> bn;
        std::cout << "\nYou have selected board number ";
        std::cout << bn;
    } while (bn < 1 or bn > g->nb);
    while (bn > 1) {
        bn--;
        g->cur = g->cur->next;
    }
    if (g->cur->dead == 1) {
        std::cout << "\nYou have selected a dead board. Select another one.\n\n";
        player_move(g);
        return 0;
    }
    make_move(g->cur);
    return 1;
}

void ai_move1(struct game *g) {
    int r = rand()%9;
    int b = rand()%g->nb;
    g->cur = g->first;
    while (b > 0) {
        g->cur = g->cur->next;
        b--;
    }
    if (g->cur->dead) {
        g->cur = g->first;
        while (g->cur->dead) {
            g->cur = g->cur->next;
        }
    }
    if (g->cur->first[r] == 'X') {
        while (g->cur->first[r] == 'X') {
            r = rand()%9;
        }
    }
    ai_move(g->cur, r);
    std::cout << "The AI has moved on board ";
    std::cout << g->cur->depth;
    std::cout << " on box ";
    std::cout << r+1;
}

void ai_move2(struct game *g) {
    int i = 9*g->nb;
    int r = rand()%i;
    int bn;
    while (i > 0) {
        i--;
        bn = r/9;
        g->cur = g->first;
        while (bn > 0) {
            bn--;
            g->cur = g->cur->next;
        }
        if (g->cur->dead == 1 or
            g->cur->first[r%9] == 'X') {
            r = (r+1)%(9*g->nb);
            continue;
        } else {
            ai_move(g->cur, r%9);
            int d = g->cur->depth;
            misère_quotient(g);
            g->cur = g->first;
            while (d > 1) {
                d--;
                g->cur = g->cur->next;
            }
            if ((g->mqa == 1 and g->mqb == 0 and g->mqc == 0 and g->mqd == 0) or
                (g->mqa == 0 and g->mqb == 1 and g->mqc == 1 and g->mqd == 0) or
                (g->mqa == 0 and g->mqb == 0 and g->mqc == 2 and g->mqd == 0) or
                (g->mqa == 0 and g->mqb == 2 and g->mqc == 0 and g->mqd == 0)) {
                std::cout << "The AI has moved on board ";
                std::cout << g->cur->depth;
                std::cout << " on box ";
                std::cout << r%9+1;
                return;
            }
            else {
                g->cur->first[r%9] = '_';
                g->cur->dead = 0;
                monoid(g->cur);
                r = (r+1)%(9*g->nb);
                continue;
            }
        }
    }
    ai_move1(g);
}

int main(int argc, const char * argv[]) {
    int player = 1;
    int diff = 0;
    char ai = 'n';
    struct game g = {0,0,0,0,0,0,0};
    do {
        std::cout << "Enter a positive integer to be the number of boards.";
        std::cin >> g.nb;
        std::cout << "You have selected ";
        std::cout << g.nb;
        std::cout << " boards. \n\n";
    } while (g.nb < 1);
    initialize_game(&g);
    std::cout << "Enter y if you want to play against the ai.";
    std::cin >> ai;
    
    if (ai == 'y') {
        do {
            std::cout << "\nEnter the ai difficulty.\n1 = easy, 2 = hard";
            std::cin >> diff;
            std::cout << "\nYou have selected difficulty level ";
            std::cout << diff;
        } while (diff < 1 or diff > 2);
        do {
            std::cout << "\nEnter 1 to be player 1, or 2 to be player 2.";
            std::cin >> player;
        } while (player < 1 or player > 2);
        std::cout << "\nYou are player ";
        std::cout << player;
        if (diff == 1 and player == 1) {
            while (between_turns(&g)) {
                draw_game(&g);
                player_move(&g);
                player++;
                if(between_turns(&g) == 0) {break;};
                ai_move1(&g);
                player++;
            }
        }
        else if (diff == 1 and player == 2) {
            player = 1;
            while (between_turns(&g)) {
                ai_move1(&g);
                player++;
                if(between_turns(&g) == 0) {break;};
                draw_game(&g);
                player_move(&g);
                player++;
            }
        }
        else if (diff == 2 and player == 1) {
            while (between_turns(&g)) {
                draw_game(&g);
                player_move(&g);
                player++;
                if(between_turns(&g) == 0) {break;};
                ai_move2(&g);
                player++;
            }
        }
        else if (diff == 2 and player == 2) {
            player = 1;
            while (between_turns(&g)) {
                ai_move2(&g);
                player++;
                if(between_turns(&g) == 0) {break;};
                draw_game(&g);
                player_move(&g);
                player++;
            }
        }
    } else {
        while (between_turns(&g)) {
            draw_game(&g);
            player_move(&g);
            player++;
        }
    }
    
    draw_game(&g);
    if (player%2 == 0) {
        std::cout << "\nPLAYER 2 WINS!\n";
    } else {
        std::cout << "\nPLAYER 1 WINS!\n";
    }
    std::cout << "\nGAME OVER.";
}
