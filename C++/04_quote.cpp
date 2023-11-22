//
// Created by ld on 2023/11/20.
//
#include <iostream>

using namespace std;

void test01(){
    int a = 10;
    int &b = a;

    cout << a << endl;
    b = 100;
    cout << a << endl;

}

void test02(){
    int a[] = {1, 2, 3, 4, 5};
//    int (&arr)[] = a;

    typedef int ARR[5];
    ARR &arr = a;

    for (int i=0;i<5;i ++){
        cout << arr[i] << " ";
    }
    cout << endl;

}

int main(){
    test01();
    test02();


    return 0;
}