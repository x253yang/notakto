#include <iostream>
#include <string>
using namespace std;

#ifndef BOARD_H
#define BOARD_H

class Board {
    int dead;
    int c = 1;
    int a = 0;
    int b = 0;
    int d = 0;
    int values[9];
    void is_dead();
    int eq9(int val[9], const int cmp[9]);
    void set_monoid();
    int last_move;
public:
    int valid_move(int pos);
    int get_value(int pos);
    int get_dead();
    int get_monoid(char ch);
    void undo_move();
    void set_value(int pos);
    void init();
};

const int c1[9] = {0,0,0,0,0,0,0,0,0};

const int o1[9] = {1,0,0,0,0,0,0,0,0};
const int o2[9] = {0,1,0,0,0,0,0,0,0};
const int o3[9] = {0,0,1,0,0,0,0,0,0};
const int o4[9] = {0,0,0,1,0,0,0,0,0};

const int s1[9] = {0,0,0,0,1,0,0,0,0};

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

const int a1[9] = {1,0,0,0,0,0,0,0,1};
const int a2[9] = {0,0,1,0,0,0,1,0,0};

const int a3[9] = {0,1,0,1,0,0,0,0,0};
const int a4[9] = {0,1,0,0,0,1,0,0,0};

const int b9[9] = {0,1,0,0,1,0,0,0,0};
const int b10[9] = {0,0,0,1,1,0,0,0,0};

const int a5[9] = {0,1,0,0,0,0,0,1,0};
const int a6[9] = {0,0,0,1,0,1,0,0,0};

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

const int a7[9] = {1,0,1,1,0,0,0,0,0};
const int a8[9] = {1,1,0,0,0,0,1,0,0};
const int a9[9] = {1,0,1,0,0,1,0,0,0};
const int a10[9] = {1,0,0,0,0,0,1,1,0};

const int d5[9] = {1,1,0,0,0,0,0,1,0};
const int d6[9] = {1,0,0,1,0,1,0,0,0};
const int d7[9] = {0,1,1,0,0,0,0,1,0};
const int d8[9] = {0,0,1,1,0,1,0,0,0};

const int d9[9] = {1,1,0,0,0,0,0,0,1};
const int d10[9] = {0,1,1,0,0,0,1,0,0};
const int d11[9] = {1,0,0,1,0,0,0,0,1};
const int d12[9] = {0,0,1,1,0,0,1,0,0};

const int a11[9] = {1,0,1,0,1,0,0,0,0};
const int a12[9] = {1,0,0,0,1,0,1,0,0};

const int ab5[9] = {1,0,1,0,0,0,1,0,0};
const int ab6[9] = {1,0,1,0,0,0,0,0,1};

const int a13[9] = {1,0,1,0,0,0,0,1,0};
const int a14[9] = {1,0,0,0,0,1,1,0,0};

const int a15[9] = {1,0,0,0,1,0,0,1,0};
const int a16[9] = {1,0,0,0,1,1,0,0,0};
const int a17[9] = {0,1,0,0,1,0,1,0,0};
const int a18[9] = {0,0,1,1,1,0,0,0,0};

const int o5[9] = {1,0,0,0,0,1,0,1,0};
const int o6[9] = {0,1,0,0,0,1,1,0,0};

const int ab7[9] = {0,1,0,1,1,0,0,0,0};
const int ab8[9] = {0,1,0,0,1,1,0,0,0};

const int b13[9] = {0,1,0,1,0,1,0,0,0};
const int b14[9] = {0,1,0,1,0,0,0,1,0};

const int a19[9] = {1,1,0,1,1,0,0,0,0};
const int a20[9] = {0,1,1,0,1,1,0,0,0};

const int a21[9] = {1,1,0,1,0,1,0,0,0};
const int a22[9] = {1,1,0,1,0,0,0,1,0};
const int a23[9] = {0,1,1,1,0,1,0,0,0};
const int a24[9] = {0,1,1,0,0,1,0,1,0};

const int a25[9] = {1,1,0,1,0,0,0,0,1};
const int a26[9] = {0,1,1,0,0,1,1,0,0};

const int b15[9] = {1,1,0,0,1,1,0,0,0};
const int b16[9] = {0,1,1,1,1,0,0,0,0};
const int b17[9] = {1,0,0,1,1,0,0,1,0};
const int b18[9] = {0,1,0,1,1,0,1,0,0};

const int b19[9] = {1,1,0,0,1,0,1,0,0};
const int b20[9] = {1,0,1,1,1,0,0,0,0};
const int b21[9] = {1,0,0,0,1,0,1,1,0};
const int b22[9] = {1,0,1,0,1,1,0,0,0};

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

const int a27[9] = {1,1,0,0,0,0,0,1,1};
const int a28[9] = {0,1,1,0,0,0,1,1,0};
const int a29[9] = {0,0,1,1,0,1,1,0,0};
const int a30[9] = {1,0,0,1,0,1,0,0,1};

const int b41[9] = {1,0,1,0,1,0,0,1,0};
const int b42[9] = {1,0,0,0,1,1,1,0,0};

const int a31[9] = {1,0,1,0,0,0,1,0,1};

const int b33[9] = {0,1,0,0,1,1,1,0,0};
const int b34[9] = {1,0,0,0,1,1,0,1,0};

const int a32[9] = {0,1,0,1,0,1,0,1,0};

const int b35[9] = {1,1,0,1,0,1,0,1,0};
const int b36[9] = {0,1,1,1,0,1,0,1,0};

const int b37[9] = {1,1,0,1,0,1,0,0,1};
const int b38[9] = {1,1,0,1,0,0,0,1,1};
const int b39[9] = {0,1,1,1,0,1,1,0,0};
const int b40[9] = {0,1,1,1,0,0,1,1,0};

const int a33[9] = {1,1,0,0,1,1,1,0,0};
const int a34[9] = {1,0,1,1,1,0,0,1,0};
const int a35[9] = {1,0,1,0,1,1,0,1,0};
const int a36[9] = {1,0,0,0,1,1,1,1,0};

const int a37[9] = {1,1,0,0,0,1,1,1,0};
const int a38[9] = {1,0,1,1,0,1,0,1,0};

const int a39[9] = {1,1,0,0,0,1,1,0,1};
const int a40[9] = {1,0,1,0,0,1,1,1,0};

const int a41[9] = {1,1,0,1,0,1,0,1,1};
const int a42[9] = {0,1,1,1,0,1,1,1,0};

#endif
