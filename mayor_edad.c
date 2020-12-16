/* programa que revisa si alguien es mayor de edad */
#include <stdio.h>

int main() {
    int edad;
    printf("Cual es tu su edad\n");
    scanf("%d", &edad);
    printf("tu edad es %d\n",edad);
    /* Verificar la mayoria de edad */
    if  (edad >= 18) {
        printf("eres mayor de edad.\n");
    }
    else {
        printf("eres menor de edad\n");
    }

    return 0;
}
