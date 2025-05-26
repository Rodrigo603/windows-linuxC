#include <stdio.h>
#include <stdlib.h>

int main () {

    int n,i,inverter;
    printf("Quantos numeros tem na lista ?\n");
    scanf("%d",&n);
    int numeros[n];
    for (i = 0; i<n;i++) {
        scanf("%d",&numeros[i]);
    }
    for (i = 0; i<n/2;i++) { //vai ate a metade da array pq ja vao estar os valores trocados
        inverter = numeros[i]; 
        numeros[i] = numeros[n - 1 - i]; //numeros[0] = numeros [5 - 1 - 0] 4 posicao vai trocar com a 0
        numeros[n-1-i] = inverter;

    }
    for (i = 0;i<n;i++) {
        printf("%d ",numeros[i]);
    }
    
    return 0;

}