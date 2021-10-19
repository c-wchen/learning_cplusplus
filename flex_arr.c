#include <stdio.h>
#include <stdlib.h>
// 柔性数组
typedef struct {
    int len;
    // 不占内存
    char data[];
} FlexArr;

int main() {
    const int len  = 20;
    FlexArr *flexArr = (FlexArr *)malloc(sizeof(FlexArr) + len);
    printf("flexArr size of %ld\n", sizeof(flexArr));
    for (int i = 0; i < len; i++) {
        flexArr->data[i] = i;
    }
    for (int i = 0; i < len; i++) {
        if (i % 5 == 0) {
            printf("\n");
        }
         printf("%-4d", flexArr->data[i]);
    }
    return 0;
}