#include <iostream>
using namespace std;

int main() {

    int choice;

    do {

        cout << "\n=== SMART HOME ===\n";
        cout << "1. Turn ON Light\n";
        cout << "2. Turn OFF Light\n";
        cout << "3. Turn ON Fan\n";
        cout << "4. Turn OFF Fan\n";
        cout << "0. Exit\n";

        cin >> choice;

        switch(choice) {

            case 1:
                cout << "Light ON\n";
                break;

            case 2:
                cout << "Light OFF\n";
                break;

            case 3:
                cout << "Fan ON\n";
                break;

            case 4:
                cout << "Fan OFF\n";
                break;
        }

    } while(choice != 0);
}
