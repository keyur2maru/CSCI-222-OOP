#include<iostream>
#include<string>
using namespace std;

struct camera {
    int front;
    int rearMain;
    int rearWide;
    int rearTele;
};

struct phone {
    string brand;
    string model;
    camera camera; //nested structure
    int ROM;
};

int main() {
    phone samsung;
    samsung.brand = "Samsung";
    samsung.model = "S22 Ultra";
    samsung.camera.front = 16;
    samsung.camera.rearMain = 102;
    samsung.camera.rearTele = 16;
    samsung.camera.rearWide = 12;

    phone apple;
    apple.brand = "Apple";
    apple.model = "iPhone 14 Pro Max";
    apple.camera.front = 12;
    apple.camera.rearMain = 16;
    apple.camera.rearTele = 12;
    apple.camera.rearWide = 12;

    cout << "Brand: " << samsung.brand << endl;
    cout << "Model: " << samsung.model << endl;
    cout << "Front Camera: " << samsung.camera.front << endl;
    cout << "Rear Main Camera: " << samsung.camera.rearMain << endl;
    cout << "Rear Telephoto Camera: " << samsung.camera.rearTele << endl;
    cout << "Rear Wideangle Camera: " << samsung.camera.rearWide << endl;

    cout << endl << "Brand: " << apple.brand << endl;
    cout << "Model: " << apple.model << endl;
    cout << "Front Camera: " << apple.camera.front << endl;
    cout << "Rear Main Camera: " << apple.camera.rearMain << endl;
    cout << "Rear Telephoto Camera: " << apple.camera.rearTele << endl;
    cout << "Rear Wideangle Camera: " << apple.camera.rearWide << endl;
    return 0;
}