#include<stdio.h>
int main()
{
  int x, y, z, a, b,c, zz, yy;
  printf("int x\n");
  scanf("%d",&x);
  a = 1; // contadores de repeticion
  b=0;
  c=0;
  do{
    y = x%10;
    x = (x-y)/10;
    z = x%10;
    if(z!=y)
      {x = (x-z)/10;
	yy = x%10;
	if (yy!=z)
	  if(yy!=y)
	    {x = (x-yy)/10;
	      zz=x%10;
	      if(zz!=yy)
		if(zz!=z)
		  if(zz!=y)
		    /*marcador positivo*/
		    a = a+1;
		  else{b=b+1;}
	    }
	  else{b=b+1;}
      }
    else {b=b+1;}
       c = c+ 1;
  }
  while(x!=0);
  if(b!=0){printf("numero invalido\n");}
  else if(a==2) // si la cantidad de cifras es 4,
            {printf("numero valido\n");}
  else if(c>1) //si la cantidad de cifras es mayor que 4
    {printf("numero invalido\n");}

  return 0;
}
