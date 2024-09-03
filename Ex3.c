#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nbrEl ;
    int T[20];
    int i ;
    int Somme;

    printf("Veuillez entrer le nombre des elements du tableau : ");
    scanf("%d",&nbrEl);

    for(i=0;i<nbrEl;i++){
        printf("entrer le nombre de T[%d]",i+1);
        scanf("%d",&T[i]);
    }
    Somme=0;
    for(i=0;i<nbrEl;i++){
        Somme=Somme+T[i];
    }
    printf("La somme est %d ",Somme);
    return 0 ;

}
