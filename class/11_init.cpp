//
// Created by ld on 2023/12/11.
//
#include <iostream>
#include <string>

using namespace std;

class Base{
public:
    Base(int age_, string name_){
        this->age = age_;
        this->name = name_;
        cout << "Base的析构函数" << endl;
    }

    ~Base(){
        cout << "base的解构函数" << endl;
    }

    int age;
    string name;
};

class Person:public Base{
public:

    Person(int id_, int age_, string name_): Base(age_, name_){
        this->Id = id_;
        cout << "Person 的析构函数" << endl;
    }

    ~Person(){
        cout << "Person 的解构函数" << endl;
    }

    int Id;
};


void test(){
    Person p(1, 18, "lucy");

};

int main(){
    test();
    return 0;
}

