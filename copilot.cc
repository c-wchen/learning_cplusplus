#include <stdio.h>

// 打印九九乘法表
void print_table() {
    for (int i = 1; i <= 9; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%d * %d = %d\n", j, i, i * j);
        }
    }
}

// 输出a,b最大值
void print_max(int a, int b) {
    if (a > b) {
        printf("%d > %d\n", a, b);
    } else {
        printf("%d < %d\n", a, b);
    }
}

// 对数组a快速排序
void sort(int a[], int n) {
    int i, j, t;
    for (i = 0; i < n - 1; i++) {
        for (j = i + 1; j < n; j++) {
            if (a[i] > a[j]) {
                t = a[i];
                a[i] = a[j];
                a[j] = t;
            }
        }
    }
}

//查询用户表
void query_user(int a[], int n) {
    int i, j, t;
    for (i = 0; i < n - 1; i++) {
        for (j = i + 1; j < n; j++) {
            if (a[i] > a[j]) {
                t = a[i];
                a[i] = a[j];
                a[j] = t;
            }
        }
    }
}

// 生成学生类
class Student {
public:
    int id;
    char name[20];
    int age;
    int score;
};

// 调用sort生成测试函数
void test_sort() {
    int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    sort(a, 10);
    for (int i = 0; i < 10; i++) {
        printf("%d\n", a[i]);
    }
}

// 调用query_user生成测试函数
void test_query_user() {
    int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    query_user(a, 10);
    for (int i = 0; i < 10; i++) {
        printf("%d\n", a[i]);
    }
}

// 添加元素b到数组a中
void add_element(int a[], int n, int b) {
    int i;
    for (i = 0; i < n; i++) {
        if (a[i] == 0) {
            a[i] = b;
            break;
        }
    }
}

// 测试函数的功能
void test_add_element() {
    int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    add_element(a, 10, 0);
    for (int i = 0; i < 10; i++) {
        printf("%d\n", a[i]);
    }
}

// 主函数main
int main() {
    // print_table();
    // print_max(1, 2);
    // test_sort();
    // test_query_user();
    // test_add_element();
    Student s[10];
    for (int i = 0; i < 10; i++) {
        s[i].id = i;
        s[i].age = i;
        s[i].score = i;
        sprintf(s[i].name, "name%d", i);
    }
    for (int i = 0; i < 10; i++) {
        printf("%d %s %d %d\n", s[i].id, s[i].name, s[i].age, s[i].score);
    }
    return 0;
}