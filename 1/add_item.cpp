//
// Created by ikonon on 2019/11/7.
//
#include <iostream>
#include "Sales_item_io.h"
using namespace std;

int main() {
    Sales_item item1, item2;
    // �����ֵ��ʧ�ܼ�������
    while (cin >> item1 >> item2) {
        if (item1.isbn() == item2.isbn()) {
            // ���item1��ISBN�������ͣ��۸��ܺͣ�ƽ��ֵ
            cout << "�ɹ����룺 " << item1 + item2 << endl;
            return 0;
        } else {
            cout<< "����ʧ��"<< endl;
            cout<< "item1_ISBN: " + item1.isbn() << endl;
            cout<< "item2_ISBN: " + item2.isbn() << endl;
            cout<< "����������!!"<< endl;
        }
    }
}