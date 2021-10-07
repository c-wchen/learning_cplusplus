#include <iostream>
using namespace std;

int main() {
    int a = 10;
    const int *p1 = &a;   // 指向内容不可变
    int *const p2 = &a;   // 指向不可变
    const int *const p3 = &a;  // 指向内容和指向都不可变
    cout << *p1 << endl;
    cout << *p2 << endl;
    return 0;
}