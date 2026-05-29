#include <iostream>
using namespace std;

int main() {

    int choice;
    int total = 0;

    do {

        cout << "\n=== FOOD DELIVERY ===\n";
        cout << "1. Burger ($5)\n";
        cout << "2. Pizza ($8)\n";
        cout << "3. Cola ($2)\n";
        cout << "4. Total\n";
        cout << "0. Exit\n";

        cin >> choice;

        switch(choice) {

            case 1:
                total += 5;
                break;

            case 2:
                total += 8;
                break;

            case 3:
                total += 2;
                break;

            case 4:
                cout << "Total: $" << total << endl;
                break;
        }

    } while(choice != 0);

    return 0;
}
