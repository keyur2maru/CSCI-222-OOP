#include<iostream>

using namespace std;

class Person {
private:
    int weight;
public:
    Person(int x = 0) {
        weight = x;
    }

    Person addWeight(Person p2) {
        Person temp;
        temp.weight = weight + p2.weight;
        return temp;
    }

    void printValue() {
        cout << "Weight is " << weight << endl;
    }

    Person operator+ (Person p2) {              // operator overloading
        Person temp;
        temp.weight = weight + p2.weight;
        return temp.weight;
    }
};

int main() {
    Person total;

    Person person1(110);
    Person person2(100);

    total.printValue();                 // print default value

    total = person1.addWeight(person2);     //add user-defined data type using addWeight function
    total.printValue();

    total = person1 + person2;      //add user-defined data type using operator overloading
    total.printValue();

    return 0;
}