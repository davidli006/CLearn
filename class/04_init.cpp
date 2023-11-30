//
// Created by ld on 2023/11/30.
//
#include <iostream>
#include <string>

using namespace std;

class Person{
public:
    Person(int a, int b, int c):m_b(a), m_a(b), m_c(c){}

    void show(){
        cout << this->m_a << " " << this->m_b << " " << this->m_c << endl;
    }

    int m_a;
    int m_b;
    int m_c;
};

void test(){
    Person p(1, 2, 3);
    p.show();
}

int main(){
    test();
    return 0;
}





