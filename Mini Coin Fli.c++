#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {

    srand(time(0));

    if(rand()%2==0)
        cout << "Heads";
    else
        cout << "Tails";
}
