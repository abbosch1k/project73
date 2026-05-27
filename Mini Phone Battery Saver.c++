#include <iostream>
using namespace std;

int main() {

    int battery;

    cin >> battery;

    if(battery < 20)
        cout << "Battery Saver ON";
    else
        cout << "Battery Normal";
}
