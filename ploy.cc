#include <iostream>
using namespace std;

class Animal {
public:
    // 添加virtual之后会在类中添加一个函数指针指向函数地址
    virtual void eat() {
        cout << "animal eat ..." << endl;
    }
};

int main() {
    Animal animal;
    cout << "animal sizeof " << sizeof(animal) << endl;

    return 0;
}
