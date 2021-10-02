#include <iostream>
using namespace std;

class Demo {
public:
    int a = 1;
    // mutable修饰在常函数可修改
    mutable int b;
    // this 是一个指针常量, this指针的指向不可修改
    // 成员函数后面添加const,实际修饰this,让this指向的值不可修改.
    void show() const{
        // a = 12; ×
        b = 12;
        cout << "a = " << this->a << endl;
    }
    void func() {

    }
};

int main() {
    Demo d1;
    d1.show();
    // 常对象不允许修改this指向的值
    // const Demo d2;
    return 0;
}