#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nbrEl ,i ;
    printf("Entrer le nombre d'elements :");
    scanf("%d",&nbrEl);
    int T[nbrEl];
    int C[nbrEl];
    for(i=0;i<nbrEl;i++){
        printf(" Entrer le tableau T[%d] ",i+1);
        scanf("%d",&T[i]);
    }
    for(i=0;i<nbrEl;i++){
        C[i]=T[i];
    }
    printf("Le tableau original \n:");
    for(i=0;i<nbrEl;i++){
        printf("T[%d] : %d  \n",i+1,T[i]);
    }
    printf("Le tableau copie \n:");
    for(i=0;i<nbrEl;i++){
        printf("C[%d] : %d  \n",i+1,C[i]);
    }
    return 0;
}
