#include <stdio.h>  //ͷ�ļ�


//������
int main() {
    // 1. char �ַ���
    // 2. short ������
    // 3. int ����
    // 4. long ������
    // 5. float ������
    // 6. double ˫������
    // 7. struct �ṹ��
    // 8. union ����������
    // 9. enum ö����

    // register �Ĵ�������
    // static  ��̬, �������ڴ�ľ�̬��
    // const ����, ֻ�������޸�
    // auto
    // extern

    // �������� if switch
    // ѭ����� for while do goto
    // ������� break continue

    // sizeof ��ȡ�������ڴ�Ĵ�С
    // typedef ������
    // volatile �׸ı�

    char a = 'w';
    short b = 100;
    int c = 999;
    long d = 3456453;
    float e = 33.141592f;
    double f = 46.1222121316354564646541;

    printf("%c ռ�ڴ��С %llu\n", a, sizeof(a));
    printf("%d ռ�ڴ��С %llu\n", b, sizeof(b));
    printf("%d ռ�ڴ��С %llu\n", c, sizeof(c));
    printf("%ld ռ�ڴ��С %llu\n", d, sizeof(d));
    printf("%f ռ�ڴ��С %llu\n", e, sizeof(e));
    printf("%f ռ�ڴ��С %llu\n", f, sizeof(f));

    return 0;
}



