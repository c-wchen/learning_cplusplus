#include <stdio.h>
// 编译： afl-gcc -o fuzz fuzz.c
// 运行： afl-fuzz -i in -o out -- ./fuzz
int main(int argc, char *argv[])
{
    int a, b;
    char op;
    scanf("%d%c%d", &a, &op, &b);
    int result;
    switch (op) {
        case '+':
            result = a + b;
            break;
        case '-':
            result = a - b;
            break;
        case '*':
            result = a * b;
            break;
        case '/':
            result = a / b;
            break;
        default:
            return 1;
    }
    printf("%d\n", result);
    return 0;
}