#include <stdio.h>
#include <string.h>

int main()
{
    char str1[] = "soltero", str2[] = "casado", str3[8];
    float sueldo, impuesto;
    printf("cual es su estado civil\t");
    fgets(str3,8,stdin); /* leer lista de caracteres, n-1 */
    printf("ingrese su sueldo\n");
    scanf("%f",&sueldo);
    if (strcmp(str1,str3)==0){
    if (sueldo < 32000) {
      impuesto = sueldo*0.1;
      printf("el impuesto es %f\n",impuesto);}
    else impuesto = sueldo*0.25;
    printf("el impuesto es %f\n", impuesto);
    }
    else {
      /*      printf("ingrese su sueldo\n");
	      scanf("%f",&sueldo);*/
    if (sueldo < 64000) {
      impuesto = sueldo*0.1;
      printf("el impuesto es %f\n",impuesto);}
    else impuesto = sueldo*0.25;
    printf("el impuesto es %f\n", impuesto);
}
    return 0;
}
