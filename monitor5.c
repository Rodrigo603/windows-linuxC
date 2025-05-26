#include <stdio.h>
#include <stdlib.h>

int main () {

    int n,soma_1linha = 0,soma_ultimacoluna = 0,soma_diagonal_principal = 0,soma_total = 0;
    scanf("%d",&n);
    int matriz[n][n];
    for (int i = 0;i<n;i++) {
        for (int j = 0;j<n;j++) {
            scanf("%d",&matriz[i][j]);
        }
    }
    for (int i = 0;i<n;i++) {
        for (int j = 0;j<n;j++) {
            soma_total += matriz[i][j];
            if (i == j) {soma_diagonal_principal += matriz[i][j];}
            if (i == 0) {
                soma_1linha+=matriz[i][j];
                
            }if (j == n -1) {
                soma_ultimacoluna+=matriz[i][j];
            }
        }
    }
    printf("%d\n",soma_1linha);
    printf("%d\n", soma_ultimacoluna);
    printf("%d\n",soma_diagonal_principal);
    printf("%d",soma_total);
    return 0;
}