#include <stdio.h>
#include <stdlib.h>

int main () {

    int n,impares = 0,pares = 0;
    printf("ordem da matriz: ");
    scanf("%d",&n);
    int matriz[n][n];
    for (int i = 0;i<n;i++) {
        for (int j = 0;j<n;j++) {
            scanf("%d",&matriz[i][j]);
        }
    }
    for (int i = 0;i<n;i++) {
        for (int j =0;j<n;j++) {
            if (matriz[i][j] % 2 == 0) {
                pares++;
            }else if (matriz[i][j] % 2 !=0) {
                impares++;
            }
        }
    }
    if (pares >= impares) {
        printf("matriz par");
    }else {
    printf("matriz impar");
    }
    return 0;
}