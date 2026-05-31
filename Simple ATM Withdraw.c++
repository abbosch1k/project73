#include <iostream>
using namespace std;

int main() {

    int balance = 1000;
    int w;

    cin >> w;

    if(w <= balance)
        cout << balance - w;
    else
        cout << "Error";
}
