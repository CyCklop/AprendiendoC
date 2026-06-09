#include <stdio.h>
/*
un puntero es una variable especial que almacena
la direccion de memoria de otro dato o variable
en lugar de almacenar su valor directamente
*/
int main()
{
    // variable de valor 10
    int valor = 10;
    /*
    se inicia un puntero con '*' y se le
    apunta con '&' a la variable 'valor'
    */
    int *puntero = &valor;
    /*
    se inicia un puntero que apunta a un 
    puntero con '**' y '&'
    */
    int **puntero_a_puntero = &puntero;

    // para imprimir un puntero se usa '%p'
    printf("La direccion de memoria del puntero es: %p\n", puntero);
    return 0;
}