#include<iostream>
#include<string>

using namespace std;
class Manager {
private:
    int rate, hours;
public:
    void setRate(int rate) {
        this -> rate = rate;
    }
    int getRate() {
        return rate;
    }
    void setHours(int hours) {
        this -> hours = hours;
    }
    int getHours() {
        return hours;
    }
};

class Employee {
private:
    string name, title;
    Manager *ptr;
public:
    Employee() {                    // Default or Non-parameterized Constructor
        ptr = new Manager();
        name = "Null";
        title = "Null";
        ptr -> setRate(0);
        ptr -> setHours(0);
    }

    Employee(string name, string title, int rate, int hours) {      // Parameterized Constructor
        ptr = new Manager();
        this -> name = name;
        this -> title = title;
        ptr -> setRate(rate);
        ptr -> setHours(hours);
    }

    void setRate(int rate_a) {
        ptr -> setRate(rate_a);
    }
    int getRate() {
        return ptr -> getRate();
    }
    void setHours(int hours_a) {
        ptr -> setHours(hours_a);
    }
    int getHours() {
        return ptr -> getRate();
    }

    void getData() {
        cout << "Name : " << name << endl;
        cout << "Title : " << title << endl;
        cout << "Rate : $" << ptr -> getRate() << endl;
        cout << "Hours : " << ptr -> getHours() << endl;
    }

 //   ~Employee() {
 //    delete ptr;
 //   }

};


int main() {
    Employee *employee_obj;
    Employee *employee_obj2;
    Employee employee_obj3;
    employee_obj = new Employee();
    employee_obj2 = new Employee("Keyur", "Developer", 80, 40);
    employee_obj3 = Employee("John", "Sr. Software Developer", 100, 40);
    cout << "Default Constructor" << endl;
    employee_obj -> getData();             //getData() using default constructor
    cout << "Parameterized Constructor" << endl;
    employee_obj2 -> getData();            //getData() using parameterized constructor

    employee_obj3.getData();
    delete employee_obj;
    delete employee_obj2;



}
