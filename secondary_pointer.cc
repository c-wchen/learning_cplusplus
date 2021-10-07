#include <iostream>

using namespace std;
typedef int arr[5];

int main() {
    int (*p)[5]; // 指向二维数组的指针
    arr *p1;

    cout << "p size of " << sizeof(p) << endl;
    cout << "*p size of " << sizeof(*p) << endl;
    cout << "*p1 size of " << sizeof(*p1) << endl;
    return 0;
}