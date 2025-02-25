/*
algorithme la somme des elements du tableau
variable c<-50;
         tab:tableau_entier[c];
         n,s,e,g:entier;
debut
    ecrire("entrer la valeur de la taille du tableau ");
    lire(n);
    tantque(n>50)
        ecrire("la valeur doit etre inferieur ou egal a 50");
        ecrire("veuillez entrer un nouveau taille ");
        lire(n);
    fintantque
    pour(e<-0;e<n;e++)
        ecrire("entrer tab[",e,"]");
        lire(tab[e]);
    finpour
    pour(e<-0;e<n;e++)
        ecrire("la valeur de tab[",e,"] est :",tab[e]); 
    finpour
    e<-0;
    g<-n-1;
    tantque (e<g)
        var<-tab[e];
        tab[e]<-tab[g];
        tab[g]<-var;
        e++;
        g--;
    fintantque
    pour (e<-0;e<n;e++)
        ecrire ("la valeur de tab[",e,"] est ",tab[e]);
    finpour
fin        
*/    

#include <stdio.h>
#define c 50


int main ()
{
    int tab[c],n,e,g,var;

    printf("entrer la valeur de la taille du tableau ");
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
    e=0;
    g=n-1;
    while(e<g)
    {
        var=tab[e];
        tab[e]=tab[g];
        tab[g]=var;  
        e++;
        g--;  
    }

    for(e=0;e<n;e++)
    {
        printf("la valeur de tab[%d] est : %d \n ",e,tab[e]);
    }
    return(0);
}
    