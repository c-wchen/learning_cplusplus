#include <stdio.h>
#include "add.h"
#include "sub.h"

int main() {
    int a = 14;
    int b = 12;
    printf("a + b = %d", add(a, b));
    printf("a - b = %d", sub(a, b));
    return 0;
}