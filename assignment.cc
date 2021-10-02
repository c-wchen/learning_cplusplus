#include <iostream>
using namespace std;

class Demo {
    int a;
    int b;
    int c;
public:
    // 参数列表
    Demo(): a(10), b(20), c(30) {

    }
    Demo(int a, int b, int c): a(a), b(b), c(c) {

    }
    void showData() {
        cout << a << ", " << b << ", " << c << endl;
    }
};

int main() {
    int a(10);
    int b{20};
    cout << a << endl;
    cout << b << endl;
    Demo d1;
    d1.showData();
    Demo d2(1, 2, 3);
    d2.showData();

    b = {14};
    cout<<b<<endl;

    return 0;
}
