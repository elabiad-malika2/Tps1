#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nbrEl ;
    int T[20];
    int i ;

    printf("Veuillez entrer le nombre des elements du tableau : ");
    scanf("%d",&nbrEl);

    for(i=0;i<nbrEl;i++){
        printf("entrer le nombre de T[%d]",i+1);
        scanf("%d",&T[i]);
    }
    for(i=0;i<nbrEl;i++){
        printf("T[%d] : %d \n",i+1,T[i]);

    }
    return 0 ;

}
