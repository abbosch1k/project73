#include <iostream>
using namespace std;

int main() {

    double balance = 1000;
    int choice;
    double amount;

    do {

        cout << "\n=== MINI ATM SYSTEM ===\n";
        cout << "1. Check Balance\n";
        cout << "2. Deposit Money\n";
        cout << "3. Withdraw Money\n";
        cout << "0. Exit\n";
        cout << "Choose: ";
        cin >> choice;

        switch(choice) {

            case 1:
                cout << "Balance: $" << balance << endl;
                break;

            case 2:
                cout << "Enter amount: ";
                cin >> amount;

                balance += amount;

                cout << "Money Added!\n";
                break;

            case 3:
                cout << "Enter amount: ";
                cin >> amount;

                if(amount <= balance) {
                    balance -= amount;
                    cout << "Take your money!\n";
                }
                else {
                    cout << "Not enough balance!\n";
                }

                break;

            case 0:
                cout << "ATM Closed\n";
                break;

            default:
                cout << "Wrong choice!\n";
        }

    } while(choice != 0);

    return 0;
}
