#include<stdio.h>
#include<math.h>
#include<stdlib.h>

float funcion1(float x); /* funcion exponencial */
float dfuncion1(float x);
float funcion2(float x); /* funcion polinomial */
float dfuncion2(float x);

void newrap(float x0,int n, float(*f)(float), float(*g)(float));
float ferrabs(float x, float y);

int main()
{
     float x0;
     int  N;
/* variables */
     printf("\n ingresar primera aproximacion:\n");
     scanf("%f", &x0);
     printf("numero de iteraciones:\n");
     scanf("%d", &N);
          newrap(x0,N,funcion1,dfuncion1);
	  newrap(x0,N,funcion2,dfuncion2);
return 0;
}
float funcion1(float x) {   return 8*(exp(-1*x)*(sin(x)))-1;}
float dfuncion1(float x) {return (-8*exp(-1*x)*sin(x))+(8*exp(-1*x)*cos(x));}
float funcion2(float x) {return (2*pow(x,3))-(11*pow(x,2))+17.7*x-5;}
float dfuncion2(float x) {return 6*pow(x,2)-22*x+17.7;}
float ferrabs(float x, float y){return fabs((y-x)/y);}
void newrap(float x0,int n, float(*f)(float), float(*g)(float))
{
  float  x1, f0, f1, g0,error;
     int vez = 1;
/* Metodo de Newton Raphson */
     printf("\nVez\tx1\t\tf(x1)\t\t error\n");
     do
     {
g0 = (*g)(x0);
f0 = (*f)(x0);
          if(g0 == 0.0)
          {
               printf("Error.");
               exit(0);
          }
          x1 = x0 - f0/g0;
error = ferrabs(x0,x1);
printf("%d\t%f\t%f\t%f\n",vez,x1,f1,error);
          x0 = x1;
          vez = vez+1;
          /*  */
          f1 = f(x1);
     }while(vez<=n);
     printf("\nRaiz es: %f\n", x1);
}
