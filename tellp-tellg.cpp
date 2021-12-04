#include <iostream>
#include <fstream>

using namespace std;
int main() {
    ofstream fout;
    fout.open("my.txt");
    int pos = fout.tellp();
    cout << "Put pointer is at : " << pos << endl;

    fout << "Keyur";
    pos = fout.tellp();
    cout << "Put pointer is at : " << pos << endl;
    fout.close();

    ifstream fin;
    char ch;
    fin.open("my.txt");
    pos = fin.tellg();
    cout << "Get pointer is at : " << pos << endl;
    fin >> ch;

    while(!fin.eof()) {
        pos = fin.tellg();
        cout << "Get pointer is at : " <<  pos << " Value present : " << ch << endl;
        fin >> ch;

    }
    fin.close();
}