#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {

    srand(time(0));

    int w=rand()%3;

    if(w==0)
        cout << "Sword";

    if(w==1)
        cout << "Bow";

    if(w==2)
        cout << "Gun";
}
