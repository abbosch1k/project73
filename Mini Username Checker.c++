#include <iostream>
using namespace std;

int main() {

    string user;

    cin >> user;

    if(user=="admin")
        cout << "Reserved Name";
    else
        cout << "Available";
}
