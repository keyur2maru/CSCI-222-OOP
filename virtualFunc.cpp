#include <iostream>

using namespace std;

class Base {
public:
virtual void show() {                                               //virtual function for late/dynamic binding
    cout << "This is base class" << endl;
}
};

class Derived1 : public Base {
public:
    void show() {
        cout << "This is derived 1 class" << endl;
    }
};

class Derived2 : public Base {
public:
    void show() {
        cout << "This is derived 2 class" << endl;
    }
};



int main() {
    Base *ptr;                      //pointer to base class
    Derived1 d;                     //object of derived class
    ptr = &d;                       //pointer point to address of the object d created on static memory
    ptr -> show();
    ptr = new Derived2();           //pointer points to the address of the object of Derived2 created on dynamic memory
    ptr -> show();
    return 0;
}