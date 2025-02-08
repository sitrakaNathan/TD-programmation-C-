#include <stdio.h>

int main ()
{
  int n,i,somme;
  printf("donner un valeur de n");
  scanf("%d",&n);
  for(i=1;i<=n;i++)
  {
      somme=somme+i;
  }
  printf("La somme de 1+2+3+...+%d est %d ",n,somme);    
  
 return (0);
}
