#include <iostream>
using namespace std;

int main() {

    int playerHP = 100;
    int monsterHP = 80;
    int xp = 0;

    while(playerHP > 0 && monsterHP > 0) {

        cout << "\nPlayer HP: " << playerHP << endl;
        cout << "Monster HP: " << monsterHP << endl;

        cout << "1. Attack\n";
        int choice;
        cin >> choice;

        if(choice == 1) {

            monsterHP -= 20;

            if(monsterHP > 0)
                playerHP -= 10;
        }
    }

    if(playerHP > 0) {

        xp += 50;

        cout << "\nMonster Defeated!\n";
        cout << "XP Gained: " << xp;
    }
    else {

        cout << "\nGame Over!";
    }

    return 0;
}
