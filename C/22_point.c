//
// Created by ld on 2023/10/27.
//

#include <stdio.h>

int main(){

    int a= 100;
    int *p;

    p = &a;
    printf("&a = %p\n", &a); // a�ĵ�ַ
    printf("&a = %p\n", p);  // a�ĵ�ַ��ֵ����p,����p��ֵ����a�ĵ�ַ
    printf("a = %d\n", a);  // a��ֵ
    printf("a = %d\n", *p);  // p��ֵ��a�ĵ�ַ ����Ӧ��ֵ ȡ������a��ֵ
    printf("p = %p\n", p);  // p��ֵ, ����a�ĵ�ַ
    printf("p = %p\n", &p);  // p��Ϊ���� Ҳ���Լ��ĵ�ַ

    // p��Ϊһ���������е�ַ: &p
    // �� &p ȡֵ�� *(&p) ��Ϊp�Ĵ洢����: a �ĵ�ַ
    // �� a �ĵ�ַ *(&p) ��ȡֵ�� *(*(&p)) ��Ϊ a�Ĵ洢����: 100
    printf("**&p�ӵ�һ����ַ��ʼȡ, ���յõ�ֵ: %d\n", *(*(&p))); // ��ֱ��д�� **&p

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

//    ����ָ��
    int arr[3][5];
    int (*q)[5];




    return 0;
}



