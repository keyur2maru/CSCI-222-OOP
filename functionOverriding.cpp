#include<iostream>

using namespace std;

class Animal {
public:
    void makeSound() {
        cout << "This is default sound" << endl;
    }
};

class Dog : public Animal {
public:
    void makeSound() {
        cout << "Woof Woof!" << endl;
    }
};

class Cat : public Animal {
public:
    void makeSound() {
        cout << "Meow Meow" << endl;
        Animal::makeSound();                    //calling default makeSound from base class Animal
    }
};

int main() {

    Animal a;
    Dog d;
    Cat c;

    a.makeSound();
    d.makeSound();
    c.makeSound();
	
	return 0;
}