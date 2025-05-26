#include <stdio.h>
#include <stdlib.h>

int main () {
    
    int matriz[3][3],i,j;
    for (i = 0;i<3;i++) {
        for (j=0; j<3;j++){
            scanf("%d",&matriz[i][j]);
        }
    }
    for (i=0;i<3;i++) {
        printf("%d ",matriz[i][i]); //diagonal principal
    }
    for (i=0;i<3;i++) {
        printf("%d ",matriz[i][3-1-i]); //diagonal secundaria i = 0 j = 3 -1 -0 == 0,2 1,1 2,0  
        }
    
    return 0;
    }