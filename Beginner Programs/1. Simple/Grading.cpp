#include <iostream>
using namespace std;

int main() {
    cout << "App Opened: Student Marks" << endl;

    int mark;
    std::string grade;
    cout << "Enter your mark: "; cin >> mark;

    if (mark > 85) {
        grade = "A";
    } else if (mark > 70 ) {
        grade = "B";
    } else if (mark > 50) {
        grade = "C";
    } else {
        grade = "F";
    }

    cout << "Grade: " << grade << endl;
}