#include <iostream>
#include <string>

using namespace std;

class Brand {
private:
    string name;
public:
    void setBrand (string n) {
        name = n;
    }
    string getBrand() {
        return name;
    }
 };

class Model {
private:
    string modelNo;
    int price;
    Brand *ptr;                                                         //pointer of class Brand
public:
    Model(string name_a, string model_a, int price_a) {                 //constructor
        ptr = new Brand;                                               //allocate memory
        ptr -> setBrand(name_a);                                    //pointer to setBrand in class Brand
        modelNo = model_a;
        price = price_a;
    }

    void setBrand(string n) {
        ptr -> setBrand(n);
    }

    string getBrand() {
        return ptr -> getBrand();
    }

    void setModel(string m) {
        modelNo = m;
    };

    string getModel() {
        return modelNo;
    }

    void setPrice(int p) {
        price = p;
    }

    int getPrice() {
        return price;
    }

    ~Model() {                                              //destructor
        delete ptr;
    }

};

int main() {
    Model *m;
    m = new Model("Google", "Pixel", 800);              //dynamic memory allocation
    cout << "Brand name: " << m -> getBrand() << endl;
    cout << "Model no: " << m -> getModel() << endl;
    cout << "Price: " << m -> getPrice() << endl;
    m -> ~Model();

    Model abc("Apple", "iPhone", 1000);                //static memory allocation
    cout << "Brand name: " << abc.getBrand() << endl;
    cout << "Model no: " << abc.getModel() << endl;
    cout << "Price: " << abc.getPrice() << endl;

    return 0;
}