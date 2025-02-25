
/*
algorithme la somme des elements du tableau
variable c<-50;
         tab:tableau_entier[c];
         n,s,e:entier;
debut
    ecrire("entrer la valeur de la taille du tableau ");
    lire(n);
    tantque(n>50)
        ecrire("la valeur doit etre inferieur ou egal a 50");
        ecrire("veuillez entrer un nouveau taille ");
        lire(n);
    fintantque
    pour(e-0;e<n;e++)
        ecrire("entrer tab[",e,"]");
        lire(tab[e]);
    finpour
    pour(e<-0;e<n;e++)
        ecrire("la valeur de tab[",e,"] est :",tab[e]); 
    finpour
    s<-0;
    pour(e<-0;e<n;e++)
        s<-s+tab[e];
    finpour
    ecrire(" la somme des elements du tableau est s=",s);    
fin    
 */         
             
#include <stdio.h>
#define c 50


int main ()
{
    int tab[c],n,s,e;

    printf("entrer la valeur de la taille du tableau \n");
    scanf("%d",&n);
    while(n>50)
    {
        printf("la valeur doit etre inferieur ou egal à 50 \n veuillez entrer un nouveau taille \n");
        scanf("%d",&n);
    }

    for(e=0;e<n;e++)
    {
        printf("entrer tab[%d] \n",e);
        scanf("%d",&tab[e]); 
    }
    for(e=0;e<n;e++)
    {
        printf("la valeur de tab[%d] est : %d \n ",e,tab[e]);
    }
    s=0;
    for(e=0;e<n;e++)
    {
        s=s+tab[e];
    }
    printf("la somme des elements du tableau est s=%d \n",s);

    return(0);
}
    