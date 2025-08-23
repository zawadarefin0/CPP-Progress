#include <iostream>
using namespace std;

int main() {

    int selection;

    cout << " 1. Grams to Kilograms \n 2. Kilograms to Grams" << endl << " > " ; cin >> selection;

    float g;
    float kg;

    if (selection == 1) {
        cout << "Enter value (g): "; cin >> g;
        float kg = g / 1000;
        cout << kg << "kg" << endl;
    } else if (selection == 2) {
        cout << "Enter value (kg): "; cin >> kg;
        float g = kg * 1000;
        cout << g << "g" << endl;
    }

}