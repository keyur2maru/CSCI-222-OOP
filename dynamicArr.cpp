#include <iostream>

using namespace std;

int main() {
    int size;
    cout << "Enter size: ";
    cin >> size;
    int *myArr = new int[size];

    for (int i = 0; i < size; i++) {
        cout << "Array[" << i << "] ";
        cin >> myArr[i];
    }
    for (int i = 0; i < size; i++) {
        cout << myArr[i] << " ";
    }

    delete[] myArr;
    myArr = NULL;

    int row, col;
    cout << endl << "enter row, cow: ";
    cin >> row >> col;
    int **array = new int*[row];

    for (int i = 0; i < row; i++) {
        array[i] = new int[col];
    }
    array[1][2] = 50;

    cout << "array[1][2]" << array[1][2] << endl;
}