#include <stdio.h>

int main(){
    int f = 999;
    printf("&f = %p\n", &f);

    int m = 456;
    printf("%d%d\n", m, m);
//    输出宽度为5 右对齐
    printf("%5d%5d\n", m, m);
//    输出宽度为5 左对齐
    printf("%-5d%-5d\n", m, m);

    float n = 3.14156f;
    printf("%f\n", n);
    printf("%.2f\n", n);


    return 0;
}