#include <stdio.h>

int main(){
    int a = 0b01011011;
    int b = 0b10110100;

    int c;

    c = a & b;
    printf("c = %o\n", c);

    printf("%d\n", -1 >> 3);
    return 0;
}