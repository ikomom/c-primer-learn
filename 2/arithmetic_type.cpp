#include <iostream>
#include <limits>
#include <cstdio>

using namespace std;

void pf(unsigned char v) {
    char c = v;
    unsigned char uc = v;
    unsigned int a = c, b = uc;
    int i = c, j = uc;
    printf("----------------\n");
    printf("%%c: %c, %c\n", c, uc);
    printf("%%X: %X, %X\n", c, uc);
    printf("%%u: %u, %u\n", a, b);
    printf("%%d: %d, %d\n", i, j);
}

template<typename T>

void type(const string &name) {
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
    std::cout <<"======================" << std::endl;
    int i3 = -1;
    unsigned u = 10, u2 = 42;
    std::cout << u2 - u << std::endl;
    std::cout << u - u2 << std::endl;
    std::cout << u * i3<< std::endl;
    int i = 10, i2 = 42;
    std::cout << i2 - i << std::endl;
    std::cout << i - i2 << std::endl;
    std::cout << i - u << std::endl;
    std::cout << i3 * u << std::endl;
    std::cout << u - i2 << std::endl;
    float f = 11E+5F;
    std::cout << f << std::endl;
    float  t = 10.;
    std::cout << t << std::endl;
    wchar_t  wx = L'A'; //这个就是定义了一个宽字符常量，并用A来初始化它。
    wchar_t wstr[] = L"I love U"; //这个是定义了一个宽字符的数组。
    return 0;
}