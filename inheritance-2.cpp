#include<iostream>

using namespace std;

class rectangle {
public:
    int length, breadth;
    void area() {
        cout << "Area of Rectangle " << length * breadth << endl;
    }
};

class cuboid : public rectangle {
public:
    int height;
    void volume() {
        cout << "Volume of Cuboid " << length * breadth * height << endl;
    }
};

int main() {
    cuboid c;
    c.length = 10; c.breadth = 5; c.height = 4;

    c.area();
    c.volume();
}