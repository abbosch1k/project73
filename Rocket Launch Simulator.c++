#include <iostream>
using namespace std;

int main() {

    int fuel;

    cout << "Enter fuel amount: ";
    cin >> fuel;

    if(fuel >= 100) {

        cout << "Starting countdown...\n";

        for(int i = 10; i >= 0; i--) {
            cout << i << endl;
        }

        cout << "🚀 ROCKET LAUNCHED!";
    }
    else {

        cout << "Not enough fuel!";
    }

    return 0;
}
