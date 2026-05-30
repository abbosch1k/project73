#include <iostream>
using namespace std;

int main() {

    char board[3][3] = {
        {'1','2','3'},
        {'4','5','6'},
        {'7','8','9'}
    };

    int pos;

    for(int turn = 0; turn < 9; turn++) {

        for(int i = 0; i < 3; i++) {

            for(int j = 0; j < 3; j++)
                cout << board[i][j] << " ";

            cout << endl;
        }

        if(turn % 2 == 0)
            cout << "Player X: ";
        else
            cout << "Player O: ";

        cin >> pos;

        for(int i = 0; i < 3; i++) {

            for(int j = 0; j < 3; j++) {

                if(board[i][j] == pos + '0') {

                    board[i][j] =
                        (turn % 2 == 0) ? 'X' : 'O';
                }
            }
        }
    }

    return 0;
}
