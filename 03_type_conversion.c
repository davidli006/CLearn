#include <stdio.h>

int main(){
//  占用字节少的 可以 向占用字节多的转化, 保持精度
    printf("%d\n", 5/2);
    printf("%f\n", 5.0/2);  // 2 转为 2.0

//  有符号和无符号一起运算, 会认为有符号的数是无符号的数
    int a = -8;
    unsigned int b= 7;
    if (a + b > 0){
        printf("a+b>0\n");
    }else{
        printf("a_b<0\n");
    };
//  强制类型转化
    int x = 10;
    int y = 4;
    float r;
//  r = x / y  // 不可以
    r = (float)(x) / (float)(y);
    printf("r = %f\n", r);


    return 0;
}