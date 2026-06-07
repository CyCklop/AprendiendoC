#include <stdio.h>

int main() {
    // CONDICIONAL 'IF'
    int autorizado = 1;

    // Si 'autorizado' es 1, puede ingresar, sino, no puede
    if (autorizado) {
        printf("Puede ingresar\n");
    } else {
        printf("No puede ingresar\n");
    }

    // CONDICIONAL IF, ELSEIF
    int entero = 100;

    if (entero == 99) {
        printf("Es 99\n");
    } else if (entero == 100) {
        printf("Es 100\n");
    } else {
        printf("No es ni 99, ni 100\n");
    }

    // CONDICIONAL SWITCH
    char color = 'A';

    // switch solo acepta valores int y char
    switch (color) {
        case 'V':
            printf("Éxito\n");
            break;
        case 'A':
            printf("Advertencia\n");
            break;
        default:
            printf("Error\n");
            break;
    }

    return 0;
}