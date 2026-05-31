#include <iostream>
using namespace std;

int main() {

    int x = 5, score = 0;
    char move;

    while(true) {

        cout << "\nPosition: " << x;
        cout << "\nMove (a/d): ";
        cin >> move;

        if(move == 'a') x--;
        if(move == 'd') x++;

        if(x < 0) x = 0;
        if(x > 10) x = 10;

        score++;

        cout << "Score: " << score << endl;
    }

    return 0;
}
