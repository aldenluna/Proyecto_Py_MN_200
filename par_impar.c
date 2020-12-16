/* verificar si un entero es par o impar */ 

#include <stdio.h>
int main() {
    int numero;
    printf("Ingrese un entero\t");
    scanf("%d", &numero);

    /* Verdad si el residuoo es 0 */
    if  (numero%2 == 0) {
        printf("%d es un entero par.\n",numero);
    }
    else {
        printf("%d es un entero impar.\n",numero);
    }

    return 0;
}
