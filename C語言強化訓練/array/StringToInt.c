#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <string.h>

int main(){
    char num[20]="";
    int n = 0;
    scanf("%19s",num);
    int l = sizeof(num)/sizeof(num[0]);
    for (int i=0;i<l;i++){
        if (isdigit(num[i])) n = 10*n + (num[i]-'0');
        else break;
        
    }
    printf("toint: %d\n",n);
    return 0;
}