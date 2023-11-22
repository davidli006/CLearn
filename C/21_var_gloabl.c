//
// Created by ld on 2023/10/27.
//
#include <stdio.h>

int num;

void myfun(){
    num = 888;
}

int main(){

    printf("%d\n", num);
    myfun();
    printf("%d\n", num);
    return 0;
}