#include <iostream>
using namespace std;

int main() {

    char command;
    int x = 0, y = 0;

    do {

        cout << "\nRobot Position: (" << x << ", " << y << ")\n";
        cout << "W-Up S-Down A-Left D-Right Q-Quit\n";
        cin >> command;

        switch(command) {

            case 'w':
                y++;
                break;

            case 's':
                y--;
                break;

            case 'a':
                x--;
                break;

            case 'd':
                x++;
                break;
        }

    } while(command != 'q');

    return 0;
}
