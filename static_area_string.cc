#include <iostream>
using namespace std;

// 注意当数组作为函数的参数进行传递时，该数组自动退化为同类型的指针
void test(char arr[]) {
    cout << "test(char[] arr) arr sizeof " << sizeof(arr) << endl;
} 


int main() {
    char arr[] = "hello world";
    const char *p = "hello world"; // <=> const char *p = "hello world";
    // p[1] = "E"; 指向静态区的指针为常量指针，指针指向的内容不可变
    arr[1] = 'E';
    // 数组能够通过sizeof计算出长度
    cout << "arr size of " << sizeof(arr) << endl;
    cout << "p size of " << sizeof(p) << endl;  // 和平台有关, 指针大小

    test(arr);
    return 0;
}