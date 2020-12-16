#include <stdio.h>
#include <math.h>

int main()
{
  int a,b,c,disc;
  float raiz1, raiz2;

  printf("ingresar los coeficientes a, b, y c\n");
  scanf("%d %d %d",&a, &b, &c);

  disc = b*b - 4*a*c;
  if (disc < 0){ 
    printf("error: las soluciones no son reales\n");
  }
  else {
    raiz1 = (-b + sqrt(disc))/(2*a);
    raiz2 = (-b - sqrt(disc))/(2*a);
    printf("primera raiz = %.2f\n", raiz1);
    printf("segunda raiz = %.2f\n", raiz2);
    }

  return 0;
}
