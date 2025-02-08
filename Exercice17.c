#include <stdio.h> 

int main ()
{
  int N;
  float S = 0, d, f = 1, compteur = 1;
  printf ("Entrez un entier: ");
  scanf ("%d",&N);
  while ( compteur <= N )
  {
    f = f * compteur;//factorielle
    d = 1 / f;//division
    S = S + d;//cumul
    compteur++;
  }
  printf ("La somme des 1/1! + 1/2! + ... + 1/%d! vaut %.3f\n", N, S);
return (0);
}
  
