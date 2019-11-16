//
// Created by ikonon on 2019/11/7.
//

#include <iostream>
#include "Sales_item_io.h"

using namespace std;

int main() {
    Sales_item book;
    // 读入ISBN号、售出册数、销售价
    cin >> book;
    // 写入ISBN号、售出册数、总销售额和平均价格
    cout << book << endl;
    return 0;
}