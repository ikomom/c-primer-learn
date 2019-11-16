#include <iostream>

using namespace std;

int main() {
    char a = 'a';
    short st = 11111;
    int  b = (int) a;
    bool is = false;
    int  isInt = (int) is;
    string c = "bbb";

    cout << b << c <<endl;

    cout << sizeof(a)  <<endl;
    cout << sizeof(st)  <<endl;
    cout << sizeof(b)  <<endl;
    cout << isInt <<endl;

    return 0;
}