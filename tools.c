#include "tools.h"

int maxNum(int arr[], int size){
    int res = arr[0];

    for (int i=1;i<size;i++){
        if (arr[i]>res){
            res = arr[i];
        }
    }

    return res;
}