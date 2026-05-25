#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {

    srand(time(0));

    int loot=rand()%3;

    if(loot==0)
        cout << "Gold";

    if(loot==1)
        cout << "Diamond";

    if(loot==2)
        cout << "Potion";
}
