// main.c
#include <stdio.h>
#include "math.h"

int main() {
    int x = 10, y = 5;

    printf("Add: %d\n", add(x, y));
    printf("Subtract: %d\n", sub(x, y));
    printf("Multiply: %d\n", mult(x, y));
    printf("Divide: %.2f\n", div(x, y));

    return 0;
}