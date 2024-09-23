// 母湯喔

#include <stdio.h>

int main(){
    *(int *)100 = 25;
    printf("%d\n",*(int *)100);
    return 0;
}