#include <iostream>
using namespace std;

int main() {

    int mark;
    cin >> mark;

    if(mark >= 90) cout << "A";
    else if(mark >= 75) cout << "B";
    else if(mark >= 50) cout << "C";
    else cout << "Fail";

    return 0;
}
