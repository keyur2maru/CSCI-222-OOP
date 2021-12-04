#include<iostream>
#include<string>

using namespace std;

class Manager {
private:
    int rate, hours;
public:
    string name;

    Manager() {
    name = "NULL";
    rate = 0;
    hours = 0;
    }
    Manager(string name, int rate, int hours) {
        this -> name = name;
        this -> rate = rate;
        this -> hours = hours;
    }

    virtual void setName(string name) {
        name = "NULL";
    }
    string getName() {
        return name;
    }
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
    int getSalary() {
        return (0.15 + rate)  * hours;
    }

    void getData() {
        cout << "Name : " << getName() << endl;
        cout << "Rate : $" << getRate() << endl;
        cout << "Hours : " << getHours() << endl;
        cout << "Salary : " << getSalary() << endl;
    }

    virtual ~Manager() {                                                                        //virtual destructor
        cout << "Manager class destroyed" << endl;
    }
};

class Employee : public Manager {
private:
    string title;
    Manager *ptr;                                                                               // pointer to manager class
public:
    Employee() {                                                                                // Default or Non-parameterized Constructor
        ptr = new Manager();
        setName("NULL");
        title = "Null";
      //setRate(0);
        ptr -> setRate(0);
      //setHours(0);
        ptr -> setHours(0);
    }

    Employee(string name, string title, int rate, int hours) {                                  // Parameterized Constructor
        ptr = new Manager();
        setName(name);
        this -> title = title;
        ptr -> setRate(rate);
        ptr -> setHours(hours);
    }
    void setName(string name) {
        this -> name = name;
    }

    void setRate(int rate) {
        setRate(rate);
    }
    int getRate() {
        return ptr -> getRate();
        delete ptr;
    }
    void setHours(int hours) {
        ptr -> setHours(hours);
    }
    int getHours() {
        return ptr -> getRate();
    }
    int getSalary() {
        return ptr -> getRate() * ptr -> getHours();
    }

    void getData() {
        cout << "Name : " << name << endl;
        cout << "Title : " << title << endl;
        cout << "Rate : $" << ptr -> getRate() << endl;
        cout << "Hours : " << ptr -> getHours() << endl;
        cout << "Salary : " << ptr -> getSalary() << endl;
    }

    ~Employee() {                                                                                //destructor
    cout << "Derived class destroyed" << endl;
    }

};


int main() {
    Employee *employee_obj = new Employee();                                                    //derived class ptr derived class object
    Employee *employee_obj2 = new Employee("Keyur", "Developer", 80, 40);

    cout << "Default Constructor using base class ptr and base class obj:" << endl;
    employee_obj -> getData();                                                                  //getData() using default constructor
    cout << "Parameterized Constructor with base class ptr and base class obj:" << endl;
    employee_obj2 -> getData();                                                                 //getData() using parameterized constructor

    Manager *manager_obj1 = new Employee();                                                     //base class ptr derived class object
    Manager *manager_obj2 = new Manager("John", 120, 40);                       //base class ptr base class obj

    cout << "Default Constructor using base class ptr and derived class obj:" << endl;
    manager_obj1 -> getData();
    cout << "Parameterized Constructor with base class ptr and base class obj:" << endl;
    manager_obj2 -> getData();

    Manager *test;
    test = new Employee();
    test -> setName("Pointers");                                                             //calling derived class setName func because it is setName is virtual at base
    test -> getData();
    delete employee_obj;                                                                        //free up memory
    delete employee_obj2;
    delete manager_obj1;
    delete manager_obj2;
    delete test;

}
