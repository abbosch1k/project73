#include <iostream>
using namespace std;

int main() {

    int score = 0;
    int answer;

    cout << "What is 5 + 5?\n";
    cin >> answer;

    if(answer == 10)
        score++;

    cout << "What is 7 * 2?\n";
    cin >> answer;

    if(answer == 14)
        score++;

    cout << "Score: "
         << score
         << "/2\n";

    return 0;
}
