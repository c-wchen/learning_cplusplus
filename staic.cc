#include <iostream>
using namespace std;
int& fun() {
    static int a = 12;
    return a;
}
// 静态变量定义时赋值只有一次有效
// 静态变量放在全局区,区别于局部变量放在栈上
void funs() {
    static int b = 12;
    cout << "b = " << b << ", addr = " << &b << endl;
    ++b;
}

class A {
};
class B {
    int a = 12;
    int b = 13;
    void fun() {
        cout << "fun" << endl;
    }
};

class C {
public:
    int a = 12;
    int b = 13;
    static int d;

    static void fun() {
        cout << "fun" << endl;
    }
};
int C::d=12;
int main() {
    int &res = fun();
    fun() = 14;
    cout << res << endl;
    funs();
    funs();
    funs();
    A a;
    cout << "无成员对象大小 " << sizeof(a) << endl;
    B b;
    cout << "有成员对象大小 " << sizeof(b) << endl;
    C c;
    cout << "有成员对象大小 " << sizeof(c) << endl;

    cout << C::d << endl;
    cout << sizeof(C) << endl;

}