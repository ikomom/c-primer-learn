//
// Created by 31579 on 2019/12/1.
//

#include <iostream>
//#include <cstdlib>

using namespace std;

void base() {
    int i = 1;
    double d1 = 99;
    int *a = &i;

    int array[5] = {10, 2, 3};
    int *target = &array[1];

    int *np = nullptr;
    int *p2 = 0;
    int *p3 = NULL;
    void *vd = &d1;

//    cout<<*a<<endl;
//    cout<<*target<<endl;
//    cout<<np<<endl;
//    cout<<p2<<endl;
//    cout<<p3<<endl;
}

void p220() {
    int i = 42;
    int *pi = &i;
    // �����û�ȡi���󣬲��Ҷ�i������ˣ�����˵�ֵ��ֵ��i���ı�����ֵ
    *pi = *pi * *pi;
    cout << i << endl;
    cout << pi << endl;
    cout << *pi << endl;
}


int main() {
//    base();
    p220();
    return 0;
}