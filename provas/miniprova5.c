#include <stdio.h>
#include <stdlib.h>

int main () {

    int n;
    printf("numero de elementos da array: ");
    scanf("%d",&n);
    int array_par[n],array_impar[n],array_junta[n];
    for (int i = 0;i<n;i++) {
        scanf("%d",&array_par[i]);
    }
    for (int i = 0;i<n;i++) {
        scanf("%d",&array_impar[i]);
    }
    for (int i = 0;i<n;i++) {
        if (i % 2 == 0) {
            array_junta[i] = array_par[i];
        }else if (i % 2 != 0) {
            array_junta[i] = array_impar[i];
        }
    }
    for (int i = 0;i<n;i++) {
        printf("%d ",array_junta[i]);
    }
    return 0;
}