#include <iostream>
#include <fstream>

using namespace std;
int main() {
    ofstream fout;
    fout.open("my.txt");
    fout << "Keyur";
    fout.close();

    ifstream fin;
    char ch;
    fin.open("my.txt");
    fin >> ch;
    while(!fin.eof()) {
        cout << ch;
        fin >> ch;
    }
    fin.close();
}