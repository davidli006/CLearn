//
// Created by ld on 2023/10/31.
//
#include <stdio.h>


void func1(int a, int b){
    int temp;

    temp = a;
    a = b;
    b = temp;

    printf("in func1 a=%d, b=%d\n", a, b);
}

void func2(int *a, int *b){
    int temp;

    temp = *a;
    *a = *b;
    *b = temp;

    printf("in func2 a=%d, b=%d\n", *a, *b);
}

void charFunc1(char *q){
    q = "hello kitty";
}

void charFunc2(char **q){
    *q = "hello kitty";
}

//void arrFunc1(int p[][4]){
void arrFunc1(int (*p)[4]){
    printf("%d\n", p[0][2]);
    printf("%d\n", *(*(p+1) + 2));
}


int main(){
    int a=100, b=200;
    printf("create a=%d, b=%d\n", a, b);
    func1(a, b);
    printf("after func1: a=%d, b=%d\n", a, b);

    func2(&a, &b);
    printf("after func2: a=%d, b=%d\n", a, b);

    printf("**********************************\n");

    char *p = "hello world";
    charFunc1(p);
    printf("after char func1 %s\n", p); // hello world 不改变, 复制

    charFunc2(&p);
    printf("after char func2 %s\n", p); // hello kitty 改变

    printf("**********************************\n");

    int arr[2][4] = {1, 2, 3, 4,
                   5, 6, 7, 8};
    arrFunc1(arr);

    printf("*********************************\n");






    return 0;
}
