#include <stdio.h>
#include "tools.h"

void func(){
    printf("func\n");
    printf("hello word\n");
}

int sum(int a, int b){
    return a + b;
}

int main(){
    func();
    printf("%d", sum(5, 3));

    int arr[] = {3, 5, 8, 1, 4};
    int size = sizeof(arr) / sizeof(arr[0]);
    int res = maxNum(arr, size);
    printf("\nthe max num is: %d", res);

    return 0;
}
