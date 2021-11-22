#include<iostream>
#include<array>
using namespace std;

int main() {
    array<int, 5> arr; // or arr[5] = { 0 };

    for (int i = 0; i < 5; i++) {
        cout << "Enter value for index " << i << " : " << endl;
        cin >> arr[i];
    }

    cout << "Traverse the array:" << endl;
    for (int i = 0; i < arr.size(); i++) { // or int len = sizeof(arr)/sizeof(arr[0]);
        cout << arr[i] << endl;
    }

    int min = arr[0];
    int max = arr[0];
    for (int i = 1; i < 5; i++) {
        if (min > arr[i]) {
            min = arr[i];
        }
        if (max < arr[i]) {
            max = arr[i];
        }
    }
    cout << "Minimum value in Array is : " << min << endl;
    cout << "Maximum value in Array is : " << max << endl;
    return 0;
}