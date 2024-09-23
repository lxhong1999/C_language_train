#include <stdio.h>

int main(){
    enum week{
    SUNDAY,    // 默认值为0
    MONDAY,    // 默认值为1
    TUESDAY,   // 默认值为2
    WEDNESDAY, // 默认值为3
    THURSDAY,  // 默认值为4
    FRIDAY,    // 默认值为5
    SATURDAY   // 默认值为6
    };
    enum week today = SUNDAY;
    if (today == SUNDAY)  printf("Today is Wednesday.\n");
    return 0;
}