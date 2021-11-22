 #include<iostream>
#include<string>
using namespace std;

struct rearCamera { //double-nested
    int main;
    int wide;
    int tele;
};

struct camera {
    int frontCamera;
    rearCamera rearCamera;
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
    samsung.camera.frontCamera = 16;
    samsung.camera.rearCamera.main = 102;
    samsung.camera.rearCamera.tele = 16;
    samsung.camera.rearCamera.wide = 12;

    phone apple;
    apple.brand = "Apple";
    apple.model = "iPhone 14 Pro Max";
    apple.camera.frontCamera = 12;
    apple.camera.rearCamera.main = 16;
    apple.camera.rearCamera.tele = 12;
    apple.camera.rearCamera.wide = 12;

    cout << "Brand: " << samsung.brand << endl;
    cout << "Model: " << samsung.model << endl;
    cout << "Front Camera: " << samsung.camera.frontCamera << endl;
    cout << "Rear Main Camera: " << samsung.camera.rearCamera.main << endl;
    cout << "Rear Telephoto Camera: " << samsung.camera.rearCamera.tele << endl;
    cout << "Rear Wideangle Camera: " << samsung.camera.rearCamera.wide << endl;

    cout << endl << "Brand: " << apple.brand << endl;
    cout << "Model: " << apple.model << endl;
    cout << "Front Camera: " << apple.camera.frontCamera << endl;
    cout << "Rear Main Camera: " << apple.camera.rearCamera.main << endl;
    cout << "Rear Telephoto Camera: " << apple.camera.rearCamera.tele << endl;
    cout << "Rear Wideangle Camera: " << apple.camera.rearCamera.wide << endl;
    return 0;
}