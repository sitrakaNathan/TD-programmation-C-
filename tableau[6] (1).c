#include <stdio.h>

int main ()
{
int n,m,e,f,o;
printf("entrer la dimension du tableau a \n");
scanf("%d",&n);
printf("entrer la dimension du tableau b \n");
scanf("%d",&m);
int a[n],b[m];
for(e=0;e<n;e++)
{
    printf("entrer la valeur de a[%d] \n ",e);
    scanf("%d",&a[e]);
}
printf("\n");
for(e=0;e<m;e++)
{
    printf("entrer la valeur de b[%d] \n ",e);
    scanf("%d",&b[e]);
    a[n]=b[e];
    n++;
}
printf("\n");
for(e=0;e<n;e++)
{
    printf("la valeur de a[%d] est %d \n",e,a[e]);
}

return(0);
}
    