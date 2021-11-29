#include<iostream>

using namespace std;

class Base {
private:
    int pvt = 1;
protected:
    int prot = 2;
public:
    int pub = 3;

    int getPvt() {
        return pvt;
    }
};

class PublicDerived : public Base {
public:
    int getProt() {
        return prot;
    }
};

class ProtectedDerived : protected Base {
public:
    int getProt() {
        return prot;
    }

    int getPub() {
        return pub;
    }
};

class PrivateDerived : private Base {
public:
    int getProt() {
        return prot;
    }
    int getPub() {
        return pub;
    }
};

int main() {
    PublicDerived pubDerived;
    ProtectedDerived protDerived;
    PrivateDerived pvtDerived;

    cout << "Public Derived:" << endl;
    cout << "Private = " << pubDerived.getPvt() << endl;
    cout << "Protected = " << pubDerived.getProt() << endl;
    cout << "Public = " << pubDerived.pub << endl;

    cout << "Protected Derived: " << endl;
    cout << "Private cannot be accessed because it is private at base" << endl;
    cout << "Protected = " << protDerived.getProt() << endl;
    cout << "Public = " << protDerived.getPub() << endl;

    cout << "Private Derived: " << endl;
    cout << "Private cannot be accessed because it is private at base" << endl;
    cout << "Protected = " << pvtDerived.getProt() << endl;
    cout << "Public = " << pvtDerived.getPub() << endl;

    return 0;
}