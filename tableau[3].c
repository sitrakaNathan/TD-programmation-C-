/*
algorithme effacement de toute occurrence Des valeurs 0 
variable c<-50;
         tab:tableau_entier[c];
         n,s,e:entier,g;
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
    g<-0;
    pour(e<-0;e<n;e++)
        si(tab[e]<>0)
            tab[g]<-tab[e];
            g++;
        finsi
    finpour   
    pour(e<-0;e<n;e++)
        tab[e]<-0;
    finpour
    pour(g<-0;g<n;g++)
        si(tab[g]<>0)
            ecrire("la valeur de tab[",g,"] est ",tab[g] );   
        finsi
    finpour
fin   
*/              

#include <stdio.h>
#define c 50


int main ()
{
    int tab[c],n,s,e,max,f,maxi,tpos[c],tneg[c],g;

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
    printf("\n");
    g=0;
    for(e=0;e<n;e++)
    {
        if(tab[e]!=0)
        {
            tab[g]=tab[e];
            g++;
        }    
    
    }
    for(e=g;e<n;e++)
    {
        tab[e]=0;
    }
    for(g=0;g<n;g++)
    {
        if(tab[g]!=0)
        printf("la valeur de tab[%d] est %d \n",g,tab[g]);
    }

    return(0);
}
    