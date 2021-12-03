#include <iostream>

using namespace std;

class Base {                                                 //Abstract class because it has a pure virtual function
public:
virtual void show() = 0;                                      //virtual function for late/dynamic binding
};                                                            // = 0 because then it makes it a pure virtual function

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
    ptr = new Derived1;
    ptr -> show();
    Derived1 d;                     //object of derived class
    ptr = &d;                       //pointer point to address of the object d created on static memory
    ptr -> show();
    ptr = new Derived2();           //pointer points to the address of the object of Derived2 created on dynamic memory
    ptr -> show();
    return 0;
}