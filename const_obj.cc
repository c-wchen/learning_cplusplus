#include <iostream>
using namespace std;
// 常对象只能调用常成员函数，不能调用普通成员函数 (除了隐式调用析构函数和构造函数)，常成员函数是常对象的唯一对外接口；
// 现在编译系统只检查函数的声明，只要发现调用了常对象的成员函数，而且该函数未被声明为const，编译阶段就报错；
// 常对象在被定义时需要被初始化；
// 数据成员只能通过构造函数初始化列表进行初始化，其他形式的函数均不能进行数据的赋值
class Person {
public:
    // 静态方法除外
    static void staticMethod() {
        cout << "static method" << endl;
    }
    const int a = 12;
    int b = 13;
    void show() const;
};
void Person::show() const {
    cout << b << endl;
}

int main() {
    const Person p; // Person const p;
    // cout << p.a << endl;
    p.show();
    p.staticMethod();
    p.staticMethod2();
    return 0;
}