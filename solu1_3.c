/* Programa que calcula el imc, e imprime los datos */
#include <stdio.h>
  #define g 9.8
int main()
{
  char nombre[40];
  int edad;
  float peso, estatura, imc;
  printf("ingresa tu nombre:\n");
  scanf("%s", nombre);
  printf("ingresa tu edad:\n");
  scanf("%d", &edad);
  printf("ingresa tu peso:\n");
  scanf("%f", &peso);
  printf("ingresa tu estatura:\n");
  scanf("%f", &estatura);
  
  imc = peso/(estatura*estatura);
  printf("la masa corporal de %s\t de edad %d\t y %f m de estatura es %f kg/m2\n", nombre, edad, estatura, imc);

  return 0;
}

