//
// Created by ld on 2023/11/27.
//
#include <iostream>
#include <cstring>

using namespace std;


struct student{
    int id;
    int age;
    char name[256];
    void print(){
        cout << this->id << " " << this->age << " " << this->name << endl;
    }

};


int main(){
    student obj;
    obj.id = 1;
    obj.age = 18;
    strcpy(obj.name, "kakaxi");
    obj.print();
}

