/**
 * 1.23
 *  Created by ikonon on 2019/11/8.
 */
#include <iostream>
#include "Sales_item_io.h"

using namespace std;

int main() {
    Sales_item currItem, valItem;
    if (cin >> currItem) {
        int count = 1;
        while (cin >> valItem) {
            // 相等计数器加一再次输入
            if (valItem.isbn() == currItem.isbn()) {
                ++count;
            } else {
                cout << currItem << "相等个数: " << count << endl;
                cout << "Isbn号: " << currItem.isbn() << endl;
                // 将currentItem赋值为新的编号，并且重置个数1；
                currItem = valItem;
                count = 1;
            }
        }
    }
    return 0;
}