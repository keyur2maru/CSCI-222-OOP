#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> vtr(10);
    vector<float> z;
    for (int i = 0; i < vtr.size(); ++i) {
        vtr[i] = i + 1;
    }

    for (int i = 0; i < vtr.size(); i++) {
        cout << "vtr[" << i <<"] = " << vtr[i] << "  ";
    }
    cout << endl;
    z.push_back(vtr[0]);
    z.push_back(vtr[3]);
    z.push_back(vtr[4]);
    z.push_back(5.1);
    cout << z.size() << endl;
    cout << z[3] << endl;

    for (float i = 0; i < z.size(); i++) {
        cout << "z[" << i <<"] = " << z[i] << "  ";
    }
    cout << endl;

    int b = 0;
    for (int &a : vtr) {                        //pass address so can change values
        a = a * 2;
        cout << "vtr[" << b++  <<"] = " << a << "  ";
    }
    cout << endl;

    b = 0;
    for (int a : vtr) {                         //pass value || better way
        cout << "vtr[" << b++  <<"] = " << a << "  ";
    }
    cout << endl;

    cout << vtr.size() << endl;

    cout <<"vector<int>::iterator it" << endl;
    vector<int>::iterator it;                                           //need to define data type without auto and also call iterator func
    b = 0;
    for (it = vtr.begin(); it != vtr.end(); it++) {
        cout << "vtr[" << b++  <<"] = " << *it << "  ";
    }
    cout << endl;

    cout <<"auto itAuto = vtr.begin();" << endl;
    b = 0;
    for (auto itAuto = vtr.begin(); itAuto != vtr.end(); itAuto++) {        //auto determines data type for vector and calls iterator func
        cout << "vtr[" << b++  <<"] = " << *itAuto << "  ";
    }
    cout << endl;

    vtr.pop_back();
    cout <<"vtr.pop_back();" << endl;
    b = 0;
    for (int a : vtr) {
        cout << "vtr[" << b++  << "] = " << a << " ";
    }
    cout << endl;

    cout << "vtr[4] = vtr[vtr.size() - 1];" << endl << "vtr.pop_back();" << endl;
    vtr[4] = vtr[vtr.size() - 1];               //REMOVE ELEMENT FROM THE ANYWHERE AND REPLACE IT
    vtr.pop_back();                             // WITH ELEMENT FROM FINAL INDEX - 1 BECAUSE LAST IS ALWAYS EMPTY
    b = 0;
    for (int a : vtr) {
        cout << "vtr[" << b++  << "] = " << a << " ";
    }
    cout << endl;

    cout << "vtr.erase(vtr.begin() + 1);" << endl;          //REMOVE ELEMENT FROM ANYWHERE MAINTAINING ORDER
    vtr.erase(vtr.begin() + 1);
    b = 0;
    for (int a : vtr) {
        cout << "vtr[" << b++  << "] = " << a << " ";
    }
    cout << endl;

    cout << "for (int i = 3; i < vtr.size() - 1; i++)\nvtr[i] = vtr[i+1];\nvtr.pop_back();" << endl;
    for (int i = 3; i < vtr.size() - 1; i++) {               //REMOVE ELEMENT FROM ANYWHERE USING FOR LOOP MAINTAINING ORDER
        vtr[i] = vtr[i+1];
    }
    vtr.pop_back();
    b = 0;
    for (int a : vtr) {
        cout << "vtr[" << b++  << "] = " << a << " ";
    }
    cout << endl;


    return 0;
}