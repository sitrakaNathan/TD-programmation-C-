#include <stdio.h>

int main ()
{
  float n,i,s;
  printf("donner Le nombre a n");
  scanf("%f",&n);
  s=0;
  for(i=1;i<=n;i++)
  {    
      s=s+(1/i);
  }    
  printf("la somme de 1+(1/2)+...(1/n) est %f", s);
  
 return (0);
}
