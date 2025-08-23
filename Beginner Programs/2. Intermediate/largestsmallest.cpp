#include <iostream>
using namespace std;

int main() {

    int array[] = { 5, 8, 3, 4, 1, 9, 10, 7, 6, 2 };
    int smallest = array[0];
    int largest = array[0];
    int arrayLength = sizeof(array) / sizeof(array[0]);
    for (int i = 0; i <= arrayLength - 1; i++) {
        int x = array[i];
        int y = array[i];
        if (x <= smallest && array[(i + 1) != 10]) {
            smallest = x;
        };
        if (y >= largest && array[(i+1) != 10]) {
            largest = y;
        }
    }

    cout << smallest << endl;
    cout << largest << endl;


    return 0;
}