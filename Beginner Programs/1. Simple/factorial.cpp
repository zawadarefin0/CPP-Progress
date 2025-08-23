#include <iostream>
#include <string>
using namespace std;

int main() {
    cout << "App Opened: Factorial Calculator" << endl;
     int number;
     
     cout << "Enter your number: "; cin >> number;
     int original = number;

    int result;
    int i = original;
    while (i != 1) {
        result = original * (i - 1);
        original = result;
        i = i - 1;
    }

    cout << number << "!" << " = " << result << endl;
}