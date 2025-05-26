#include <stdio.h>
#include <stdlib.h>

int main () {

    int matriz[3][3];
    int matrizb[3][3];
    int matrizc[3][3];
    int i,j;
    for (i = 0; i<3; i++ ) {
        for (j=0;j<3;j++ ) {
            scanf("%d",&matriz[i][j]);
        }
    }
    for (i = 0; i<3; i++ ) {
        for (j=0;j<3;j++ ) {
            scanf("%d",&matrizb[i][j]);
        }
    }
    for (i = 0; i<3; i++ ) {
        for (j=0;j<3;j++ ) {
            matrizc[i][j] = matriz[i][j] + matrizb[i][j];
            printf("%d ",matrizc[i][j]);
        }
    printf("\n");
    }
    
    return 0;
}