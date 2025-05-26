#include <stdio.h>
#include <stdlib.h>

typedef struct 
{
    float temperatura;
    float umidade;
}Clima;

int main () {
    Clima **matriz;
    int n,m;
    scanf("%d %d",&n,&m);
    matriz = (Clima**) malloc(n * sizeof(Clima*));
    for (int i = 0;i<n;i++) {
        matriz[i] = (Clima*) malloc(m * sizeof(Clima));
    }
    for (int i = 0;i<n;i++) {
        for (int j = 0;j<m;j++) {
            scanf("%f",&matriz[i][j].temperatura);
             scanf("%f",&matriz[i][j].umidade);
        }
    }
    for (int i = 0;i<n;i++) {
        float media_umidade = 0,media_temp = 0;
        for (int j = 0;j<m;j++) {
            media_temp += matriz[i][j].temperatura; 
            media_umidade += matriz[i][j].umidade;
        }
        printf("media temperatura linha %d: %.2f\n",i,media_temp/m);
        printf("media umidade linha %d:  %.2f\n",i,media_umidade/m);
        
    }
    for (int i = 0; i<n;i++) {
        free(matriz[i]);
    }
    free(matriz);
    return 0;
}