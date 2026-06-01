#include <iostream>
using namespace std;

int main() {

    string cars[5] = {
        "BMW",
        "Mercedes",
        "Toyota",
        "Tesla",
        "Kia"
    };

    bool sold[5] = {false};

    int choice;

    do {

        cout << "\n=== CAR DEALERSHIP ===\n";
        cout << "1. Show Cars\n";
        cout << "2. Buy Car\n";
        cout << "0. Exit\n";

        cin >> choice;

        switch(choice) {

            case 1:

                for(int i = 0; i < 5; i++) {

                    cout << i + 1
                         << ". "
                         << cars[i];

                    if(sold[i])
                        cout << " (Sold)";

                    cout << endl;
                }

                break;

            case 2:

                int car;

                cout << "Choose car number: ";
                cin >> car;

                if(car >= 1 && car <= 5) {

                    if(!sold[car - 1]) {

                        sold[car - 1] = true;

                        cout << "Car Purchased!\n";
                    }
                    else {

                        cout << "Already Sold!\n";
                    }
                }

                break;
        }

    } while(choice != 0);

    return 0;
}
