#include <stdio.h>

int main ()
{
  int n,i,p;
  printf("donner un nombre n");
  scanf("%d",&n);
  p=1;
  for(i=1;i<=n;i++)
  {
      p=p*i;
  }
  printf("Le produit de 1 a %d est %d",n,p);   
   
 return (0);
}
