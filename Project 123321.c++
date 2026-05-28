
#include <iostream>
using namespace std;

int main() {

    double total = 0;
    int choice;
    double expense;

    do {
        cout << "\n=== EXPENSE TRACKER ===\n";
        cout << "1. Add Expense\n";
        cout << "2. Show Total\n";
        cout << "0. Exit\n";
        cout << "Choose: ";
        cin >> choice;

        switch(choice) {

            case 1:
                cout << "Expense: ";
                cin >> expense;
                total += expense;
                break;

            case 2:
                cout << "Total Expenses: $" << total << endl;
                break;
        }

    } while(choice != 0);

    return 0;
}
