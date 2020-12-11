#include<stdio.h>
#include<math.h>
#include<stdlib.h>

float funcion1(float x); /* funcion exponencial */
float dfuncion1(float x);
float funcion2(float x); /* funcion polinomial */
float dfuncion2(float x);
float ferrabs(float x, float y);
void secant(float x0, float x1, int n,float (*f)(float x),
float (*er)(float x, float y));
int main()
{
     float x0, x1;
     int  N;

     printf("\n ingresar extremo izquierdo:\n");
     scanf("%f", &x0);
     printf("\n ingresar extremo derecho:\n");
     scanf("%f", &x1);
     printf("numero de repeticiones:\n");
     scanf("%d", &N);
     secant(x0,x1,N,funcion1,ferrabs);
       /*segunda funcion*/
     printf("\n ingresar extremo izquierdo:\n");
     scanf("%f", &x0);
     printf("\n ingresar extremo derecho:\n");
     scanf("%f", &x1);
     printf("numero de repeticiones:\n");
     scanf("%d", &N);

     secant(x0,x1,N,funcion2,ferrabs);
     return 0;
}

float funcion1(float x) {   return 8*(exp(-1*x)*(sin(x)))-1;}

float funcion2(float x) {return (2*pow(x,3))-(11*pow(x,2))+17.7*x-5;}

float ferrabs(float x, float y){return fabs((y-x)/x);}
void secant(float x0,float x1, int n,float (*f)(float x),
float (*er)(float x, float y))
{
  int vez = 1;
  float f0, f1, f2, x2, error;
     /* metodo de la secante */
     printf("\nVez\tx1\t\tx2\t\tf(x2)\t\t error\n");
     do
     {
       f0 = (*f)(x0);
     f1 = (*f)(x1);
          if(f0 == f1)
          {
               printf("Error.");
               exit(0);
          }

          x2 = x1 - (x1 - x0) * f1/(f1-f0);
          f2 = f(x2);
          error = ferrabs(x1,x0);
          printf("%d\t%f\t%f\t%f\t%f\n",vez,x1,x2,f2,error);

          x0 = x1;
          f0 = f1;
          x1 = x2;
          f1 = f2;

          vez = vez + 1;

     }while(vez<=n);

     printf("\nRaiz es: %f\n", x2);

}
