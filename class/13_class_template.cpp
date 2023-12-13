//
// Created by ld on 2023/12/12.
//
#include <iostream>
#include <string>

using namespace std;

template <class T1, class T2>
class Animal{
public:
    Animal(T1 id_, T2 data_){
        this->Id = id_;
        this->data = data_;
    }
    T1 Id;
    T2 data;
};

template <class T1, class T2>
class Bird:public Animal<T1, T2>{
public:
    Bird(string name_, T1 id_, T2 data_): Animal<T1, T2>(id_, data_){
        this->name = name_;
    }
    string name;
};

template <class T>
void show(T &a){
    cout << a.Id << " " << a.data << endl;
}

void test1(){
    Animal<int, int> dog(10, 10);
    show(dog);
    Animal<int, string> cat(2, "lucy");
    show(cat);
}

void test2(){
    Bird<int, int> bd("wudi", 3, 20);
    cout << bd.name << endl;
    show(bd);

}

int main(){
    test1();
    test2();
    return 0;
}
