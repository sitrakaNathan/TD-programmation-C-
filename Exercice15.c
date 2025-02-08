#include <stdio.h>
#include <math.h>

int main ()
{
  int N, compteur, d, S = 0;
  printf ("Entrez un entier: ");
  scanf ("%d",&N);
  for (compteur = 0; compteur <= N; compteur++)
  {
    d = pow (10, compteur);
    S = S + d;
  }
  printf ("La somme des 1 + 10 + 10² + ... + 10^%d vaut %d\n", N, S);
return (0);
}
