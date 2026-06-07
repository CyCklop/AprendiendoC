#include <stdio.h>

int main() {
    // TIPO DE DATOS
    char libro[] = "Metro 2033"; // variable con muchos caracteres debe ser 'char variable[]'
    int numero = 100; // variable de numero entero
    float decimal = 3.14; // variable de numero decimal

    /*
    Este lenguaje de programacion no cuenta con el tipo de dato boolean, pero si utiliza 1 y 0s
    */
    int verdadero = 1;
    int falso = 0;

    printf("%s\n",libro); // %s sirve para imprimir una variable string, en este caso 'char libro[]'
    printf("%d\n",numero); // %d sirve para imprimir una variable numerica entera
    printf("%f\n",decimal); // %f sirve para imprimir una variable numerica decimal

    // ESTRUCTURA DE DATOS
    int numeros[] = {1, 2, 3, 4, 5}; // Lista de numeros
    printf("%d\n",numeros[0]); // para imprimir algo especifico de una lista se usa el indice el cual empieza en 0

    char *animales[] = {"perro", "gato"}; // Lista de textos, debe ponerse un '*' antes del nombre de la lista para imprimirla
    printf("%s\n",animales[0]);
    
    // para poner un limite de datos a una lista se hace en los corchetes
    char *lista_limitada[3] = {"dato_1", "dato_2", "dato_3"}; // se la asigno un limite de 3 datos
    printf("%s\n",lista_limitada[0]);

    // CONSTANTES
    const float pi = 3.14; // a diferencia de las variables comunes, una variable constate es inmutable
    printf("%f\n",pi);

    return 0;
}