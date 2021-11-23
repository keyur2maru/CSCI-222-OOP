#include<iostream>
#include<string>

using namespace std;

class Employee {
private:
    string name, title;
    int rate, hours;
public:
    Employee() {                    // Default or Non-parameterized Constructor
        name = "Null";
        title = "Null";
        rate = 0;
        hours = 0;
    }

    Employee(string name_a, string title_a, int rate_a, int hours_a) {      // Parameterized Constructor
        name = name_a;
        title = title_a;
        rate = rate_a;
        hours = hours_a;
    }

    Employee(Employee &employee_obj2) {                //Copy Constructor
        name = employee_obj2.name;
        title = employee_obj2.title;
        rate = employee_obj2.rate;
        hours = employee_obj2.hours;
    }

    void getData() {
        cout << "Name : " << name << endl;
        cout << "Title : " << title << endl;
        cout << "Rate : $" << rate << endl;
        cout << "Hours : " << hours << endl;
    }
};

int main() {
    Employee employee_obj, employee_obj2("Keyur", "Developer", 80, 40), employee_obj3(employee_obj2);
    cout << "Default Constructor" << endl;
    employee_obj.getData();             //getData() using default constructor
    cout << "Parameterized Constructor" << endl;
    employee_obj2.getData();            //getData() using parameterized constructor
    cout << "Copy Constructor" << endl;
    employee_obj3.getData();            //getData() using copy constructor
}
