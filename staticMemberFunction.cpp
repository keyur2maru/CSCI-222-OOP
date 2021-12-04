#include <iostream>

using namespace std;
class Alpha {
private:
    int a, b;
public:
    Alpha() {
        a = 5;
        b = 10;
    }
    static int stat;

    static int getStat() {
        return ++stat;
    }
};
 int Alpha::stat = 0;

int main() {
    cout << Alpha::getStat() << endl;
    Alpha a1;
    Alpha a2;
    cout << Alpha::getStat() << endl;


    return 0;
}
