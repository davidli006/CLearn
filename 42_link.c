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

STU * makeStu(int i){
    char name[32];
    STU *p_new;
    p_new = (STU*)malloc(sizeof(STU));

    p_new->Id = i;
    sprintf(name, "name_%d", i);
    strcpy(p_new->name, name);
    p_new->Next = NULL; //少这步没法正常运行
    return  p_new;
}


void create_link(STU **p_head, STU *p_new){
    STU *p_mov = *p_head;
    if(*p_head == NULL){
        *p_head = p_new;
        p_new = NULL;
    }else{
        while (p_mov->Next != NULL){
            p_mov = p_mov->Next;
        }

        p_mov->Next = p_new;
        p_new->Next = NULL;
    }
}

void link_print(STU **header){
    STU *pMov = *header;
    while (pMov != NULL){
        printf("%p\t%d-%s-%p\n", pMov, pMov->Id, pMov->name, pMov->Next);
        pMov = pMov->Next;
    }
}

void link_free(STU **header){
    STU *pMov = *header;
    while (pMov->Next != NULL){
        pMov = *header;
        *header = (*header)->Next;
        printf("delete: %p\t%d-%s-%p\n", pMov, pMov->Id, pMov->name, pMov->Next);
        free(pMov);
        pMov = NULL; //避免野指针
    }
}

STU * link_search(STU *header, char *name){
    STU *pMov;
    pMov = header;

    while (pMov != NULL){
        if (strstr(pMov->name, name) != NULL){
            return pMov;
        }
        pMov = pMov->Next;
    }
    return NULL;
}

void link_add(STU **header, STU *p_new){
    printf("add %d\t%s\n", p_new->Id, p_new->name);
    STU *pPre = *header,*pMov = (*header)->Next;

    while(pPre != NULL && pMov != NULL){
        if (pPre->Id > p_new->Id){
            p_new->Next = pPre;
            *header = p_new;
            return;
        }
        if (pMov->Id > p_new->Id){
            pPre->Next = p_new;
            p_new->Next = pMov;
            return ;
        }
        pPre = pMov;
        pMov = pMov->Next;
    }

    if (pPre == NULL){
        *header = p_new;
    }else{
        pPre->Next = p_new;
    }

}

void delete_search(STU **header, char *name){
    STU *pMov,*pPre;
    pMov = *header;
    pPre = pMov;

    while (pMov != NULL){
        if (strcmp(pMov->name, name) == 0){
            if (pPre->Id == pMov->Id){
//                *header = pMov->Next;
                *header = (*header)->Next;
            }else{
                pPre->Next = pMov->Next;
            }
            free(pMov);
            pMov = NULL;
            return ;
        }
        pPre = pMov;
        pMov = pMov->Next;
    }

}

int main(){

    STU *header = NULL, *p_new = NULL;
    int num = 9, i;
    for (i = 0;i < num; i++){
        p_new = makeStu(i);

        printf("%d: %p id(%d)\tname(%s)\tNext(%p)\n", i, p_new, p_new->Id, p_new->name, p_new->Next);
        create_link(&header, p_new);
    }

    printf("-------------------print----------------------\n");
    link_print(&header);
    printf("-------------------free----------------------\n");
//    link_free(&header);
    printf("-------------------find----------------------\n");
    STU *res = link_search(header, "me_3");
    printf("%d %s\n", res->Id, res->name);
    link_print(&header);
    printf("-------------------del----------------------\n");
    delete_search(&header, "name_4");
    delete_search(&header, "name_0");
    link_print(&header);
    printf("-------------------add----------------------\n");
    p_new = makeStu(4);
    link_add(&header, p_new);
    link_print(&header);
    printf("-------------------add----------------------\n");



    return 0;
}
