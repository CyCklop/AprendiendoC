#include <stdio.h>

int main() {
    // OPERADORES ARITMETICOS
    printf("%d\n", 1 + 1); // 2
    printf("%d\n", 1 - 1); // 0
    printf("%d\n", 10 * 2); // 20
    printf("%d\n", 10 / 2); // 5

    // OPERADORES COMPARATIVOS
    printf("%d\n", 4 == 4); // 1
    printf("%d\n", 4 == '4'); // 0
    printf("%d\n", 4 != 5); // 1
    printf("%d\n", 4 < 5); // 1
    printf("%d\n", 4 >= 5); // 0

    // OPERADORES LOGICOS
    // OPERADOR 'and' es && y OPERADOR 'or' ||
    printf("%d\n", 1 && 1); // 1
    printf("%d\n", 1 && 0); // 0
    printf("%d\n", 0 && 1); // 0
    printf("%d\n", 0 && 0); // 0

    printf("%d\n", 1 || 1); // 1
    printf("%d\n", 1 || 0); // 1
    printf("%d\n", 0 || 1); // 1
    printf("%d\n", 0 || 0); // 0 
    return 0;
}