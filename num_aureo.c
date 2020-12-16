#include <stdio.h>
int main() {
    float  qui, t1 = 0, t2 = 1, siguiente;
    int i, n;
    printf("ingrese el numero de terminos: ");
    scanf("%d", &n);
    printf("Serie de Fibonacci:\n");

    for (i = 1; i <= n; ++i) { 
	printf("%.0f, ", t1);
        siguiente = t1 + t2;
	qui = siguiente/t2;
        t1 = t2;
        t2 = siguiente;
    }
   printf("el cociente es: %f\n",qui); 
    return 0;
}
