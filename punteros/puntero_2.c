#include <stdio.h>

void change_value(char *letter)
{
    *letter = 'b';
}

int main()
{
    char l; 
    l = 'a';

    /*
    al usar un puntero en la funcion change_value
    al imprimir no crea una copia de l ni crea un nuevo
    espacio en memoria, sino que esta modificando el
    valor del espacio en el que se encuentra l
    */

    change_value(&l); // a esto se le conoce como pasar dato x referencia a una funcion
    printf("%c\n", l);
    return 0;
}