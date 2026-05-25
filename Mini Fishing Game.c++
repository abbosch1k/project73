#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {

    srand(time(0));

    int fish=rand()%2;

    if(fish==1)
        cout << "Fish Caught!";
    else
        cout << "Nothing";
}
