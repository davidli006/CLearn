#include <stdio.h>

int main(){
//  ռ���ֽ��ٵ� ���� ��ռ���ֽڶ��ת��, ���־���
    printf("%d\n", 5/2);
    printf("%f\n", 5.0/2);  // 2 תΪ 2.0

//  �з��ź��޷���һ������, ����Ϊ�з��ŵ������޷��ŵ���
    int a = -8;
    unsigned int b= 7;
    if (a + b > 0){
        printf("a+b>0\n");
    }else{
        printf("a_b<0\n");
    };
//  ǿ������ת��
    int x = 10;
    int y = 4;
    float r;
//  r = x / y  // ������
    r = (float)(x) / (float)(y);
    printf("r = %f\n", r);


    return 0;
}