//
// Created by ld on 2023/12/4.
//
#include <iostream>

using namespace std;

class Person{
public:

    Person(int age){
        this->age = age;
    }

    Person & operator++(){
        this->age = this->age + 1;
        return *this;
    }

    Person operator++(int){
        Person temp = *this;
        this->age = this->age + 1;
        return temp;
    }

    int age;
};

ostream & operator<<(ostream &cout, Person &p){
    cout << p.age;
    return cout;
}

int main(){

    Person p(18);

    cout << p << endl ;
    cout << ++p << endl;
//    cout << p++ << endl;
    Person temp = p++;
    cout << temp << endl;
    cout << p << endl;

    return 0;
}





