#include <stdio.h>

int main(){
    int arr[10];
    int *ptr = NULL;
    int n = 0;
    for (ptr = &arr[0];ptr <= &arr[9];) {*ptr++ = n;n++;}

    for (int i = 0; i < 10; i++) {
        printf("arr[%d] = %d\n", i, arr[i]);
    }
    
    printf ("%d\n",*--ptr);

    int arr1[10];
    int *ptr1 = NULL;
    
    
    for (ptr1 = &arr[9];ptr1 <= &arr[0];) *--ptr1 = 0;

    

    for (int i = 0; i < 10; i++) {
        printf("arr[%d] = %d\n", i, arr[i]);
    }

    return 0;
}