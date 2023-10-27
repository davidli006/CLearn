#include <stdio.h>

int main(){
    int a[10];
    int i;

    for (i=0; i<10; i++){
        a[i] = i * 10 + 14;
        printf("%d\n", a[i]);
    }

    printf("size of a = %llu %llu\n", sizeof(a), 10 * sizeof(a));

    int b[] = {1, 2, 3};
    printf("size of b = %llu %llu\n", sizeof(b), 3 * sizeof(b));

    printf("*************************\n");
    int c[2][4];
    printf("size of c = %llu %llu\n", sizeof(c), 2 * 4 * sizeof(c));
    int d[][3] = {1, 2, 3, 4, 5};
    printf("size of d = %llu %llu\n", sizeof(d), 2 * 4 * sizeof(d));
    int j;
    for (i=0; i<5; i++) {
        for (j = 0; j < 4; j++) {
            printf("值%d\t", d[i][j]);
        }
        printf("\n");
    }
    printf("=============================================\n");
//    二维数组 初始化
    int e[2][3] = {{10, 20, 30},{666, 777, 888}};
    for (int k = 0; k < 2; k++) {
        for (int l = 0; l < 3; l++) {
            printf("%d\t", e[k][l]);
        }
        printf("\n");
    }
    printf("=============================================\n");
    printf("please input: \n");

    char ch[32] = "";
    scanf("%s", ch);
    printf("%s", ch);


    return 0;
}