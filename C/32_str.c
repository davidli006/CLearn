//
// Created by ld on 2023/11/1.
//
#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int main(){
    printf("******************************\n");
    char s1[100] = "hello";
    printf("length of s1 is:%lld\n", strlen(s1));
    printf("length of s1 is:%lld\n", sizeof(s1));

    printf("******************************\n");
    char *s2 = "hello";
    printf("length of s2 is:%lld\n", strlen(s2));
    printf("length of s2 is:%lld\n", sizeof(s2));  //指针长度32位4个字节, 64位8个字节

    printf("******************************\n");
    char s3[32] = "hello world";
    char s4[32] = "abcdef";
    strcpy(s3, s4); // 必须保证第一个参数足够大
    printf("s3 is:%s\n", s3);
    for (int i=0;i<32;i++){
        printf("%d-%c-%d\n", i, s3[i], s3[i]);
    }
    printf("******************************\n");
    char s5[32] = "abcdef";
    char s6[32] = "hello world";
    strcat(s5, s6);
    printf("s5 is: %s\n", s5);

    printf("******************************\n");
    char s7[32] = "hello world";
    char s8[32] = "hello kitty";
    int res = strcmp(s7, s8);
    printf("s7 compare s8 is: %d\n", res); // 相等为0

    printf("******************************\n");
    char s9[] = "hell6o wo6rld";
    char *ret = strchr(s9, '6'); // 找到后面额结果
    printf("position of 6 is:%s\n", ret);
    printf("index of: %lld\n", ret - s9);

    printf("******************************\n");
    char ss[] = "1234:4567:666;777";
    char *rest = strstr(ss, "6676");
    printf("position of 6 is:%s\n", rest);
    printf("index of: %lld\n", rest - ss);

    printf("******************************\n");
    char as1[] = "123456";
    printf("as1 atoi is: %d\n", atoi(as1));

    char as2[] = "3.1415926";
    printf("as2 atof is: %f\n", atof(as2));

    printf("******************************\n");
    char sp[] = "111:222:333";
    char *resp;
    resp = strtok(sp, ":");
    printf("first tok is: %s\n", resp);
    while((resp = strtok(NULL, ":")) != NULL){
        printf("tok is: %s\n", resp);
    }

    printf("******************************\n");
    char buf[20];
    int a, b, c;
    sprintf(buf, "%d-%d-%d", 2023, 11, 2);
    printf("buf is: %s\n", buf);

    sscanf("2023-10-31", "%d-%d-%d", &a, &b, &c);
    printf("a: %d, b: %d, c:%d\n", a, b, c);

    printf("******************************\n");
    char buf1[20];
    sscanf("1234 5678", "%*d %s", buf1);
    printf("buf1 is: %s\n", buf1);

    printf("******************************\n");
    char buf2[20];
    sscanf("1234 5678", "%4s", buf2);
    printf("buf2 is: %s\n", buf2);

    printf("******************************\n");




    return 0;
}



