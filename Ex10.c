#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nbrEl ;
    int T[20];
    int i ;
    int Re , c=0;

    printf("Veuillez entrer le nombre des elements du tableau : ");
    scanf("%d",&nbrEl);

    for(i=0;i<nbrEl;i++){
        printf("entrer le nombre de T[%d]",i+1);
        scanf("%d",&T[i]);
    }
    printf("Veuillez entrer l'element de recherche : ");
    scanf("%d",&Re);
    for(i=0;i<nbrEl;i++){
        if(T[i]==Re){
            c++;
        }
    }
    if(c>0){
        printf("element %d est present %d fois",Re,c);
    }else{
        printf("element %d n'est pas present ",Re);

    }

    return 0 ;

}
