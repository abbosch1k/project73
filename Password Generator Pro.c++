#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {

    srand(time(0));

    string chars = "abcdefghijklmnopqrstuvwxyz0123456789";
    string pass = "";

    for(int i = 0; i < 8; i++) {

        int index = rand() % chars.size();
        pass += chars[index];
    }

    cout << "Password: " << pass;

    return 0;
}
