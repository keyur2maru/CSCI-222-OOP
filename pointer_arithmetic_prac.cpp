#include <iostream>

int main() {
using namespace std;
    int a = 1025;
    int *int_ptr_to_a;
    int_ptr_to_a = &a;
    cout << "Value in a = " << a << " , Address of a = " << &a << endl << endl;     //a = 1025 &a = 0004
    cout << "Value in int_ptr_to_a = " << int_ptr_to_a << endl;                     //int_ptr = 0004
    cout << "Value in int_ptr_to_a+1 = " << (int_ptr_to_a+1) << endl;                     //int_ptr+1 = 0008

    cout << "Value @ address in *int_ptr_to_a = " << *int_ptr_to_a << endl;         //1025
    cout << "Value @ address in (*int_ptr_to_a+1) = " << *(int_ptr_to_a+1) << endl; //12132324341235 -> Garbage value

    cout << "Address of &int_ptr_to_a = " << &int_ptr_to_a << endl;                 //1010
    cout << "Address of (&int_ptr_to_a+1) = " << (&int_ptr_to_a+1) << endl;         //1014      //4 bytes increment


    char *char_ptr_to_a;
    char_ptr_to_a = (char*)int_ptr_to_a;
    printf("\nValue in char_ptr_to_a = %p\n", char_ptr_to_a);           //char_ptr = 0004
    printf("Value in (char_ptr_to_a+1) = %p\n", (char_ptr_to_a+1));    //char_ptr+1 = 0005    //1 byte increment

    cout << "Value @ address in *char_ptr_to_a = " << (int)*char_ptr_to_a << endl;          //value = 1 because read only 1 byte
    cout << "Value @ address in (*char_ptr_to_a+1) = " << ((int)*char_ptr_to_a+1) << endl;  //value = 2 because read next 1 byte

    cout << "Address of &char_ptr_to_a = " << &char_ptr_to_a << endl;           //2020
    cout << "Address of (&char_ptr_to_a+1) = " << (&char_ptr_to_a+1) << endl;           //2024 //size of pointer is always fixed for all compiler



    return 0;
}
