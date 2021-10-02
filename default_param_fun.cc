#include <iostream>
using namespace std;

void func(int a, int b = 12);

// 默认参数开始从左到右都是默认参数
void fun(int a, int b = 12) {
    cout << "a + b = " << (a + b) << endl;
}
// 声明存在默认参数,实现不能有默认参数
void func(int a, int b) {
    cout << "a + b = " << (a + b) << endl;
}

// 占位参数, 可以存在默认参数(int = 10)
void func2(int a, int) {
    int *p = &a;
    cout << a << "  " << *(p + 1) << endl;
    cout << a << "  " << *(p + 2) << endl;
    cout << a << "  " << *(p + 3) << endl;
    cout << a << "  " << *(p + 4) << endl;
}
int main() {
    fun(1);
    fun(1, 2);

    func(1);
    func2(1, 2);
}