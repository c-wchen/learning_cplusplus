#include <iostream>
using namespace std;

class Base {
public:
    int a = 12;
    void test() {
        cout << "Base test()" << endl;
    }
    void test(int a) {
        cout << "Base test(int a)" << endl;
    }
    void func() {
        cout << "Base test()" << endl;
    }
};
class Son : public Base {
public:
    int a  = 13;
    void test() {
        cout << "Son test()" << endl;
    }
};

int main() {
    Son s;
    cout << "son sizeof " << sizeof(s) << endl;
    // 访问子类
    cout << "son a = " << s.a  << endl;
    s.test();
    s.func();
    // s.test(1);
    s.Base::test(1);
    cout << "========================" << endl;
    // 访问基类
    cout << "Base a = " << s.Base::a  << endl;
    s.Base::test();
    return 0;
}