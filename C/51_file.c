//
// Created by ld on 2023/11/7.
//
#include <stdio.h>
#include <string.h>


int main(){
    printf("好了");

    FILE *fp;
    fp = fopen("./a.txt", "a");
    if (fp == NULL){
        printf("打开文件失败!\n");
        return -1;
    }
//    fputc('t', fp);
    printf("追加完成!\n");
    fclose(fp);

    fp = fopen("./a.txt", "r");
    int c;
    while ((c= fgetc(fp)) != EOF){
        printf("c = [%c] - %d\n", c, c);
    }

    rewind(fp);
    char line[4];
    while (fgets(line, 4, fp) != NULL){
        printf("line = %s\n", line);
    }



    fclose(fp);


    return 0;
}