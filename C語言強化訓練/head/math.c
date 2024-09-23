// math_operations.c
#include "math.h"

// 函數實作
int add(int a, int b) {
    return a + b;
}

int sub(int a, int b) {
    return a - b;
}

int mult(int a, int b) {
    return a * b;
}

double div(int a, int b) {
    if (b != 0) {
        return (double)a / b;
    } else {
        return 0.0; // 避免除以0
    }
}
