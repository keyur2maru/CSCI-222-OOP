#include<iostream>
#include<string>
using namespace std;
                                                    //Inheritance simple example
class Employee {                                    //parent or base class
private:
    string name;
public:
    void setName( string x) {
        name = x;
    }
    void getName() {
        cout << "Name is : " << name << endl;
    }
};

class Manager : public Employee {                   //child or derived class
private:
    int yearsOfExperience;
public:

    void setExperience( int ep ) {
        yearsOfExperience = ep;
    }

    void getExperience() {
        cout << "Experience in years: " << yearsOfExperience << endl;
    }
};

int main() {
    Manager m;
    m.setName("Keyur");
    m.setExperience(5);

    m.getName();
    m.getExperience();
    return 0;
}