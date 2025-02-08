#include <stdio.h>

int main ()
{
  int a,b,c;
  printf("Le valeur Des variables a et b est: \n");
  scanf("%d",&a);
  scanf("%d",&b);
  c=a;
  a=b;
  b=c;
  printf("la nouvelle valeur de a est %d et celle de b est %d ",a,b);
  
  
  
 return (0);
}
