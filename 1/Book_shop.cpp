/*
 * Created by ikonon on 2019/11/8.
 */
#include <iostream>
#include "Sales_item_io.h"

using namespace std;

int main() {
    Sales_item total;
    // ��ȷ���ݸ�ʽ  �ַ��� ���� ���֣������ϸ�ʽ�ᱨ��
    if (cin >> total) {
        Sales_item trans;
        while (cin >> trans) {
            if (total.isbn() == trans.isbn()){
                total += trans;// ���������۶��
            } else {
                cout << total << endl;// ǰ�������۽��
                total = trans;// �±������۶��
            }
        }
        cout << total << endl;
    } else{
        cerr << "�����ݣ���"<< endl;
        return -1;
    }

    return 0;
}