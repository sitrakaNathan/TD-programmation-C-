#include <stdio.h>

int main ()
{
  int A, B, reste, resultat;
  printf ("Entrez A: ");
  scanf ("%d",&A);
  printf ("Entrez B: ");
  scanf ("%d",&B);
  reste = A % B;
  while (reste != 0)
  {
    A = B;
    B = reste;
    reste = A % B;
  }
  printf ("Le PGCD (A,B) vaut %d\n", B);
return (0);
}
