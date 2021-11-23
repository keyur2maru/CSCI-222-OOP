#include<iostream>

using namespace std;

class Person {
private:
     int age;
public:
    Person(int a = 0) {             //default constructor
        age = a;
    }
    void operator ++ (int) {        //post-increment operator overloading
        age++;
    }
     void getAge();                 //function declaration
};

int main() {
    Person p1(20);
    p1.getAge();
    p1++;
    p1.getAge();
    return 0;
}

void Person::getAge() {             //function definition outside its class using scope
    cout << age << endl;
}
