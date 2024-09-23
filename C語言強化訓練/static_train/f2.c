#include <stdio.h>

// 使用 extern 聲明 externalVar 變數
extern int externalVar;

void modifyExternalVar() {
    externalVar = 200; // 修改 externalVar 的值
    printf("externalVar in file2.c: %d\n", externalVar);
}