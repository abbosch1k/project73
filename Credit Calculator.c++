#include <iostream>
using namespace std;

int main() {

    double loan, percent;
    int years;

    cout << "Loan Amount: ";
    cin >> loan;

    cout << "Interest (%): ";
    cin >> percent;

    cout << "Years: ";
    cin >> years;

    double total = loan + (loan * percent / 100 * years);

    cout << "\nTotal Payment: " << total << endl;

    return 0;
}
