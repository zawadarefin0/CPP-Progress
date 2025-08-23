#include <iostream>
#include <string>
using namespace std;

int main() {
    cout << "Enter your number: ";

    int num;

    cin >> num;

    if (num % 2 == 0) {
        cout << "This number is even" << endl;
    } else {
        cout << "This number is odd" << endl;
    }
    return 0;
}