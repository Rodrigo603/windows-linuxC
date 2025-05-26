#include <stdio.h>
#include <stdlib.h>

int main () {

    int matriz[3][2];
    int matrizb[2][3];
    int matrizc[3][3]; 
    int i,j,k;

    for (i = 0; i<3; i++ ) {
        for (j=0;j<2;j++ ) {
            scanf("%d",&matriz[i][j]);
        }
    }
    for (i = 0; i<2; i++ ) {
        for (j=0;j<3;j++ ) {
            scanf("%d",&matrizb[i][j]);
        }
    }
    for (i = 0; i<3;i++){
        for (j=0;j<3;j++){
            matrizc[i][j] = 0;
            for (k = 0; k<2;k++) {
                matrizc[i][j] += matriz[i][k] * matrizb[k][j]; 
            }//matrizc soma da multiplicação da linha 0 pela coluna 0 passando por cada elemento com o k
        }
    }
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ",matrizc[i][j]);
        }
    printf("\n");
 }
    return 0;
}