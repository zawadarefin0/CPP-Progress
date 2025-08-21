#include <iostream>
#include <string>
using namespace std;


int main() {
    cout << "App Opened: Simple Calculator" << endl;
    
    int x, y, op;

    cout << "x: ";
    cin >> x;
    cout << "Operator? \n";
    cout << " 1. Add \n 2. Subtract \n 3. Multiply \n 4. Divide" << endl;
    cout << " > ";
    cin >> op;
    cout << "y: ";
    cin >> y;
    double div = static_cast<double>(x) / static_cast<double>(y);

    switch(op) {
        case 1:
            cout << x << " + " << y << " = " << x + y << endl;
            break;
        case 2:
            cout << x << " - " << y << " = " << x - y << endl;
            break;
        case 3:
            cout << x << " x " << y << " = " << x * y << endl;
            break;
        case 4:
            cout << x << " ÷ " << y << " = " << div << endl;
            break;
        }
    
    return 0;
}
