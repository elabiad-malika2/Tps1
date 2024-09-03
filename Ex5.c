#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nbrEl ;
    int T[20];
    int i ;
    int min ;

    printf("Veuillez entrer le nombre des elements du tableau : ");
    scanf("%d",&nbrEl);

    for(i=0;i<nbrEl;i++){
        printf("entrer le nombre de T[%d]",i+1);
        scanf("%d",&T[i]);
    }
    min=T[0];
    for(i=0;i<nbrEl;i++){
            if(T[i]<min){
                min=T[i];
            }
    }
    printf("le minimum est %d ",min);
    return 0 ;

}
