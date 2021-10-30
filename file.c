#include <stdio.h>

int main() {
    int ch;
    char *fname = "./const_fun.cc";
    FILE *fp = fopen(fname, "r");
    int count = 0;
    while((ch = fgetc(fp)) != EOF) {
        printf("%02x ", ch & 0xFF);
        if (++count % 10 == 0) {
            printf("\n");
        }
    }
    printf("\ncount = %d\n", count);
    return 0;
}