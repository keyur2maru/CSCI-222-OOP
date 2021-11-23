#include<iostream>
#include<string>

using namespace std;

class Person {
private:
    string name;
public:
    void getDetails(string name) {                                 //overloaded function
        cout << "Name: " << name << endl;
    }

    void getDetails(string name, string gender) {                    //overloaded function
        cout << "Name: " << name << endl;
        cout << "Gender: " << gender << endl;

    }
};

int main() {
    Person p1;
    p1.getDetails("Keyur");                 //function overloading
    p1.getDetails("John", "Male");


}