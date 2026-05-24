#include <iostream>
using namespace std;

int main() {

    int day;

    cout << "1 Monday\n";
    cout << "2 Tuesday\n";
    cout << "3 Wednesday\n";

    cin >> day;

    switch(day) {

        case 1:
            cout << "Math, English, Physics";
            break;

        case 2:
            cout << "Biology, PE, History";
            break;

        case 3:
            cout << "Chemistry, IT, Art";
            break;
    }
}
