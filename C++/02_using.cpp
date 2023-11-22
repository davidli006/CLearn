//
// Created by ld on 2023/11/15.
//
#include <iostream>

using namespace std;

namespace nameA{
    int a= 10;
    void foo(){
        cout << "hello using" << endl;
    }
}

void test1(){
    using nameA::a;
    using nameA::foo;
    cout << a << endl;
    foo();
}


int main(){
    test1();

    return 0;
}