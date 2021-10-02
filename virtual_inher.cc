#include <iostream>
using namespace std;
class A {
public:
    int a;
};
class B: virtual public A {

};
class C: virtual public A {

};
class D: public B, public C {

};

int main() {
    D d;
    d.a = 12;
    cout << d.a << endl;
    return 0;
}