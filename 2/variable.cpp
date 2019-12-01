//
// Created by 31579 on 2019/11/17.
//
#include <iostream>

using namespace std;

int main() {
    int a = 2;
    int  &ref = a;
    int  r = a;
    cout<<ref<<endl;
    cout<<r<<endl;
    int test, &ll = test;
    int &t = test;
    test = 1;
    ll = 10;

    cout<<test<<endl;
    cout<<ll<<endl;



//    std::string book("This a book string!!");
//    std::string book1{"This a book string!!"};
//    std::string book2 = "This a book string!!";
//    std::string book3 = {"This a book string!!"};
//    std::string book4;
//    std::cout << book4 << std::endl;
    return 0;
}