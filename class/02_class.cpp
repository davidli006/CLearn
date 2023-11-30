//
// Created by ld on 2023/11/28.
//
#include <iostream>
#include <cstring>

using namespace std;

class Person {

private:
    int m_age;
    char m_name[128];

public:
    void init(int age, char *name){
        if (age > 0 && age < 150){
            this->m_age = age;
        }
        strcpy(this->m_name, name);
    }

    void show(){
        cout << this->m_age << " " << this->m_name << endl;
    }

    void set_age(int age){
        if (age > 0 && age < 150){
            this->m_age = age;
        }
    }

    void set_name(char *name){
        strcpy(this->m_name, name);
    }

};

void test(){
    Person p;
    p.init(18, "lucy");
    p.show();

    p.set_age(20);
    p.set_name("kakaxi");
    p.show();

}

int main(){
    test();
    return 0;
}

