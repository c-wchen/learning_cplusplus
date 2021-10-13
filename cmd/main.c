#include <stdio.h>

int add(int x, int y) {
    int ret;
    ret = x + y;
    printf("x + y = %d\n", ret);
    return ret;
}
// gcc -g -o main main.c
// objdump -S main > main_S.txt


int main() {
    int x = 20;
    int y = 30;
    add(x, y);
    return 0;
}