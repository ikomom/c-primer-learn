#include <iostream>
#include <limits>

using namespace std;

template<typename T>

void type(const string& name) {
    T a;
    // sizeof函数还是很复杂的，先跳过吧，只要知道unicode字符可以放2倍的bit
    cout << name << " 字节数: " << sizeof(a) << "  "
         << "最大值: " << numeric_limits<T>::max() << "  "
         << "最小值: " << numeric_limits<T>::min()
         << endl;
}

int main() {
    type<bool>("bool");
    type<char>("char");
    type<wchar_t>("wchar_t");
    type<char16_t>("char16_t unicode字符");
    type<char32_t>("char32_t unicode字符");
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