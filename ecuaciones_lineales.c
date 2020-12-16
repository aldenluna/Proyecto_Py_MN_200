#include<stdio.h>
#include<math.h>

/* El sistema es
   10x + 2y - z = 27
   -3x - 6y + 2z = -61.5
   x + y + 5z = -21.5
 Ecuaciones
   x = (27-2y+z)/10
   y = (61.5-3x+2z)/6
   z = (-21.5-x-y)/5
*/
/* definir funciones */
#define f1(x,y,z)  (27-2*y+z)/10
#define f2(x,y,z)  (61.5-3*x+2*z)/6
#define f3(x,y,z)  (-21.5-x-y)/5
void jacobiano(float x0, float y0, float z0, int ene);
void gauss_seidel(float x0, float y0, float z0, int ene);
/* funcion Main*/
int main()
{
 float x0=0, y0=0, z0=0, x1, y1, z1, e1, e2, e3, e;
 int iteraciones, opcion; 
 printf("progama de ecuaciones lineales\n");
  printf("Metodo de Jacobi 1\t Metodo de Gauss-Seidel 2\n");
  printf("ingresa tu eleccion\n");
  scanf("%d",&opcion);
 printf("ingresar numero de iteraciones:\n");
 scanf("%d", &iteraciones);
 
  switch(opcion){
     case 1:
      printf("Metodo de Jacobi\n");
           jacobiano(x0,y0,z0,iteraciones);
	  break;
     case 2:
      printf("Metodo de Gauss-Seidel\n");
          gauss_seidel(x0, y0, z0, iteraciones);
	  break;
     }

/*
 jacobiano(x0,y0,z0,iteraciones);
  gauss_seidel(x0, y0, z0, iteraciones);
*/
 return 0;
}

 void jacobiano(float x0, float y0, float z0, int ene){
  float x1, y1, z1, e1, e2, e3;
  int cuenta = 1;
   printf("\nCuenta\tx\te1\ty\te2\tz\te3\n");
 do
 {
  /* Calculos*/
  x1 = f1(x0,y0,z0);
  y1 = f2(x0,y0,z0);
  z1 = f3(x0,y0,z0);
  /*printf("%d\t%0.4f\t%0.4f\t%0.4f\n",cuenta, x1,y1,z1);

   Error */
  e1 = fabs(x0-x1);
  e2 = fabs(y0-y1);
  e3 = fabs(z0-z1);
printf("%d\t%0.4f\t%0.4f\t%0.4f\t%0.4f\t%0.4f\t%0.4f\n",cuenta, x1,e1,y1,e2,z1,e3);
  cuenta++;

  /* valores para la proxima iteracion */
  x0 = x1;
  y0 = y1;
  z0 = z1;
 }while(cuenta<=ene);

 printf("\nSolucion: x=%0.3f, y=%0.3f y z = %0.3f\n",x1,y1,z1);
}


void gauss_seidel(float x0, float y0, float z0, int ene){
  float x1, y1, z1, e1, e2, e3;
  int cuenta =1;
/*   printf("\nCount\tx\ty\tz\n");*/
printf("\nCuenta\tx\te1\ty\te2\tz\te3\n");
 do
 {
  /* Calculos*/
  x1 = f1(x0,y0,z0);
  y1 = f2(x1,y0,z0);
  z1 = f3(x1,y1,z0);
/*  printf("%d\t%0.4f\t%0.4f\t%0.4f\n",cuenta, x1,y1,z1);*/

  /* Error */
  e1 = fabs(x0-x1);
  e2 = fabs(y0-y1);
  e3 = fabs(z0-z1);
printf("%d\t%0.4f\t%0.4f\t%0.4f\t%0.4f\t%0.4f\t%0.4f\n",cuenta, x1,e1,y1,e2,z1,e3);
  cuenta++;

  /* valores para la proxima iteracion */
  x0 = x1;
  y0 = y1;
  z0 = z1;

 }while(cuenta<=ene);

 printf("\nSolucion: x=%0.3f, y=%0.3f y z = %0.3f\n",x1,y1,z1);
}
