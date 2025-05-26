#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

typedef struct {
    int temNavio;
    int atingido;
}Celula;
 
Celula ** criarTabuleiro(int n);
int qtdUns(int n );
void randomUns(Celula** tabuleiro,int x,int n);
int main () {
    int n;
    Celula** tabuleiro;
    srand(time(NULL));
    scanf("%d",&n);
    tabuleiro = criarTabuleiro(n);
    int quantidadeDeUns = qtdUns(n);
    randomUns( tabuleiro,quantidadeDeUns,n);
    
    return 0;
}
Celula** criarTabuleiro(int n ) {
    Celula ** tabuleiro;
    tabuleiro = (Celula**)malloc(n * (sizeof(Celula*)));
    for (int i = 0; i<n;i++) {
        tabuleiro[i] = (Celula*)malloc(n * sizeof(Celula));
        for (int j = 0;j<n;j++) {
            tabuleiro[i][j].temNavio = 0;
            tabuleiro[i][j].atingido = 0;
        }
    } 

    return tabuleiro;
}
int qtdUns(int n) {

    int conta = (n * n * 0.1) +  1;
    return conta;
}
void randomUns(Celula** tabuleiro,int x,int n) {
    int linha = rand() % n - 1;
    int coluna = rand() % n - 1;
    int navios = x;
    while (navios > 0) {
        int linha = rand() % n - 1;
        int coluna = rand() % n - 1;
        if (tabuleiro[linha][coluna].temNavio == 0) {
            tabuleiro[linha][coluna].temNavio = 1;
            navios--;
        }
    }

}
