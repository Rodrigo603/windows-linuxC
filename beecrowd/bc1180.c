#include <stdio.h>
#include <stdlib.h>


int main () {

    int indice,n,menor_numero = 100;
    scanf("%d",&n);
    int array[n];
    for ( int i = 0;i<n;i++) {
        scanf("%d",&array[i]);
        if (array[i] <= menor_numero) {
            menor_numero = array[i];
        }
    } 
    for (int i = 0;i<n;i++) {
        if (array[i] == menor_numero) {
            indice = i;
        }
    }
    printf("Menor valor: %d\n",menor_numero);
    printf("Posicao: %d\n",indice);
    return 0;
}