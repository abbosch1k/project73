#include <iostream>
#include <unistd.h>
using namespace std;

int main() {

    for(int i = 5; i >= 0; i--) {
        cout << i << endl;
        sleep(1);
    }

    cout << "Time's up!";
}
