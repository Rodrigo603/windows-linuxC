#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct {
    char titulo[101];
    int paginas;
}Livro;

typedef struct {
    char nome[101];
    int qtdLivros;
    Livro* livros;
}Editora;

int main () {
    Editora* edi;
    int n;
    scanf("%d",&n);
    edi = (Editora*)malloc(n * sizeof(Editora));
    for (int i = 0;i<n;i++) {
        scanf("%s",edi[i].nome);
        scanf("%d",&edi[i].qtdLivros);
        edi[i].livros = (Livro*)malloc(n * sizeof(Livro));
        for (int j = 0;j<edi[i].qtdLivros;j++) {
            scanf("%s",edi[i].livros[j].titulo);
            scanf("%d",&edi[i].livros[j].paginas);
        }
    }
    for (int i = 0;i<n;i++) {
        printf("Nome da editora %d: %s\n",i + 1,edi[i].nome);
        printf("Numero de livros da editora %d: %d\n",i + 1,edi[i].qtdLivros);
        for (int j = 0;j<edi[i].qtdLivros;j++) {
            printf("Nome do livro: %s\n",edi[i].livros[j].titulo);
            printf("numero de paginas do livro %s: %d\n",edi[i].livros[j].titulo,edi[i].livros[j].paginas);
        }
    }
    for (int i = 0;i<n;i++) {
        free(edi[i].livros);
    }
    free(edi);
}