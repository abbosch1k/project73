#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {

    srand(time(0));

    int food=rand()%3;

    if(food==0)
        cout << "Pizza";

    if(food==1)
        cout << "Burger";

    if(food==2)
        cout << "Hotdog";
}
