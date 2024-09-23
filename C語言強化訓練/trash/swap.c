#include <stdio.h>

void swap(int *a, int *b){
    int t = *a;
    *a = *b;
    *b = t;
}

int main(){
    int a=1,b=2;
    int *ptr1, *ptr2;
    ptr1 = &a;
    ptr2 = &b;
    swap(&a,&b);
    printf("a;%d, b:%d\n",a,b);
    return 0;
}