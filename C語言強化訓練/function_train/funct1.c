#include <stdio.h>

int *arr_get(int *arr){
    return arr;
}

int main(){
    int arr[2] = {0,2};
    printf("%d\n",*arr_get(arr));
    return 0;
}