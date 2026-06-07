#include <stdio.h>

// funcion sin retorno que toma 2 ints para sumarlos
void sumar(int primero, int segundo) {
    printf("%d\n", primero + segundo);
}

// funcion que retorna la multiplicacion de 2 ints
int multiplicar(int primero, int segundo) {
    return primero * segundo;
}

int main() {
    sumar(2, 2); // 4
    sumar(3, 4); // 7

    // variable que se le asigna la multiplicacion que retorna la funcion
    int resultado = multiplicar(3, 2);
    printf("%d\n", resultado); // 6

    return 0;
}