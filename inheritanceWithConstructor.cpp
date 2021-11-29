#include<iostream>

using namespace std;

class Animal {
public:
    int count;
    Animal() {
        cout << "Default constructor base class" << endl;               //show base default constructor first always if calling
    }                                                          //derived class

    Animal(int a) {                                             //only show base parameterized constructor if calling
        cout << "Parameterized constructor base class " << a << endl;    //from the base class itself
    }
};

class Dog : public Animal {
public:

    Dog() : Animal() {
    cout << "Default constructor derived class" << endl;            //show derived default constructor after base default constructor
 }

    Dog(int a) : Animal (a) {
    cout << "Parameterized constructor derived class " << a << endl;     //show derived parameterized constructor
}
};

int main() {
    Dog d1;
    Dog d2(10);

    return 0;
    }
