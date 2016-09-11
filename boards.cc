#include "boards.h"

void Board::init() {
    dead = 0;
    for(int i = 0; i < 9; i++) { values[i] = 0; }
}

int Board::valid_move(int pos) {
    if(pos < 0 || pos > 8 || values[pos] == 1 || dead) {
        return 0;
    }
    return 1;
}

void Board::set_value(int pos) {
    values[pos] = 1;
    is_dead();
    set_monoid();
    last_move = pos;
//    cout << "Pos: " << pos << endl;
}

int Board::get_value(int pos) { return values[pos]; }

void Board::is_dead() {
    if(values[0] == 1 && values[1] == 1 && values[2] == 1) {
        dead = 1;
    }
    if(values[3] == 1 && values[4] == 1 && values[5] == 1) {
        dead = 1;
    }
    if(values[6] == 1 && values[7] == 1 && values[8] == 1) {
        dead = 1;
    }
    if(values[0] == 1 && values[3] == 1 && values[6] == 1) {
        dead = 1;
    }
    if(values[1] == 1 && values[4] == 1 && values[7] == 1) {
        dead = 1;
    }
    if(values[2] == 1 && values[5] == 1 && values[8] == 1) {
        dead = 1;
    }
    if(values[2] == 1 && values[4] == 1 && values[6] == 1) {
        dead = 1;
    }
    if(values[0] == 1 && values[4] == 1 && values[8] == 1) {
        dead = 1;
    }
}

int Board::eq9(int val[9], const int cmp[9]) {
    int flag = 0;
    for(int i = 0; i < 9; i++) {
        if(val[i] != cmp[i]) { flag = 1; break; } 
    }
    if (!flag) {return 1;}
    flag = 0;
    for(int i = 0; i < 9; i++) {
        if(val[i] != cmp[8-i]) { flag = 1; break; }
    }
    return !flag;
}

void Board::set_monoid() {
    if(dead) {
        c = 0; a = 0; b = 0; d = 0; return;
    }
    if(eq9(values, c1)) { c = 1; a = 0; b = 0; d = 0; return; }
    if(eq9(values, o1) || eq9(values, o2) || eq9(values, o3) || 
eq9(values, o4) || eq9(values, o5) || eq9(values, o6) ) { c = 0; a = 0; b = 0; d = 0; return; }
    if(eq9(values, s1)) { c = 2; a = 0; b = 0; d = 0; return; }
    if(eq9(values, ad1) || eq9(values, ad2) || eq9(values, ad3) || eq9(values, ad4)) { c = 0; a = 1; b = 0; d = 1; return; }
    if(eq9(values, b1) || eq9(values, b2) || eq9(values, b3) ||
eq9(values, b4) || eq9(values, b5) || eq9(values, b6) ||
eq9(values, b7) || eq9(values, b8) || eq9(values, b9) ||
eq9(values, b10) || eq9(values, b11) || eq9(values, b12) ||
eq9(values, b13) || eq9(values, b14) || eq9(values, b15) ||
eq9(values, b16) || eq9(values, b17) || eq9(values, b18) ||
eq9(values, b19) || eq9(values, b20) || eq9(values, b21) ||
eq9(values, b22) || eq9(values, b23) || eq9(values, b24) ||
eq9(values, b25) || eq9(values, b26) || eq9(values, b27) ||
eq9(values, b28) || eq9(values, b29) || eq9(values, b30) ||
eq9(values, b31) || eq9(values, b32) || eq9(values, b33) ||
eq9(values, b34) || eq9(values, b35) || eq9(values, b36) ||
eq9(values, b37) || eq9(values, b38) || eq9(values, b39) ||
eq9(values, b40) || eq9(values, b41) || eq9(values, b42)) { c = 0; a = 0; b = 1; d = 0; return; }  
    if(eq9(values, a1) || eq9(values, a2) || eq9(values, a3) ||
eq9(values, a4) || eq9(values, a5) || eq9(values, a6) ||
eq9(values, a7) || eq9(values, a8) || eq9(values, a9) ||
eq9(values, a10) || eq9(values, a11) || eq9(values, a12) ||
eq9(values, a13) || eq9(values, a14) || eq9(values, a15) ||
eq9(values, a16) || eq9(values, a17) || eq9(values, a18) ||
eq9(values, a19) || eq9(values, a20) || eq9(values, a21) ||
eq9(values, a22) || eq9(values, a23) || eq9(values, a24) ||
eq9(values, a25) || eq9(values, a26) || eq9(values, a27) ||
eq9(values, a28) || eq9(values, a29) || eq9(values, a30) ||
eq9(values, a31) || eq9(values, a32) || eq9(values, a33) ||
eq9(values, a34) || eq9(values, a35) || eq9(values, a36) ||
eq9(values, a37) || eq9(values, a38) || eq9(values, a39) ||
eq9(values, a40) || eq9(values, a41) || eq9(values, a42) ) { c = 0; a = 1; b = 0; d = 0; return; }
    if(eq9(values, ab1) || eq9(values, ab2) || eq9(values, ab3) || 
eq9(values, ab4) || eq9(values, ab5) || eq9(values, ab6) ||
eq9(values, ab7) || eq9(values, ab8) || eq9(values, ab9) ||
eq9(values, ab10) || eq9(values, ab11) || eq9(values, ab12) ||
eq9(values, ab13) || eq9(values, ab14) ) { c = 0; a = 1; b = 1; d = 0; return; }
    if(eq9(values, d1) || eq9(values, d2) || eq9(values, d3) ||
eq9(values, d4) || eq9(values, d5) || eq9(values, d6) ||
eq9(values, d7) || eq9(values, d8) || eq9(values, d9) ||
eq9(values, d10) || eq9(values, d11) || eq9(values, d12) ) { c = 0; a = 0; b = 0; d = 1; return; }
    throw "set_monoid failed";
    return;
}

int Board::get_dead() {return dead;}

int Board::get_monoid(char ch) {
    if (ch == 'a') { return a; }
    if (ch == 'b') { return b; }
    if (ch == 'c') { return c; }
    if (ch == 'd') { return d; }
    throw "get_monoid failed"; return 0;
}

void Board::undo_move() {
    values[last_move] = 0;
    dead = 0;
    set_monoid();
}
