#include<iostream>
#include<string>

using namespace std;

class Person {
private:
    string name;
public:
    Person(string name_a = "Null") {                //overloaded constructor
        name = name_a;
    }

    void getName() {
        cout << "Name: " << name << endl;
    }

    void getName(string gender) {                    //overloaded function
        cout << "Name: " << name << endl;
        cout << "Gender: " << gender << endl;

    }
};

int main() {
    Person p1;
    Person p2("Keyur");         //constructor overloading

    p1.getName();
    p2.getName();
    p2.getName("Male");             //function overloading

}