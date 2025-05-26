#include <stdio.h>
#include <stdlib.h>

int main () {

    int matriz[2][3];
    int matrizb[3][2];
    int matrizc[2][2];
    for (int i = 0; i<2;i++) {
        for (int j = 0;j<3;j++) {
            scanf("%d",&matriz[i][j]);
        }

    }
    for (int i =0;i<3;i++) {
        for (int j = 0;j<2;j++) {
            scanf("%d",&matrizb[i][j]);
        }
    }
    for (int i = 0;i<2;i++) {
        for (int j = 0;j<2;j++) {
            matrizc[i][j] = 0;
            for (int k = 0;k<3;k++) {
                matrizc[i][j] += matriz[i][k] * matrizb[k][j];        
            }
        }
    }
    for (int i = 0;i<2;i++) {
        for (int j =0;j<2;j++) {
        printf("%d ",matrizc[i][j]);
        }
    printf("\n");
    }
    return 0;
}