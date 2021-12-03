#include <iostream>
#include <string>

using namespace std;
const int SIZE = 5;                                 //need const so we can pass array size as const for static memory allocation

void swap (int *x, int *y);
void swapByReference (int &x, int &y);
void printArray (int *ptr);

class Test {
private:
    string name;
public:
    void setName(string n) {
        name = n;
    }
    string getName() {
        return name;
    }
};

int main() {
    int *ptr = new int(10);
    cout << "address stored to int = 10 in the pointer (ptr): " << ptr << endl;
    cout << "accessing the value stored at address it is pointing to (*ptr): " << *ptr << endl;         //dereferencing
    cout << "address of the pointer itself (&ptr): " << &ptr << endl;
    cout << "printing same address of the int = 10 (&*ptr): << " << &*ptr << endl << endl;

    int a = 5;
    int *i = new int(a);            //if want without dynamic memory int *i = &a;

    cout <<"int a = 5," << endl << "ptr = &a;" << endl;
    cout << "cout << a: " << a << endl;
    cout << "cout << &a: " << &a << endl;

    cout << "cout << ptr: " << i << endl;
    cout << "cout << *ptr: " << *i << endl;
    cout << "cout << &ptr: " << &i << endl;

    int b = 10;
    cout << endl << "Perform swap operation using call by address" << endl;
    cout << "Value of var a before swap: " << a << endl;
    cout << "Value of var b before swap: " << b << endl;

    swap(&a,&b);        //call by address: send address for a and b to swap()
    cout << "Value of var a before swap: " << a << endl;
    cout << "Value of var b after swap: " << b << endl << endl;

    int k = 22;
    int &j = k;         //j is a reference variable of k meaning it shares the same memory space with k

    cout << "Perform swap operation using call by reference" << endl;
    cout << "Value of var a before swap: " << a << endl;
    cout << "Value of var b before swap: " << b << endl;

    swapByReference(a,b);        //call by reference: send reference of a and b to swapByReference()
    cout << "Value of var a before swap: " << a << endl;
    cout << "Value of var b after swap: " << b << endl << endl;

    ptr = new int[5];                       //dynamic memory allocation
    ptr[0] = 44;
    ptr[1] = 4;
    cout << "ptr[0] " << ptr[0] << endl;
    cout << "&ptr[0] " << &ptr[0] << endl;
    cout << "ptr " << ptr << endl;
    cout << "*ptr " << *ptr << endl;
    cout << "&ptr " << &ptr << endl;

    cout << endl;
    for (int i = 0; i < 5; i++) {           //dma so size is dynamic
        ptr[i] = (i*2) + 2;
    }
    printArray(ptr);

    delete[] ptr;
    delete i;
    ptr = NULL;
    i = NULL;

    int myArr[SIZE] = {10,20,30,40,50};         //size static because no dma using new
    cout << endl << endl;
    printArray(myArr);


    Test *t;
    t = new Test;
    t -> setName("Keyur");
    cout << "Name is : " << t -> getName() << endl;


    system("PAUSE");
    return 0;
}

void printArray (int *ptr) {
    for (int i = 0; i < SIZE; i++ ) {
        cout << "Value at index: [ " << i << " ] = " << *ptr++ << endl;     //*ptr = dereferenced || ptr = memory location
    }
}

void swap (int *x, int *y) {            //call by address: perform swap using obtained actual addresses
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

void swapByReference (int &x, int &y) {         //call by reference: perform swap using references
    int temp;
    temp = x;
    x = y;
    y = temp;
}