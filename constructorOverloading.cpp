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
};

int main() {
    Person p1;
    Person p2("Keyur");         //constructor overloading

    p1.getName();
    p2.getName();

}