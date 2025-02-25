/*
algorithme affichage Des valeurs positif et negatif
variable c<-50;
         tab:tableau_entier[c];
         n,s,e:entier,g
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
        si(tab[e]>0)
            tpos[e]<-tab[e];
            g++;
        finsi
    finpour   
    pour(e<-g;e<n;e++)
        tpos[e]<-0;
    finpour
    pour(e<-0;e<n;e++)
        si(tpos[e]<>0)
            ecrire("la valeur de tpos[",e,"] est ",tpos[e]);
        finsi
    finpour 
    g<-0;       
    pour(e<-0;e<n;e++)
        si(tab[e]<0)
            tneg[e]<-tab[e];
            g++;
        finsi
    finpour   
    pour(e<-g;e<n;e++)
        tneg[e]<-0;
    finpour
    pour(e<-0;e<n;e++)
        si(tneg[e]<>0)
            ecrire("la valeur de tneg[",e,"] est ",tneg[e]);
        finsi
    finpour  
fin         
*/
    
    

#include <stdio.h>
#define c 50


int main ()
    {
    int tab[c],n,e,tpos[c],tneg[c],g;

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
        if(tab[e]>0)
        {
            tpos[g]=tab[e];
            g++;
        }
    }
    for (e=g;e<n;e++)
    {
        tpos[e]=0;
    }

    for(e=0;e<n;e++)
    {
        if(tpos[e]!=0)
        printf("la valeur de tpos[%d] est %d \n",e,tpos[e]);
    }
    printf("\n");
    g=0;
    for(e=0;e<n;e++)
    {
        if(tab[e]<0)
        {
            tneg[g]=tab[e];
            g++;
        }
    }
    for (e=g;e<n;e++)
    {
        tneg[e]=0;
    } 
    for (e=0;e<n;e++)
    {
        if(tneg[e]!=0)
        printf("la valeur de tneg[%d] est %d \n",e,tneg[e]);
    }   
    return(0);
}
    