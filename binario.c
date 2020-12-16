#include <stdio.h>
int main(){
  int n, residuo;
  printf("ingrese n\n");
  scanf("%d",&n);
  while(n!=0)
    {
      residuo = n%2;
      n = n/2;
      printf("%d\n",residuo);
    }
  return 0;
}
