#include <stdio.h>

int main ()
{
  float a,b,c,delta,sol1,sol2,d,k,e;
  printf("on a l equation ax^2+bx+c=0 avec la valeur de a , b , c est :");
  scanf("%f",&a);
  scanf("%f",&b);
  scanf("%f",&c);
  delta=(b*b)-(4*a*c);
  if(delta>0)
  {
      sol1=(-b-sqrt(delta))/(2*a);
      sol2=(-b+sqrt(delta))/(2*a);
      printf("l equation admet deux solution sol1=%d et sol2=%d" , sol1, sol2);
  }
  else if (delta==0)
  {
      sol1= (-b)/(2*a);
      sol2=sol1;
      printf("l equation admet une solution double sol1=sol2=%d",sol2);
  }
  else 
  {
      k=sqrt(-delta);
      d=(-b)/(2*a);
      e=k/(2*a);
      printf("l equation admet la solution sol1=%d+%di et sol2=%d-%di", d,e,d,e);
  }
              
  
  
  
  
  
 return (0);
}
