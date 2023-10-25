#include <stdio.h>

int main(){
    int a = 20;
    int ret = a > 10 && a < 100;
    printf("ret = %d\n", ret);

    ret = a > 10 | a < 19;
    printf("ret = %d\n", ret);

    return 0;
}