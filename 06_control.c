#include <stdio.h>


int main(){

    int n = 40;
    while (n < 60){
        if (n > 50){
            printf("n > 50, %d\n", n);
        }else if(n == 50) {
            printf("find it, %d\n", n);
        }else{
            printf("n < 50, %d\n", n);
        }

        switch (n){
            case 51:
            case 61:
                printf("结尾是 1 %d\n", n);
                break;
            case 52:
                printf("结尾是 2 %d\n", n);
                break;
            case 53:
                printf("结尾是 3 %d\n", n);
                break;

            default:
                printf("不是 51\n");
        }


        n++;
    }

    int i;
    int sum = 0;
    for (i = 1;i <= 100;i++){
        sum += i;
    }
    printf("sum is: %d", sum);




    return 0;
}





