#include <stdio.h>

int main(){
    int const a = 10;
    int const *b;
    int p = 1;
    b = &p;

    printf("%d\n",a); 
    printf("%d\n",*b); 

    return 0;
}