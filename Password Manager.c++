#include <iostream>
#include <vector>
using namespace std;

struct Account {
    string website;
    string password;
};

int main() {

    vector<Account> accounts;

    int choice;

    do {

        cout << "\n=== PASSWORD MANAGER ===\n";
        cout << "1. Add Account\n";
        cout << "2. Show Accounts\n";
        cout << "0. Exit\n";
        cout << "Choose: ";
        cin >> choice;

        switch(choice) {

            case 1: {
                Account acc;

                cout << "Website: ";
                cin >> acc.website;

                cout << "Password: ";
                cin >> acc.password;

                accounts.push_back(acc);

                cout << "Account Saved!\n";
                break;
            }

            case 2: {

                cout << "\n=== SAVED ACCOUNTS ===\n";

                for(int i = 0; i < accounts.size(); i++) {

                    cout << "Website: "
                         << accounts[i].website
                         << " | Password: "
                         << accounts[i].password
                         << endl;
                }

                break;
            }

            case 0:
                cout << "Goodbye!\n";
                break;

            default:
                cout << "Invalid choice!\n";
        }

    } while(choice != 0);

    return 0;
}
