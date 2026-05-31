#include <iostream>
#include <vector>
using namespace std;

int main() {

    vector<string> tasks;
    int choice;
    string task;

    do {

        cout << "\n=== TASK MANAGER ===\n";
        cout << "1. Add Task\n";
        cout << "2. Show Tasks\n";
        cout << "0. Exit\n";
        cin >> choice;

        switch(choice) {

            case 1:
                cout << "Task: ";
                cin >> task;
                tasks.push_back(task);
                break;

            case 2:
                for(string t : tasks)
                    cout << "- " << t << endl;
                break;
        }

    } while(choice != 0);

    return 0;
}
