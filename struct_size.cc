/**
 * Description: 分析结构体中指针和数组
 * Author: wchen
 * */

#include <iostream>
using namespace std;
struct NodeA {
    char *a;
};

struct NodeB {
    // 不占内存,可以用来做边界
    char a[0];
};

struct NodeC {
    char a[10];
};

int main() {
    cout << sizeof(NodeA) << endl;
    cout << sizeof(NodeB) << endl;
    cout << sizeof(NodeC) << endl;
    return 0;
}