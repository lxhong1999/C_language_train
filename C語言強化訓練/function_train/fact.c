#include <stdio.h>

int fact(int a){
    if (a<1) return 1;
    else return a*fact(a-1);
}

int main()
{
    int a = 5;
    printf("%d\n",fact(a));
    return 0;
}