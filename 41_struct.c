//
// Created by ld on 2023/11/2.
//
#include <stdio.h>

struct student{
    int Id;
    char name[32];
    char sex;
    int age;
};


int main(){

    struct student lili;
    struct student mingming = {1001, "kakaxi", 'B', 18};
    printf("lili info:%s\n", mingming.name);


    return 0;
}