
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
    
    int tab[c],n,s,e,u;
    u=0;
    miverina://ilay asaina averina 
    u++;
    if(u>3)
        exit(0);//quitter programme 
    printf("entrer la valeur de n");
    scanf("%d",&n);
    if((n<1)||(n>50))
        goto miverina;//miverina ary am miverina

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
    