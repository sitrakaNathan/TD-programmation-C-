#include <stdio.h>

int main ()
{
  int A, B, reste, PGCD;
  printf ("Entrez A: ");
  scanf ("%d",&A);
  printf ("Entrez B: ");  
  scanf ("%d",&B);
  reste = A % B;
  while ( reste != 0 )
  {
    A = B;
    B = reste; 
    reste = A % B;
  }
  PGCD = B;
  if ( PGCD == 1 )
  {
    printf ("A et B sont premiers entre eux\n");
  }
  else
  {
    printf ("A et B ne sont pas premiers entre eux\n");
  }
return (0);
}
