#include<iostream>
#include<string>
#include<list>

using namespace std;

struct Employee {
    string Name;
    int badgeID;

    Employee(string name, int badgeid) {
        Name = name;
        badgeID = badgeid;
    }

    bool operator==(const Employee &employee) const {
        return this->Name == employee.Name;
    }
};

struct EmployeeList {
    list<Employee> List;

    void operator+=(Employee &employee) {
        this->List.push_back(employee);
    }

    void operator-=(Employee &employee) {
        this->List.remove(employee);
    }
};

ostream &operator<<(ostream &COUT, Employee &employee) {
    COUT << employee.Name << endl;
    COUT << employee.badgeID << endl;
    return COUT;
}

ostream &operator<<(ostream &COUT, EmployeeList &employeelist) {
    for (Employee employee: employeelist.List) {
        COUT << employee << endl;
    }

    return COUT;
}

int main() {
    Employee e1 = Employee("Keyur", 007);
    Employee e2 = Employee("John", 004);

    EmployeeList list;

    cout << e1;
    cout << e1 << e2;
    list += e1;
    list += e2;
    cout << list;
    list -= e2;
    cout << list;


    return 0;
}