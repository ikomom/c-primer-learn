//
// Created by ikonon on 2019/11/7.
//
#include <iostream>
#include "Sales_item_io.h"
using namespace std;

int main() {
    Sales_item item1, item2;
    // 输出和值，失败继续输入
    while (cin >> item1 >> item2) {
        if (item1.isbn() == item2.isbn()) {
            // 输出item1的ISBN，册数和，价格总和，平均值
            cout << "成功输入： " << item1 + item2 << endl;
            return 0;
        } else {
            cout<< "输入失败"<< endl;
            cout<< "item1_ISBN: " + item1.isbn() << endl;
            cout<< "item2_ISBN: " + item2.isbn() << endl;
            cout<< "请重新输入!!"<< endl;
        }
    }
}