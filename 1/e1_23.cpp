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
            // ��ȼ�������һ�ٴ�����
            if (valItem.isbn() == currItem.isbn()) {
                ++count;
            } else {
                cout << currItem << "��ȸ���: " << count << endl;
                cout << "Isbn��: " << currItem.isbn() << endl;
                // ��currentItem��ֵΪ�µı�ţ��������ø���1��
                currItem = valItem;
                count = 1;
            }
        }
    }
    return 0;
}