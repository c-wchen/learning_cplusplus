#include <stdio.h>
#include <stdint.h>

int main() {
    float f = 3.14;
    printf("%0x", f & ~0U);
    return 0;
}