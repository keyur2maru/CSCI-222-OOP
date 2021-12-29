#include <iostream>
#include <fstream>

using namespace std;
int main() {
    ifstream fin;
    char ch[10];
    fin.open("my.txt");
    for (int i = 0; i < 10; i++) {
        ch[i] = 0;
    }
    fin.seekg(-3, ios_base::end);
    fin.read(ch,3);

    for (int i = 0; ch[i]!=0; i++) {
        cout << ch[i];
    }
    fin.close();

    ofstream fout;
    char a[5] = "Maru";
    fout.open("my.txt", ios::in);           //ios::in -  allows input (read operations) from a stream
    fout.seekp(3,ios_base::beg);
    fout.write(a,5);
    fout.close();
}