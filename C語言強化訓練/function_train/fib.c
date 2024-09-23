#include <stdio.h>

long fib(int f){
    if (f<=2) return 1;
    else return fib(f-1)+fib(f-2);
}

int main()
{
    int a = 2;
    scanf("%2d",&a);
    printf("%ld\n",fib(a));


    return 0;
}