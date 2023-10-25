#include <stdio.h>  //头文件


//主函数
int main() {
    // 1. char 字符型
    // 2. short 短整型
    // 3. int 整型
    // 4. long 长整型
    // 5. float 浮点型
    // 6. double 双浮点型
    // 7. struct 结构体
    // 8. union 共用体类型
    // 9. enum 枚举型

    // register 寄存器变量
    // static  静态, 保存在内存的静态区
    // const 常量, 只读不能修改
    // auto
    // extern

    // 条件控制 if switch
    // 循环语句 for while do goto
    // 辅助语句 break continue

    // sizeof 获取数据在内存的大小
    // typedef 重命名
    // volatile 易改变

    char a = 'w';
    short b = 100;
    int c = 999;
    long d = 3456453;
    float e = 33.141592f;
    double f = 46.1222121316354564646541;

    printf("%c 占内存大小 %llu\n", a, sizeof(a));
    printf("%d 占内存大小 %llu\n", b, sizeof(b));
    printf("%d 占内存大小 %llu\n", c, sizeof(c));
    printf("%ld 占内存大小 %llu\n", d, sizeof(d));
    printf("%f 占内存大小 %llu\n", e, sizeof(e));
    printf("%f 占内存大小 %llu\n", f, sizeof(f));

    return 0;
}



