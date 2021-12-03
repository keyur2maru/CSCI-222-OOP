#include <iostream>
#include <string>

using namespace std;

class Manager {
private:
    int yearsOfExp;
public:
    void setYearsOfExp(int yearsOfExp) {
        this->yearsOfExp = yearsOfExp;
    }                                                       // The 'this' pointer is used to retrieve the object's x
                                                            // hidden by the local variable 'x'
    int getYearOfExp()
    {
        return yearsOfExp;
    }
};

class Employee {
private:
    int age, income;
    string name;
    Manager e;
    bool isActive;
public:
    Employee &setName (string name) {
        this -> name = name;
        return *this;
    }

    string getName() {
        return name;
    }

    Employee &setActive (bool isActive) {
        this -> isActive = isActive;
        return *this;
    }

    bool getActive() {
        return isActive;
    }

    void setAge(int age) {
        this -> age = age;
    }
    int getAge() {
        return age;
    }
    void setIncome(int income) {
        this -> income = income;
    }
    int getIncome() {
        return income;
    }

    void setYearsOfExp(int yearsOfExp) {
        this -> e.setYearsOfExp(yearsOfExp);
    }

    int getYearsOfExp() {
        return this -> e.getYearOfExp();
    }
};

int main() {
    Employee *p;
    //p = new Employee("Keyur", 1);
    p = new Employee;
    p -> setName("Keyur").setActive(true);     //chained function call
    p -> setAge(22);
    p -> setIncome(50000);
    p -> setYearsOfExp(5);

    cout << "Name : " << p -> getName() << endl;
    cout << "Age : " << p -> getAge() << endl;
    cout << "Income : " << p -> getIncome() << endl;
    cout << "Experience : " << p -> getYearsOfExp() << endl;
    cout << "isActive : " << p -> getActive() << endl;

    return 0;
}