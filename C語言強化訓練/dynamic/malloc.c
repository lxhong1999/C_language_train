#include <stdio.h>
#include <stdlib.h>

int main(){
    int *arr, *arr1;
    arr = (int *) malloc(5*sizeof(int));
    arr1 = (int *) calloc(5,sizeof(int));
    if (arr==NULL) {
        printf("記憶體分配失敗\n");
        return 1;
    } 
    for (int i = 0; i < 5; i++) {
        arr[i] = i + 1;
        //printf("%d \n", arr[i]);
    }

    arr = (int*) realloc (arr, 10*sizeof(int));
    for (int i = 0; i < 10; i++) {
        //arr1[i] = i + 1;
        printf("%d ", *(arr + i));
    }

    free(arr1);
    return 0;

}