/* programa que calcula el peso W = mg */
#include <stdio.h>
  #define g 9.8
int main()
{
  float W, masa;
  printf("ingresar la masa\n");
  scanf("%f",&masa);
  W = (masa*g);
  printf("el peso es = %f m/s2\n", W);

  return 0;
}
