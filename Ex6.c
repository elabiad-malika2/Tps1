#include <stdio.h>
#include <stdlib.h>

int main()
{
    int T[20];
    int i, nbrEl;
    int F;

    printf("Veuiller entre le nombre d'elements de tableau : ");
    scanf("%d",&nbrEl);

    for(i=0;i<nbrEl;i++){
        printf("T[%d] : ",i+1);
        scanf("%d",&T[i]);
    }
    printf("Veuillez entrer le facteur de multiplication :");
    scanf("%d",&F);
    for(i=0;i<nbrEl;i++){
        T[i]=T[i]*F ;
    }
    for(i=0;i<nbrEl;i++){
        printf("T[%d] : %d \n",i+1,T[i]);
    }

    return 0 ;
}
