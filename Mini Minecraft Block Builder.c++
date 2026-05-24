#include <iostream>
using namespace std;

int main() {

    char map[5][5] = {

        {'.','.','.','.','.'},
        {'.','.','.','.','.'},
        {'.','.','.','.','.'},
        {'.','.','.','.','.'},
        {'.','.','.','.','.'}
    };

    int x,y;

    cout << "Enter X and Y: ";
    cin >> x >> y;

    map[y][x] = '#';

    for(int i=0;i<5;i++) {

        for(int j=0;j<5;j++) {

            cout << map[i][j] << " ";
        }

        cout << endl;
    }
}
