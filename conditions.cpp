#include<iostream>
using namespace std;

int main() {
    int marks = 0;

    cout << "Enter your marks out of 100: " << endl;
    cin >> marks;

    if (marks >= 90) {
        cout << "You scored A grade";
    } else if (marks >= 80) {
        cout << "You scored B grade";
    } else if (marks >= 70) {
        cout << "You scored C grade";
    } else if (marks >= 60) {
        cout << "You scored D grade";
    } else if (marks >= 0 && marks < 60) {
        cout << "You failed!";
    } else {
        cout << "Wrong input!";
    }

    switch (marks) {
        case 97:
            cout << endl << "Remark : Distinction!";
            break;
        case 98:
            cout << endl << "Remark : Remarkable!";
            break;
        case 99:
            cout << endl << "Remark : Outstanding!";
            break;
        case 100:
            cout << endl << "Remark : Excellent!";
            break;
    }
}
