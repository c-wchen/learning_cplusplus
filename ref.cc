#include <iostream>
using namespace std;

int main() {
    int a = 20;
    int c = 40;
    int &b = a;
    b = 30;
    cout << "a = " << a << "; b = " << b << endl; 
    b = c; // 只是赋值,不会更改引用
    cout << "a = " << a << "; b = " << b << endl; 
    cout << "b size " << sizeof(b) << endl;
    // 对 a, b地址比较
    cout << "a addr " << &a << "; b addr " << &b << endl; 
    cout << "a addr " << (long)&a << "; b addr " << (long)&b << endl; 
    // 常量引用,防止在某个域内误操作导致变量值变化
    const int &consta = a;
    cout << "const a = " << consta << endl;

}