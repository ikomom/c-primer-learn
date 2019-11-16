#include <iostream>
#include <limits>

using namespace std;

template<typename T>

void type(const string& name) {
    T a;
    // sizeof�������Ǻܸ��ӵģ��������ɣ�ֻҪ֪��unicode�ַ����Է�2����bit
    cout << name << " �ֽ���: " << sizeof(a) << "  "
         << "���ֵ: " << numeric_limits<T>::max() << "  "
         << "��Сֵ: " << numeric_limits<T>::min()
         << endl;
}

int main() {
    type<bool>("bool");
    type<char>("char");
    type<wchar_t>("wchar_t");
    type<char16_t>("char16_t unicode�ַ�");
    type<char32_t>("char32_t unicode�ַ�");
    type<short>("short");
    type<short int>("short int");
    type<int>("int");
    type<long>("long");
    type<long long>("long long");
    type<float>("float");
    type<double>("double");
    type<long double>("long double");

    return 0;
}