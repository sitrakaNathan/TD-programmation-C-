#include <stdio.h>

int main ()
{
  int a,b,c;
  printf("Les trois valeurs sont");
  scanf("%d",&a);
  scanf("%d",&b);
  scanf("%d",&c);
  if ((a>b) && (a>c))
  {
      printf(" Le maximum est %d",a);
  }
  else if ((b>c) && (b>a))
  {
      printf("Le maximum est %d",b);
  }
  else
  {
      printf("Le maximum est %d",c);
  }            
  
  
  
  
 return (0);
}
