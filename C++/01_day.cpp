//
// Created by ld on 2023/11/10.
//
#include <iostream>

using namespace std;

int a = 100;

namespace A {
    int a = 20;
}

namespace B {
    int a = 200;
}

// 命名空间 重复 会合并
namespace B{
//    int a = 300;  变量重复会报错
    int c = 300;
    void func(char arg);
}

void B::func(char arg) {
    cout << arg << endl;
}

void test1(){
    int a = 10;
    cout << a << endl;
    cout << ::a << endl;  // 全局作用域的 a

    cout << A::a << endl;
    cout << B::a << endl;
    cout << B::c << endl;

    char s = 't';
    B::func(s);

}

int main(){

    cout << "hello world" << endl;
    test1();

    return 0;
}