#include <iostream>
using namespace std;

int main() {
    char *arr[10];   // 存放指针的数组，数组在栈上（全局空间）开辟空间
    char *p = arr[1];
    char **parr;
    
    cout << "*arr size of " << sizeof(arr) << endl;
    cout << "p size of " << sizeof(p) << endl; 
    parr = arr + 1;

    return 0;
}