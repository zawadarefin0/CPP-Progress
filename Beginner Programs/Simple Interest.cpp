#include <iostream> 
#include <string>
using namespace std;

int main() {
    cout << "App Opened: Simple Interest Calculator" << endl;
    float principal, rate, n;
    cout << "What is your principal amount? "; cin >> principal;
    cout << "What is your rate (%)? "; cin >> rate;
    cout << "What is the number of periods? "; cin >> n;
    
    rate = rate / 100;
    float interest = principal * rate * n;
    float total = principal + interest;
    char currency = '$';
    cout << "Your interest is: " << interest << currency << endl;
    cout << "The total you must pay is: " << total << currency << endl;
    
}