#include <stdio.h>

int main()
{
    int a = 10;
    int fib[a];
    fib[0] = 1;
    fib[1] = 1;
    for (int i=2;i<a;i++){
        fib[i] = fib[i-1]+fib[i-2];
    }
    printf("%d\n",fib[9]);

    return 0;
}