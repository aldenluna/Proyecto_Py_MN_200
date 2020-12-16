#include<stdio.h>
#include<math.h>
#include<stdlib.h>

float funcion1(float x); /* funcion exponencial, linea 25 */
float dfuncion1(float x); /* funcion derivada */

void adelante(float x0, float h, float(*f)(float), float(*g)(float));
void atras(float x0, float h, float(*f)(float), float(*g)(float));/*linea 41 */
void central(float x0, float h, float(*f)(float), float(*g)(float)); /* linea 54 */
float ferrabs(float x, float y); /* funcion de error */

int main()
{
  float x0,h ; int opcion;
  printf("progama de derivacion\n");
  printf("hacia adelante 1\t hacia atras 2\t central 3\n");
  printf("ingresa tu eleccion\n");
  scanf("%d",&opcion);
     printf(" ingresar punto a evaluar:\n");
     scanf("%f", &x0);
     printf("ingresar h:\n");
     scanf("%f", &h);
     switch(opcion){
     case 1:
          adelante(x0,h,funcion1,dfuncion1);
	  break;
     case 2:
          atras(x0,h,funcion1,dfuncion1);
	  break;
     case 3:
          central(x0,h,funcion1,dfuncion1);
	  break;
     }
	  return 0;
}
float funcion1(float x) {   return 1-exp(-(x/0.2));}
float dfuncion1(float x) {return 5*exp(-5*x);} /*derivada */
float ferrabs(float x, float y){return fabs((y-x)/y);}
void adelante(float x0,float h, float(*f)(float), float(*g)(float))
{
  float  x1, x2, derivada, resultado,error, f1,f2,f0;
          x2 = x0+2*h; x1 = x0+h;
     printf("\n h\t\t f'(x)\t\t error\n");
     derivada = (*g)(x0); /* derivada para calcular el error */
     f0 = (*f)(x0); f1 = (*f)(x1); f2 = (*f)(x2); /* partes de la funcion */
resultado = (4*f1-3*f0-f2)/(2*h);
error = ferrabs(resultado,derivada);
printf("%f\t%f\t%f\n",h,resultado,error);
}

void atras(float x0,float h, float(*f)(float), float(*g)(float))
{
  float  x1, x2, derivada, resultado,error, f1,f2,f0;
          x2 = x0-2*h; x1 = x0-h;
     printf("\n h\t\t f'(x)\t\t error\n");
     derivada = (*g)(x0); /* derivada para calcular el error */
     f0 = (*f)(x0); f1 = (*f)(x1); f2 = (*f)(x2); /* partes de la funcion */
 resultado = (-4*f1+3*f0+f2)/(2*h);
error = ferrabs(resultado,derivada);
printf("%f\t%f\t%f\n",h,resultado,error);
}

void central(float x0,float h, float(*f)(float), float(*g)(float))
{
  float  x2, x_2, x1, x_1, derivada, resultado,error, f_1,f_2,f1,f2;
     x2 = x0+2*h; x1 = x0+h;/* terminos hacia adelante */
     x_2 = x0-2*h; x_1 = x0-h;/* terminos hacia atras */
     printf("\n h\t\t f'(x)\t\t error\n");
     derivada = (*g)(x0); /* derivada para calcular el error */
     f_1 = (*f)(x_1); f_2=(*f)(x_2); f1 = (*f)(x1); f2 = (*f)(x2); /* partes de la funcion */
 resultado = (-f2+8*f1-8*f_1+f_2)/(12*h);
error = ferrabs(resultado,derivada);
printf("%f\t%f\t%f\n",h,resultado,error);
}
