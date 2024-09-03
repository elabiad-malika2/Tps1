#include <stdio.h>
#include <stdlib.h>

int main()
{
    int TN[5]={};
    int TI[5]={};
    int i ;

    for(i=0;i<5;i++){
        printf("Veuillez entrer la valeur de T[%d] ",i+1);
        scanf("%d",&TN[i]);
    }
    for(i=0;i<5;i++){
        TI[4-i]=TN[i];
    }
    printf("Le tableau inverse \n");
    for(i=0;i<5;i++){
        printf("TI[%d] : %d \n",i+1,TI[i]);
    }

    return 0;
}
