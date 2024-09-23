#include <stdio.h>

int main() {
    char s[11] = "1234567890";
    char *ptr = s; // 正確的指標初始化
    int l = 0;
    while (*ptr++ != '\0') { l++; } // 遍歷字符串，計算長度
    printf("%d\n", l);
    return 0;
}
