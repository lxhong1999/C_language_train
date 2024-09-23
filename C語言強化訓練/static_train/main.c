#include <stdio.h>

void printExternalVar();
void modifyExternalVar();

int main() {
    printExternalVar();  // 會打印 100
    modifyExternalVar(); // 會把 externalVar 改成 200
    printExternalVar();  // 會打印 200
    return 0;
}