#include <stdio.h>

int main(){
    int a = 10;
    int *ptr=NULL;
    ptr = &a;
    printf("%d\n", *ptr);
    return 0;
}