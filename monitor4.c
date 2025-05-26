#include <stdlib.h>
#include <stdio.h>

int main () {

    int n,m,soma = 0,i = 0, j = 0;
    scanf("%d %d",&m,&n);
    int matriz[m][n];
    for (int i = 0;i<n;i++) {
        for (int j = 0;j<m;j++) {
            scanf("%d",&matriz[i][j]);
        }
    }
    while (i < m - 1 || j < n - 1) {
        soma += matriz[i][j];
        if(i<m -1 && (j == n - 1))
    }
    return 0;
}