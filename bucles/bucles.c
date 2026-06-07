#include <stdio.h>

int main() {
    char *animales[] = {"perro", "gato", "tigre"};

    // BUCLE FOR
    // inicia el indice 'i' con 0
    // mientras 'i' sea menor que 3 se aumenta 'i+i' en cada iteracion con i++
    for (int i = 0; i < 3; i++) {
        printf("%s\n", animales[i]);
    }

    // BUCLE WHILE
    int entero = 100;
    int emergencia = 911;

    // este bucle corre hasta que entero sea menor o igual a emergencia
    while (entero <= emergencia) {
        printf("%d\n", entero);
        entero++;
    }

    return 0;
}