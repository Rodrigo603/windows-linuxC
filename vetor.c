#include <stdio.h>
#include <stdlib.h>
 
int main () {
    
    int tamanho;
    scanf("%d",&tamanho);
    double vetor[tamanho],media,soma = 0;
    for (int i = 0;i < tamanho;i++) {
        scanf("%lf",&vetor[i]);
    }
    for (int i = 0; i < tamanho;i++) {
        soma += vetor[i];
    }
    media = soma/tamanho;
    printf("%.2lf",media);
    return 0; 
}