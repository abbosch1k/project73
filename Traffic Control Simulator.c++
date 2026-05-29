#include <iostream>
using namespace std;

int main() {

    int choice;

    do {

        cout << "\n=== TRAFFIC LIGHT ===\n";
        cout << "1. Red\n";
        cout << "2. Yellow\n";
        cout << "3. Green\n";
        cout << "0. Exit\n";

        cin >> choice;

        switch(choice) {

            case 1:
                cout << "STOP!\n";
                break;

            case 2:
                cout << "READY!\n";
                break;

            case 3:
                cout << "GO!\n";
                break;
        }

    } while(choice != 0);

    return 0;
}
