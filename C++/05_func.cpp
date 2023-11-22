#include <iostream>

using namespace std;

void swap(int *x, int *y){
    int temp = *x;
    *x = *y;
    *y = temp;
}

void test1(){
    int a = 10;
    int b = 20;
    swap(&a, &b);
    cout << a << " " << b << endl;
}

void swap_ref(int &x, int &y){
    int temp = x;
    x = y;
    y = temp;
}

void test1_ref(){
    int a = 10;
    int b = 20;
    swap_ref(a, b);
    cout << a << " " << b << endl;
}

void get_mem(int **q){
    *q = (int *)malloc(5 * sizeof(int));
    cout << *q << endl;
}

void test2(){
    int *p = NULL;
    get_mem(&p);
}

void get_mem_ref(int * &q){
    q = (int *)malloc(5 * sizeof(int));
    cout << q << endl;
}

void test2_ref(){
    int *p = NULL;
    get_mem_ref(p);
}




int main(){
    test1();
    test1_ref();
    test2();
    test2_ref();

    return 0;
}