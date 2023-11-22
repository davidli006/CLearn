//
// Created by ld on 2023/11/2.
//
#include <stdio.h>
#include <string.h>
#include <malloc.h>

typedef struct{
   int year;
   int month;
   int day;
}BD;

struct student{
    int Id;
    char name[32];
    char sex;
    int age;
    BD birth;
};


int main(){


    struct student mingming = {1001, "kakaxi", 'B', 18};
    printf("mingming's name is:%s\n", mingming.name);

    struct student lili;
    lili.Id = 1002;
    strcpy(lili.name, "ÀöÀö");
    lili.sex = 'G';
    lili.age = 18;
    BD bd = {2003, 6, 6};
    lili.birth = bd;
    printf("%d-%s: %d-%d-%d\n", lili.Id, lili.name, lili.birth.year, lili.birth.month, lili.birth.day);

    struct student *s;
    s = (struct student *)malloc(sizeof(struct student));
    s->Id = 1003;
    strcpy(s->name, "Ð¡S");
    s->sex = 'B';
    printf("%d-%s\n", s->Id, s->name);
    free(s);
    s = NULL;


    return 0;
}