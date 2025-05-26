#include <stdio.h>
#include <stdlib.h> 

int main () {

    int matriz [3][2];
    int matriz_t[2][3];
    int i,j;
    for (i = 0; i<3;i++) {
        for (j = 0;j<2; j ++) {
            scanf("%d",&matriz[i][j]);
        }
        printf("\n");
    }    
    for (i = 0; i<2;i++) {
        for (j = 0;j<3; j++) {
            matriz_t[i][j]=matriz[j][i];
        }
        printf("\n");
    }    
    for (i = 0; i<2;i++) {
        for (j = 0;j<3; j++) {
            printf("%d",matriz_t[i][j]);
        }
        printf("\n");
    }    
    return 0;
}