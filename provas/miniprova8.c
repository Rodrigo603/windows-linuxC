#include <stdio.h>
#include <stdlib.h>

int main () {

    int n,cont_0s = 0,cont_0i = 0,qtd_numeros_s = 0,qtd_numeros_i = 0;
    printf("ordem da matriz: ");
    scanf("%d",&n);
    int matriz[n][n];
    for (int i = 0;i<n;i++) {
        for (int j = 0;j<n;j++) {
            scanf("%d",&matriz[i][j]);
        }
    }
    for (int i = 0;i<n;i++) {
        for (int j = 0;j<n;j++) {
            if (j >= i + 1) {
                qtd_numeros_s++;
                if (matriz[i][j] == 0) {
                    cont_0s++;
                }
            
            }else if (j <= i - 1 ) {
                qtd_numeros_i++;
                if (matriz[i][j] == 0) {
                    cont_0i++;
                }
            }
        }
    }
    if (qtd_numeros_i == cont_0i) {
        printf("S");
    }else if (qtd_numeros_s == cont_0s) {
        printf("I");
    }else {
        printf("matriz nao triangular");
    }
    return 0;
}