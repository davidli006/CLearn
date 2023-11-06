//
// Created by ld on 2023/11/3.
//
#include <stdio.h>
#include <malloc.h>
#include <string.h>

typedef struct stu{
    int Id;
    char name[32];
    struct stu *Next;
}STU;


void link_create(STU **p_head, STU *p_new){
    STU *p_mov = *p_head;
    if(*p_head == NULL){
        *p_head = p_new;
        p_new = NULL;
    }else{
        while (p_mov->Next != NULL){
            p_mov = p_mov->Next;
        }
        printf("%s %s\n", p_mov->name, p_new->name);
        p_mov->Next = p_new;
        p_new->Next = NULL;
    }
}

int main(){

    STU *header = NULL, *p_new = NULL;
    int num = 9, i;
    char name[32];
    for (i = 0;i < num; i++){
        p_new = (STU*)malloc(sizeof(STU));

        p_new->Id = i;
        sprintf(name, "name_%d", i);
        strcpy(p_new->name, name);
        p_new->Next = NULL; //没有这一步程序挂掉

        printf("%d: %p id(%d)\tname(%s)\tNext(%p)\n", i, p_new, p_new->Id, p_new->name, p_new->Next);
        link_create(&header, p_new);


    }

    STU *pMov = header;
    while (pMov->Next != NULL){
        printf("%d-%s-%p\n", pMov->Id, pMov->name, pMov->Next);
        pMov = pMov->Next;
    }

    return 0;
}
