#include <iostream>
#include <vector>
using namespace std;

struct Student {
    string name;
    int age;
    int grade;
};

int main() {
    vector<Student> students;

    int choice;

    do {
        cout << "\n=== Student Management System ===\n";
        cout << "1. Add Student\n";
        cout << "2. Show Students\n";
        cout << "3. Search Student\n";
        cout << "0. Exit\n";
        cout << "Choose: ";
        cin >> choice;

        switch(choice) {

            case 1: {
                Student s;

                cout << "Name: ";
                cin >> s.name;

                cout << "Age: ";
                cin >> s.age;

                cout << "Grade: ";
                cin >> s.grade;

                students.push_back(s);

                cout << "Student Added!\n";
                break;
            }

            case 2: {
                cout << "\n=== Students List ===\n";

                for(int i = 0; i < students.size(); i++) {
                    cout << i + 1 << ". "
                         << students[i].name
                         << " | Age: " << students[i].age
                         << " | Grade: " << students[i].grade
                         << endl;
                }

                break;
            }

            case 3: {
                string search;

                cout << "Enter name: ";
                cin >> search;

                for(int i = 0; i < students.size(); i++) {

                    if(students[i].name == search) {

                        cout << "Found: "
                             << students[i].name
                             << " Age: " << students[i].age
                             << " Grade: " << students[i].grade
                             << endl;
                    }
                }

                break;
            }

            case 0:
                cout << "Goodbye!\n";
                break;

            default:
                cout << "Invalid!\n";
        }

    } while(choice != 0);

    return 0;
}
