//
// Created by ld on 2023/11/30.
//
#include <iostream>

using namespace std;

class Person{
public:
    int a;
    static int b;
};

int Person::b = 10;

void test(){
    Person p;
    cout << p.b << endl;
    p.a = 100;
    p.b = 600;
    cout << p.b << endl;
}

void test01(){
    cout << Person::b << endl;
}



int main(){
    test01();
    test();
    test01();
    return 0;
}
