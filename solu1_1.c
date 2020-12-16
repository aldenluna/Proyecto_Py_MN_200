/* programa que calcula el volumen a partir del radio */
#include <stdio.h>
  #define PI 3.1415926
int main()
{
  float radio, radio3, volumen;
  printf("ingresar el radio\n");
  scanf("%f",&radio);
  radio3 = radio*radio*radio; /* calcula r3 */
    volumen = (4*PI*radio3)/3;
  printf("volumen = %f\n", volumen);

  return 0;
}
