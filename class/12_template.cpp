//
// Created by ld on 2023/12/12.
//
#include <iostream>

using namespace std;

template <class T>
void arr_sort(T *arr, int n){
    for (int i=0;i<n-1;i++){
        for (int j=i+1;j<n;j++){
            if(arr[i]>arr[j]){
                T temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

template <class T>
void arr_print(T *arr, int n){
    for (int i = 0;i < n; i++){
        cout << arr[i] << endl;
    }
}


int main(){

    int a[5] = {2, 8, 3, 9, 4};
    arr_sort(a, sizeof(a)/sizeof(a[0]));
    arr_print(a, sizeof(a)/sizeof(a[0]));


    float b[5] = {3.1, 5.8, 4.3, 1.6, 9.0};
    arr_sort(b, sizeof(b)/sizeof(b[0]));
    arr_print(b, sizeof(b)/sizeof(b[0]));


    return 0;
}

