/*
 * Created by ikonon on 2019/11/8.
 */
#include <iostream>
#include "Sales_item_io.h"

using namespace std;

int main() {
    Sales_item total;
    // 正确数据格式  字符串 数字 数字，不符合格式会报错
    if (cin >> total) {
        Sales_item trans;
        while (cin >> trans) {
            if (total.isbn() == trans.isbn()){
                total += trans;// 更新总销售额度
            } else {
                cout << total << endl;// 前本书销售结果
                total = trans;// 下本书销售额度
            }
        }
        cout << total << endl;
    } else{
        cerr << "无数据！！"<< endl;
        return -1;
    }

    return 0;
}