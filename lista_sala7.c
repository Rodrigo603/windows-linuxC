#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    int  quartos;
    int banheiros;
    char acabamento;
    int distancia;
}Casa;

int main () {
    Casa **matriz;
    int n;
    scanf("%d",&n);
    matriz = (Casa**)malloc(n * sizeof(Casa*));
    for (int i = 0;i<n;i++) {
        matriz[i] = (Casa*)malloc(n * sizeof(Casa));
    }
    for (int i = 0;i<n;i++) {
        for (int j=0;j<n;j++) {
            scanf("%d",&matriz[i][j].quartos);
            scanf("%d",&matriz[i][j].banheiros);
            scanf("%c",&matriz[i][j].acabamento);
            matriz[i][j].distancia = abs(i - j);
        }
    }
    for (int i = 0;i<n;i++) {
        for (int j = 0;j<n;j++) {
            int preco = 
        }
    }
}