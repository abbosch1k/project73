#include <iostream>
using namespace std;

int main() {

    int item;

    cout << "1 Phone\n2 Laptop\n";
    cin >> item;

    if(item == 1)
        cout << "Phone Added";
    else
        cout << "Laptop Added";
}
