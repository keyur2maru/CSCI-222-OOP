#include<iostream>

using namespace std;

class house {
private:
    int length, breadth; //member-variables

public:
    void setData(int x, int y) {
        length = x;
        breadth = y;
    }
    void area() {
        cout << "Area of the house: " << length * breadth;
    }
};

int main() {
    house h1;
    h1.setData(200, 300);
    h1.area();
    return 0;
}