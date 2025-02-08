#include <stdio.h>

int main ()
{
  int n,i,fact;
  printf("entrer La valeur de n ");
  scanf("%d",&n);
  fact=1;
  for(i=1;i<=n;i++)
  {
      fact=fact*i;
  }
  printf("Le factoriel de n est %d",fact);    
  
  
 return (0);
}
