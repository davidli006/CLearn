#include <stdio.h>
#include "tools.h"

// 拆分文件 后不能编译, 不知道原因, 扔到main函数,并且在CMakeLists.txt添加 tools.c 后编译通过

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
    printf("最大的是: %d", res);

    return 0;
}

