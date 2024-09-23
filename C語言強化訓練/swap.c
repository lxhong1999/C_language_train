#include <stdio.h>

void swap(int *a,int *b);


int main(){
    int a = 1,b = 0;
    int *ptr1 = &a, *ptr2 = &b;
    swap(ptr1,ptr2);
    printf("a:%d, b:%d\n",a,b);

    return 0;
}

void swap(int *a,int *b){
    int t = *a;
    *a = *b;
    *b = t;
}