#include <stdio.h>

int externalVar = 100; // 定義 external 變數

void printExternalVar() {
    printf("externalVar in file1.c: %d\n", externalVar);
}