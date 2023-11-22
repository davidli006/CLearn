//
// Created by ld on 2023/11/1.
//
#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>

char *func1(){
    char *ch = (char *) malloc(100 * sizeof(char));
    return ch;
}

char *func2(){
    char *ch = (char *) calloc(8, 100);
    return ch;
}

// 修改空间 大小
char *func3(char *p){
    char *ch = (char *) realloc(p, 16 * 100);
    return ch;
}


int main(){
    char *p;
    p = func1();
    printf("%llu\n", sizeof(*p));
    free(p);
    p = NULL;

    char *q;
    q = func2();
    printf("%llu\n", sizeof(*q));
    free(q);
    q = NULL;

    char *m;
    m = func1();
    m = func3(m);
    printf("%llu\n", sizeof(*m));
    free(m);
    m = NULL;




    return 0;
}
