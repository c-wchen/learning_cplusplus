#include <iostream>
using namespace std;

int main() {
    int a = 10;
    const int *p1 = &a;
    int *const p2 = &a;
    const int *const p3 = &a;
    cout << *p1 << endl;
    cout << *p2 << endl;
    return 0;
}