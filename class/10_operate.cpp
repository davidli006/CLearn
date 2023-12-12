//
// Created by ld on 2023/12/8.
//
#include <iostream>
#include <string>

using namespace std;


class Person{
public:

    Person(int age_, string name_){
        this->age = age_;
        this->name = name_;
    }

    bool operator==(Person &p){
        return this->age == p.age && this->name == p.name;
    }

    bool operator!=(Person &p){
        return this->age!=p.age || this->name != p.name;
    }

    int age;
    string name;
};


int main(){
    Person p1(18, "kakaxi");
    Person p2(18, "kaaxi");
    if (p1 == p2){
        cout << " p1 == p2" << endl;
    }else{
        cout << "p != p2" << endl;
    }

    if (p1 != p2){
        cout << " p1 != p2" << endl;
    }else{
        cout << "p == p2" << endl;
    }

    return 0;
}


