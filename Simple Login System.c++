#include <iostream>
using namespace std;

int main() {

    string user, pass;

    cout << "Login: ";
    cin >> user;

    cout << "Password: ";
    cin >> pass;

    if(user == "admin" && pass == "1234")
        cout << "Access Granted";
    else
        cout << "Access Denied";

    return 0;
}
