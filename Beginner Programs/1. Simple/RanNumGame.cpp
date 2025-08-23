#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

int main() {
    cout << "App Opened: Random Number Game" << endl;
    srand(time(0));
    
    int randomNumber = rand() % 101;
    cout << randomNumber << endl;
    int input;

    while (input != randomNumber) {
        cout << "Enter your guess: "; cin >> input;
        if (input > randomNumber) {
            cout << "Lower." << endl;
        } else if (input < randomNumber) {
            cout << "Higher" << endl;
        }
    }

    cout << "You guessed the number!" << endl;
    return 0;
}
