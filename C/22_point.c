//
// Created by ld on 2023/10/27.
//

#include <stdio.h>

int main(){

    int a= 100;
    int *p;

    p = &a;
    printf("&a = %p\n", &a); // a的地址
    printf("&a = %p\n", p);  // a的地址赋值给了p,所以p的值就是a的地址
    printf("a = %d\n", a);  // a的值
    printf("a = %d\n", *p);  // p的值即a的地址 所对应的值 取出来是a的值
    printf("p = %p\n", p);  // p的值, 存了a的地址
    printf("p = %p\n", &p);  // p作为变量 也有自己的地址

    // p作为一个变量他有地址: &p
    // 对 &p 取值即 *(&p) 即为p的存储内容: a 的地址
    // 对 a 的地址 *(&p) 再取值即 *(*(&p)) 即为 a的存储内容: 100
    printf("**&p从第一个地址开始取, 最终得到值: %d\n", *(*(&p))); // 可直接写成 **&p

    printf("*************************************************************\n");
    printf("\n");
    printf("\n");

    int *p1, *p2, temp, b, c;
    p1 = &b;
    p2 = &c;

    printf("a and b is:\n");
    scanf("%d %d", p1, p2);

    temp = *p1;
    *p1 = *p2;
    *p2 = temp;

    printf("a and b is: %d %d\n", b, c);
    printf("*p1 and *p2 is: %d %d\n", *p1, *p2);

    printf("*************************************************************\n");
    printf("\n");
    printf("\n");

//    数组指针
    int arr[3][5];
    int (*q)[5];




    return 0;
}



