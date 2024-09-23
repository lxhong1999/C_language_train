#include <stdio.h>
#include <string.h>

int main(void){
    int i = 5;
    char s[8] = "Hi 12345";
    printf("address of i: %p\naddress of s: %p\n", &i, s);  // i: 0028ff1c, s: 0028ff14
    strcpy(s, "hello s");
    printf("value of s: %s\nvalue of i: %d\n", s, i);  // s: hello sky, : 121

    return 0;
}