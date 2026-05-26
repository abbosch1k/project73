#include <iostream>
using namespace std;

int main() {

    int balance = 5000;

    int choice;

    do {

        cout << "\n=== BUS TICKET SYSTEM ===\n";
        cout << "1. Buy Ticket\n";
        cout << "2. Check Balance\n";
        cout << "0. Exit\n";

        cin >> choice;

        switch(choice) {

            case 1:

                if(balance >= 2000) {

                    balance -= 2000;

                    cout << "Ticket Bought!\n";
                }
                else {

                    cout << "Not enough money!\n";
                }

                break;

            case 2:

                cout << "Balance: "
                     << balance
                     << endl;

                break;
        }

    } while(choice != 0);
}
