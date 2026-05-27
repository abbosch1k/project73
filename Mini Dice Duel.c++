#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {

    srand(time(0));

    int p1 = rand()%6+1;
    int p2 = rand()%6+1;

    cout << p1 << " vs "
         << p2;
}
