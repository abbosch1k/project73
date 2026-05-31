#include <iostream>
using namespace std;

int main() {

    int usd;
    float rate = 12500;

    cout << "Enter USD: ";
    cin >> usd;

    cout << "UZS: " << usd * rate;

    return 0;
}
