#include <iostream>
#include <vector>
using namespace std;

int main() {

    vector<string> books;

    int choice;
    string book;

    do {

        cout << "\n=== LIBRARY SYSTEM ===\n";
        cout << "1. Add Book\n";
        cout << "2. Show Books\n";
        cout << "0. Exit\n";

        cin >> choice;
        cin.ignore();

        switch(choice) {

            case 1:

                cout << "Book Name: ";
                getline(cin, book);

                books.push_back(book);

                cout << "Book Added!\n";

                break;

            case 2:

                cout << "\nBooks:\n";

                for(int i = 0; i < books.size(); i++) {

                    cout << i + 1
                         << ". "
                         << books[i]
                         << endl;
                }

                break;
        }

    } while(choice != 0);

    return 0;
}
