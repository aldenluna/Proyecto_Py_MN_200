#include <stdio.h>
 
int main () {

     int opcion, bolsas;
      float compra, descuento, total, costo_bolsas;
  printf("bienvenidos al programa de descuento, por favor seleccione que opcion desea elegir\n");
  printf("perfumeria, 1\n");
  printf("salchichoneria, 2\n");
  printf("carniceria, 3\n");
  printf("limpieza, 4\n");

  printf("ingresa tu elección:\n");
  scanf("%d", &opcion);
 printf("ingresa la compra:\n");
  scanf("%f", &compra);
   printf("ingresa la cantidad de bolsas:\n");
  scanf("%d", &bolsas);
     costo_bolsas = 0.1*bolsas;
   switch(opcion) {
      case 1 :
      descuento = compra*0.2;
         printf("el descuento es, %f\n", descuento );
         printf("el pago total es  %f\n", compra -  descuento + costo_bolsas);
         break;
      case 2 :
        descuento = compra*0.4;
         printf("el descuento es, %f\n", descuento );
         printf("el pago total es  %f\n", compra -  descuento + costo_bolsas);
         break;
      case 3:
           descuento = compra*0.2;
         printf("el descuento es, %f\n", descuento );
         printf("el pago total es  %f\n", compra -  descuento + costo_bolsas);
         break;
      case 4 :
           descuento = compra*0.35;
         printf("el descuento es, %f\n", descuento );
         printf("el pago total es  %f\n", compra -  descuento + costo_bolsas);
         break;

   }

 
   return 0;
}
