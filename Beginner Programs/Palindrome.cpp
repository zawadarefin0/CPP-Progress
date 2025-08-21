#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
    cout << "App Opened: Palindrome Checker" << endl;
    string word;
    string backwards;
    string lower;
    cout << "Enter your word: "; cin >> word;

    for (int i = word.length() - 1; i >= 0; i--) {
        backwards += tolower(word[i]);
    }
    for (int i = 0; i < word.length(); i++) {
        lower += tolower(word[i]);
    }

    if (lower == backwards) {
        cout << word << " is a palindrome!" << endl;
    } else if (lower != backwards) {
        cout << word << " is not a palindrome.." << endl;
    }

}