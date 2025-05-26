#include <stdio.h>
#include <stdlib.h>

int main () {

    float matriz[3][3];
    float soma = 0,media;
    int cont = 0;
    char opcao;
    scanf("%c",&opcao);
    for (int i = 0; i<3;i++) {
        for (int j = 0;j<3;j++ ) {
            scanf("%f",&matriz[i][j]);
        }
    }
    for (int i = 0; i < 3; i++) {
        for (int j = i + 1; j < 3; j++) {  // j começa em i+1 para estar acima da diagonal
            soma += matriz[i][j];
            cont++;
        }
    }
    if (opcao =='S'){

    printf("%.1f\n",soma);
    }
    else if (opcao =='M'){
        media = soma/cont;
        printf("%.1f\n",media);
    }
    return 0;
}