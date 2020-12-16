/*programa que despliega menu para realizar acciones */
#include <stdio.h>

void ingresar_matriz(int matriz01[][10], int matriz02[][10], int
filas01, int columnas01, int filas02, int columnas02);
/*renglon 58 */
void producto_matrices(int matriz01[][10], int matriz02[][10], int
matriz_producto[][10], int filas01, int columnas01, int filas02, int
columnas02);
void mostrar(int mult[][10], int filas01, int columnas02);
void suma_matrices(int matriz01[][10], int matriz02[][10], int
suma_resultado[][10], int filas01, int columnas01);

int main()
{
  int matriz01[10][10], matriz02[10][10], mult[10][10], sum[10][10],
    filas01, columnas01, filas02, columnas02, i, j, k, marca;
  printf("este prgrama calcula suma o producto de matrices\n");
  printf("para sumar oprima 1, para multiplicar oprima 2\n");
  scanf("%d",&marca);
  if(marca==1){ 
    printf("Ingresar filas y columnas para las matrices: ");
    scanf("%d %d", &filas01, &columnas01);
      ingresar_matriz(matriz01, matriz02, filas01, columnas01,
filas01, columnas01);
/* funcion sumadora */
    suma_matrices(matriz01, matriz02, sum, filas01, columnas01);
/* mostrar suma*/
    mostrar(sum,filas01, columnas01);
}
  else{
      printf("Ingresar filas y columnas para la primer matriz: ");
    scanf("%d %d", &filas01, &columnas01);

    printf("Ingresar filas y columnas para la segunda matriz: ");
        scanf("%d%d", &filas02, &columnas02);
        while(columnas01 != filas02)
          {
        printf("error! los numeros no cuadran");
        printf("Ingresar filas y columnas para la primer matriz: ");
        scanf("%d%d", &filas02, &columnas02);
        printf("Ingresar filas y columnas para la segunda matriz: ");
        scanf("%d%d", &filas02, &columnas02);
    }

/* funcion para tomar las entradas de la primer matriz */
        ingresar_matriz(matriz01, matriz02, filas01, columnas01,
filas02, columnas02);
/*Funcion para multiplicar dos matrices */
        producto_matrices(matriz01, matriz02, mult, filas01,
columnas01, filas02, columnas02);

/* funcion para mostrar el resultado de la multiplicacion*/
        mostrar(mult, filas01, columnas02);
  }
    return 0;
}
/* renglon 57*/
void ingresar_matriz(int matriz01[][10], int matriz02[][10], int
filas01, int columnas01, int filas02, int columnas02)
{
    int i, j;
    printf("\n Ingresar elementos de la matriz 1:\n");
    for(i = 0; i < filas01; ++i)
    {
        for(j = 0; j < columnas01; ++j)
        {
            printf("Ingresar elemento a%d%d: ", i + 1, j + 1);
            scanf("%d", &matriz01[i][j]);
        }
    }

    printf("\n Ingresar elementos de la matriz 2:\n");
    for(i = 0; i < filas02; ++i)
    {
        for(j = 0; j < columnas02; ++j)
        {
            printf("Ingresar elemento b%d%d: ", i + 1, j + 1);
            scanf("%d", &matriz02[i][j]);
        }
    }
}

void producto_matrices(int matriz01[][10], int matriz02[][10], int
mult[][10], int filas01, int columnas01, int filas02, int columnas02)
{
    int i, j, k;

    /*Declarar elementos de la matriz producto como  0.*/
    for(i = 0; i < filas01; ++i)
    {
        for(j = 0; j < columnas02; ++j)
        {
            mult[i][j] = 0;
        }
    }

    /* Multiplicar matriz01 y matriz02 y guardar en  array mult.*/
    for(i = 0; i < filas01; ++i)
    {
        for(j = 0; j < columnas02; ++j)
        {
            for(k=0; k<columnas01; ++k)
            {
                mult[i][j] += matriz01[i][k] * matriz02[k][j];
            }
        }
    }
}

void mostrar(int mult[][10], int filas01, int columnas02)
{
    int i, j;
    printf("\n matriz salida:\n");
    for(i = 0; i < filas01; ++i)
    {
        for(j = 0; j < columnas02; ++j)
        {
            printf("%d  ", mult[i][j]);
            if(j == columnas02 - 1)
                printf("\n\n");
        }
    }
}

void suma_matrices(int matriz01[][10], int matriz02[][10], int
sum[][10], int filas01, int columnas01)
{
    int i, j, k;

    /*Declarando elementos de la matriz sum como 0 */
    for(i = 0; i < filas01; ++i)
    {
        for(j = 0; j < columnas01; ++j)
        {
            sum[i][j] = 0;
        }
    }

    /* sumar matrices 01 y 02 y guardar en array mult*/
    for(i = 0; i < filas01; ++i)
    {
        for(j = 0; j < columnas01; ++j)
        {
                sum[i][j] += matriz01[i][j] + matriz02[i][j];
        }
    }
}
