#include <stdio.h>
#include <stdlib.h>

int main () {

    int n, soma_principal = 0,soma_secundaria = 0,subtracao;
    printf("qual a ordem da matriz ?");
    scanf("%d",&n);
    int matriz[n][n];
    for (int i = 0;i<n;i++) {
        for (int j = 0;j<n;j++) {
            scanf("%d",&matriz[i][j]);
        }
    }
    for (int i = 0;i<n;i++) { //com o for das colunas as variaveis recebem os valores duplicados
        
        
        soma_principal += matriz [i][i];
        soma_secundaria += matriz [i][n-i-1];
        
    } 
    
    subtracao = soma_principal - soma_secundaria;
    
    printf("%d\n",soma_principal);
    printf("%d\n",soma_secundaria);
    printf("resultado da subtracao da soma da diagonal principal pela soma da secundaria e: %d",subtracao);
    return 0;
}