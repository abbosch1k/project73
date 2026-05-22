#include <iostream>
using namespace std;

int main() {

    int zombieHP = 100;
    int damage;

    cout << "=== ZOMBIE SURVIVAL ===\n";

    while(zombieHP > 0) {

        cout << "Zombie HP: "
             << zombieHP
             << endl;

        cout << "Enter attack damage: ";
        cin >> damage;

        zombieHP -= damage;

        cout << "You attacked the zombie!\n";
    }

    cout << "Zombie Defeated!";
}
