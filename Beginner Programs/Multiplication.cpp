#include <iostream>
#include <string>
using namespace std;

int main() {
    cout << "App Opened: Multiplication Table Generator" << endl;
    int table;
    int amount;
    cout << "Which table would you like to show? "; cin >> table; 
    cout << "For up to which times table? "; cin >> amount;

    for (int i = 1; i < (amount + 1); i++)
        cout << table << " x " << i << " = " << table * i << endl;

}
