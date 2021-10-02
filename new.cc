#include <iostream>
using namespace std;
class Demo {
    int a;
    int b;
    int *c = NULL;
public:
    // 无参构造函数
    Demo() {
        cout << "无参构造函数" << endl;
    }
    // 有参构造函数
    Demo(int a, int b = 2, int cnum = 10) {
        this->a = a;
        this->b = b; 
        c = new int[cnum];
    }
    // 拷贝构造函数
    Demo(const Demo &d) {
        this->a = d.a;
        this->b = d.b;
        this->c = d.c;
        // *this = d
    }
    ~Demo() {
        cout << "析构函数" << endl;
    }
    void showData() {
        cout << a << "  " << b << "  " << sizeof(c) << endl;
    }
};

int main() {
    // 1. 默认构造函数调用, 调用无参构造函数切记不要添加括号
    Demo d1;
    // 2. 括号方法, 有参构造函数, 
    Demo d2(1, 2);
    d2.showData();
    // 拷贝构造函数
    Demo d3(d2);
    d3.showData();
    // 3. 显示调用, 类型 变量 = 匿名对象
    Demo d4 = Demo();
    Demo d5 = Demo(4, 5);
    // 注意 不要显示调用拷贝构造函数
    // Demo(d2) <=> Demo d2   ×

    // 4. 隐式调用
    Demo d6 =9;
    d6.showData();
    return 0;
}