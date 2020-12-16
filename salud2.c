/* Programa que calcula el imc, e imprime los datos */
#include <stdio.h>
  #define g 9.8
int main()
{ 
  float peso, estatura, imc;
  /*  printf("ingresa tu nombre:\n");
  scanf("%s", nombre);
  printf("ingresa tu edad:\n");
  scanf("%d", &edad);*/
  printf("ingresa tu peso:\n");
  scanf("%f", &peso);
  printf("ingresa tu estatura (en metros):\n");
  scanf("%f", &estatura);
 
  imc = peso/(estatura*estatura);
  if(imc < 18.5){
    printf("tu imc es %f, peso bajo\n", imc);}
  else if(imc < 24.9){
    printf("tu imc es %f, peso normal\n", imc);}
   else if(imc < 29.9){
    printf("tu imc es %f, sobrepeso\n", imc);}
   else if(imc < 34.5){
    printf("tu imc es %f, obesidad tipo 1\n", imc);}
   else if(imc < 39.9){
    printf("tu imc es %f, obesidad tipo 2\n", imc );}
   else if(imc > 40){
    printf("tu imc es %f, hiper obesidad 1\n", imc);}
 
  return 0;
}

