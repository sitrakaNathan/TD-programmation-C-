#include <stdio.h>

int main ()
{
  int n1,n2,c1,c2,moyenne;
  printf(" Les deux notes sont : ");
  scanf("%d",&n1);
  scanf("%d",&n2);
  printf("leur coefficient sont :");
  scanf("%d",&c1);
  scanf("%d",&c2);
  moyenne=((n1*c1)+(n2*c2))/(c1+c2);
  printf("la moyenne Des deux notes sont %d", moyenne);
  
  
  
  
 return (0);
}
