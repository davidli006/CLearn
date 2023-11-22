//
// Created by ld on 2023/11/20.
//
#include <iostream>

using namespace std;

const int b = 1;

void test03(){
//  外部的常量, 内部链接属性, 报错
    extern const int num;
    cout << num << endl;

}

void test02(){
    int *p = (int *)&b;
//  const 修饰的全局变量存在常量区, 报错
    *p = 100;
    cout << b << endl;
}

void test01(){
// 局部变量存在 符号表中
    const int a = 10;
// 当P取a的地址时, 编译器 创建一个临时 变量tmp, 将变量tmp的地址付给p
    int *p = (int *)&a;
    *p = 100;
    cout << a << endl;

}


int main(){
    test03();
//    test02();


    return 0;
}