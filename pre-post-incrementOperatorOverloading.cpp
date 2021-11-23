#include<iostream>

using namespace std;

class Person {
private:
    int age;
public:
    Person(int a = 0) {
        age = a;
    }
    void operator ++ () {           //pre-increment operator overloading
        ++age;
    }
    void operator ++ (int) {        //post-increment operator overloading
        age++;
    }

    void getAge() {
        cout << age << endl;
    }
};

int main() {
    Person p1(20);
    ++p1;
    p1.getAge();
    p1++;
    p1.getAge();
    return 0;
}