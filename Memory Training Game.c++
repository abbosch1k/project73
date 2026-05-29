#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {

    srand(time(0));

    int secret = rand() % 900 + 100;
    int answer;

    cout << "Remember this number: " << secret << endl;
    cout << "Press 1 when ready...";
    cin >> answer;

    system("cls");

    cout << "Enter the number: ";
    cin >> answer;

    if(answer == secret)
        cout << "Correct! Excellent memory!";
    else
        cout << "Wrong! Number was " << secret;

    return 0;
}
