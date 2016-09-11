#include <iostream>
#include "game.h"
using namespace std;

int main() {
    int player_1; int player_2; int boards; int turn; char in = 0;
    Game g(0,0,1);
    while(1) {
        cout << "Welcome to Notakto!" << endl << endl;
        do {
        cout << "Enter a number to choose who plays Player 1 [0-2]\n0: Player\n1: Easy AI\n2: Hard AI" << endl;
            if (cin >> player_1) {
                if (player_1 > 2 || player_1 < 0) {
                    cout << "Invalid number" << endl;
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
        do {
        cout << "Enter a number to choose who plays Player 2 [0-2]\n0: Player\n1: Easy AI\n2: Hard AI" << endl;
            if (cin >> player_2) { 
                if (player_2 > 2 || player_2 < 0) {
                    cout << "Invalid number" << endl;
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
        do {
        cout << "Enter the number of boards." << endl;
            if (cin >> boards) {
                if (boards < 1) {
                    cout << "Invalid number" << endl;
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
        g.reset(player_1, player_2, boards);
        cout << "The game has started!" << endl;
        turn = 0;
        while (!g.get_game_over()) {
            turn++;
            g.display();
            try {
            if (turn % 2 == 1) {
                cout << "Player 1's move" << endl;
                g.player_1_move();
            } else {
                cout << "Player 2's move" << endl; 
                g.player_2_move(); 
            }
            } catch(const char* err) {cout << err; exit(1);}
        }
        g.display();
        if (turn % 2 == 1) {
            cout << endl << "Player 2 wins!" << endl;
        } else {
            cout << endl << "Player 1 wins!" << endl;
        }
        do {
            cout << "Game over. Play again (y/n)?" << endl;
            if (cin >> in) {
                if (in != 'y' && in != 'n') {
                    cout << "Invalid character" << endl;
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
        if (in == 'y') {
            continue;
        }
        break;
    }
    cout << "Thanks for playing! Bye." << endl;
}
