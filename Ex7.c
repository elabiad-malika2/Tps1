#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nbrEl ,i , j , pos ;
    printf("Entrer le nombre d'elements :");
    scanf("%d",&nbrEl);
    int T[nbrEl];
    for(i=0;i<nbrEl;i++){
        printf("T[%d] ",i+1);
        scanf("%d",&T[i]);
    }
    for(i=0;i<nbrEl;i++){
        for(j=i+1;j<nbrEl;j++){
            if(T[i]>T[j]){
                pos=T[i];
                T[i]=T[j];
                T[j]=pos;
            }
        }
    }
    printf("Le tableau croissant :");
    for(i=0;i<nbrEl;i++){
        printf("%d : \n",T[i]);
    }
    return 0;
}
