#include <iostream>

using namespace std;

class A {
private:
    int a1;
public:
    A(int arg = 0) {
        a1 = arg;
    }
    friend void FriendFunc();

    friend class B;
};

class B {
private:
    int b1;
public:
    B(int arg = 0) {
        b1 = arg;
    }

    int sum(int s) {
        A a_obj(s);
        int sum = a_obj.a1 + b1;
        return sum;
    }

    friend void FriendFunc();
};

 void FriendFunc() {
    A a_obj(10);
    B b_obj(14);
    int x = a_obj.a1 + b_obj.b1;
    cout << "sum = " << x << endl;
}

int main() {
    FriendFunc();
    B b_obj(5);
    cout << "sum = " << b_obj.sum(10) << endl;
    return 0;
}