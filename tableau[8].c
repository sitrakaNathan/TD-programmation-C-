/*algorithme la valeur maximale et minimale des elements du tableau 
variable c<-50;
         tab:tableau_entier[c];
         n,s,e:entier,max,maxi;
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
    max<-tab[0];
    maxi<-0;
    pour(e<-0;e<n;e++)
        si(tab[e]>max)
            max<-tab[e];
            maxi<-e;
        finsi
    finpour
    ecrire("la valeur maximale est ",max," qui est en position tab[",maxi,"]");
    min<-tab[0];
    mini<-0;
    pour(e<-0;e<n;e++)
        si(tab[e]>max)
            min<-tab[e];
            mini<-e;
        finsi
    finpour
    ecrire("la valeur maximale est ",min," qui est en position tab[",mini,"]");
fin     
*/       
    

#include <stdio.h>
#define c 50


int main ()
{
    int tab[c],n,e,max,maxi,mini,min;

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

    max=tab[0];
    maxi=0;
    for(e=1;e<n;e++)
    {
        if(tab[e]>max)
        {
            max=tab[e];
            maxi=e;
        }
    }
    printf("la valeur maximale est %d qui est en position tab[%d] \n",max,maxi);
    min=tab[0];
    mini=0;
    for(e=1;e<n;e++)
    {
        if(tab[e]<min)
        {
            min=tab[e];
            mini=e;
        }
    }
    printf("la valeur minimale est %d qui est en position tab[%d] \n",min,mini);
    

    return(0);
}
    