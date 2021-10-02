#include <iostream>
using namespace std;

class Base {
public:
    virtual void test() = 0;
    virtual void test02() {
        cout << "Base test02()" << endl;
    }
};

class Son: public Base {
public:
    void test() {
        cout << "son test()" << endl;
    }
};

int main() {
    Base *bs = new Son;
    bs->test();
    Son s;
    Base& bs1 = s;
    bs1.test();

    return 0;
}