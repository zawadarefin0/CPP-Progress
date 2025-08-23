#include <iostream> 
#include <string>
using namespace std;

int main() {
    cout << "App Opened: Temperature Converter" << endl;
    cout << "1. Celsius to Fahrenheit" << endl;
    cout << "2. Fahrenheit to Celsius" << endl;
    int choice;
    
    float temp;
    float newTemp;
    cout << "  > ";
    cin >> choice;

    switch (choice) {
        case 1:
            cout << "Temperature: ";
            cin >> temp;
            newTemp = (temp * 9/5) + 32;
            cout << temp << " celsius is " << newTemp << " fahrenheit." << endl;
            break;
        case 2:
            cout << "Temperature: ";
            cin >> temp;
            newTemp = (temp - 32) * 5/9;
            cout << temp << " fahrenheit is " << newTemp << " celsius." << endl;
            break;       
    }
}