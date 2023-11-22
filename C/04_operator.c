#include <stdio.h>

int main(){
    int a = 20;
    int ret = a > 10 && a < 100;
    printf("ret = %d\n", ret);

    ret = a > 10 | a < 19;
    printf("ret = %d\n", ret);

//  短路原则: 看还有没有继续运算的必要
    int b = 100;
    ret = (a < 19) && (b += 100);
    printf("b = %d\n", b);

    ret = (a > 19) | (b += 100);
    printf("b = %d\n", b);

    return 0;
}