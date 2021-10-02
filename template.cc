#include <iostream>
using namespace std;

template<class T>
// swap是内置函数，不要用swap做函数名，会发生编译器错误。
// 编译阶段进行替换
void test_swap(T& a, T& b) {
    T temp = a;
    a = b;
    b = a;
}

int main() {
    int a = 12;
    int b = 13;
    int c = 100;
    test_swap(a, b);
    test_swap<int>(a, c);
    cout << "a = " << a << ", b = " << b << endl;
    return 0;
}
