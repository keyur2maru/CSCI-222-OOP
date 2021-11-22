#include<iostream>
#include<string>
using namespace std;

int main() {
    string firstName, lastName;
    string Address;

    cout << "Enter your City, zip code :" << endl;
    getline(cin, Address);
    cout << "Enter your first name :" << endl;
    cin >> firstName;
    cout << "Enter your last name :" << endl;
    cin >> lastName;

    string fullName = firstName + " " + lastName; // or string fullName = firstName.append(lastName);
    cout << "Full name: " << fullName << endl;
    cout << "Full name string length: " << fullName.length() << endl; // or fullName.size();
    cout << "City: " << Address << endl;
    return 0;
}