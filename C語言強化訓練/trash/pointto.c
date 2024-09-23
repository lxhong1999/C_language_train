#include <stdio.h>

int a = 100;

void pt(int **p){
    *p = &a;
}

int main(){
    int *ptr = NULL;
    pt(&ptr);
    printf("%d\n",*ptr);
    return 0;
}