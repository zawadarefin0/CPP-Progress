#include <iostream>
#include <string>
#include <vector>
using namespace std;


int choice;
bool loggedIn = false;

void loginMenu();

int main() {
    cout << choice << endl;
    vector<int> ids = {};
    vector<string> usernames = {};
    vector<string> passwords = {};

    string registerUsername;
    string registerPassword;

    string loginUsername;
    string loginPassword;

    switch (choice) {
        case 1:
            cout << "Enter your username: "; cin >> registerUsername;
            cout << "Enter your password: "; cin >> registerPassword;

            usernames.push_back(registerUsername);
            passwords.push_back(registerPassword);

        
    }
    loginMenu();
}

void loginMenu() {
    if (loggedIn == false) {
        cout << "You are not logged in!" << endl;
        cout << "1. Register \n2. Login \n3. Forgot Password" << endl; cin >> choice;
    } else {
        cout << "You are already logged in!" << endl;
    }
};