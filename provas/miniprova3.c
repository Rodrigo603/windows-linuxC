#include <stdio.h>
#include <stdlib.h>

int main () {

    int n,soma_pares = 0,soma_impares = 0,subtracao = 0;
    printf("qual a ordem da matriz ?");
    scanf("%d",&n);
    int matriz[n][n];
    for (int i = 0;i<n;i++) {
        for (int j = 0;j<n;j++) {
            scanf("%d",&matriz[i][j]);
        }
    }
    for (int i = 0;i<n;i++) {
        for (int j = 0;j<n;j++) {
            if (j % 2 == 0) {
                soma_pares += matriz[i][j];
            }
            else {
                soma_impares += matriz[i][j];
            
        }
    }
}
    subtracao = soma_pares - soma_impares;
    printf("%d\n",soma_pares);
    printf("%d\n",soma_impares);
    printf(" subtracao e igual a: %d\n",subtracao);
    return 0;
}