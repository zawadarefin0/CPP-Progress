#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
using namespace std;

bool loggedIn = false;
int choice;

void loginMenu() {
    if (!loggedIn) {
        choice = 0;
        cout << "You are not logged in!" << endl;
        cout << "1. Register \n2. Login \n3. Forgot Password" << endl; cin >> choice;
    } else {
        cout << "You are already logged in!" << endl;
    }
};

void mainMenu() {
    cout << "This is the main menu" << endl;
}


int main() {
    // system("clear");
    vector<string> usernames = {};
    vector<string> passwords = {};

    string registerUsername;
    string registerPassword;

    string loginUsername;
    string loginPassword;
    

    while (true) {

        if (!loggedIn) {
            loginMenu();
        } else {
            mainMenu();
            break;
        }
    }

    
        switch (choice) {
        case 1:
            // system("clear");
            cout << "Enter your username: "; cin >> registerUsername;
            cout << "Enter your password: "; cin >> registerPassword;

            usernames.push_back(registerUsername);
            passwords.push_back(registerPassword);

            // system("clear");
            cout << "Account registration successful." << endl;
            loginMenu();
            break;
            

        case 2:
            // system("clear");
            cout << "Enter your username: "; cin >> loginUsername;
            cout << "Enter your password: "; cin >> loginPassword;

            
            for (int i = 0; i <= (usernames.size() - 1); i++) {
                cout << usernames.size() - 1 << endl;
                if (loginUsername == usernames[i] && loginPassword == passwords[i]) {
                    cout << "i = " << i << endl << "usernames[i] = " << usernames[i] << endl << "passwords[i] = " << passwords[i] << endl;
                    loggedIn = true;
                    // system("clear");
                    cout << "You have successfully logged in!" << endl << endl;
                    mainMenu();
                    break;
                }
                    
            }

            cout << "You have entered your credentials incorrectly." << endl << endl;
            break;

            }
    
        }
