#include <stdio.h>

int main ()
{
    int  n,e;
    printf("entrer la valeur de la taille du dimension \n");
    scanf("%d",&n);
    int a[n],b[n],s;
    for(e=0;e<n;e++)
    {
        printf("entrer la valeur de a[%d] \n",e);
        scanf("%d",&a[e]);
    }
    for(e=0;e<n;e++)
    {
        printf("entrer la valeur de b[%d] \n",e);
        scanf("%d",&b[e]);
    }
    for (e=0;e<n;e++)
    {
        s=s+(a[e]*b[e]);
    }
    printf("le produit scalaire des deux veucteurs est %d",s);

return(0);
}
    