#include<iostream>
using namespace std;

int main() {
    int Number = 0;
    cout << "Enter a number to generate its table: " << endl;
    cin >> Number;

    cout << "Using For Loop: " << endl;
    for (int i  = 0; i <= 10; i++) {
        if (i == 0) {
            continue;  // using continue to jump out of iteration when i == 0;
        }
        cout << Number << " * " << i << " = " << Number * i << endl;
    }

    cout << "Using While Loop: " << endl;
    int i = 1;
    while (i <= 10) {
        cout << Number << " * " << i << " = " << Number * i << endl;
        i+=1;
    }

    cout << "Using Do-While Loop: " << endl;
    i = 1;
    do {
        cout << Number << " * " << i << " = " << Number * i << endl;
        i+=1;
    } while (i <=10);

    return 0;
}
