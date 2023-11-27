//
// Created by ld on 2023/11/23.
//
#include <iostream>

using namespace std;

void func1(int a=1, int b=6){
    cout << a << " " << b << endl;
}
void func1(int a = 1){
    cout << a << endl;
}
void test01(){
    func1(1, 3);
    func1(3, 7);
}

void test02(){
//    func1(6);  只能调其中一个
}


int main(){
    test01();

    return 0;
}
