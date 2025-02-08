#include <stdio.h>

int main ()
{
  int N, compteur, S = 0, f = 1;
  printf ("Entrez un entier: ");
  scanf ("%d",&N);
  for (compteur = 1; compteur <= N; compteur++)
  {
    f = f * compteur;//mise en factoriel
    S = S + f;//cumul
  }
  printf ("La somme 1! + 2! + ... + %d vaut %d\n", N, S);
return (0);
}
