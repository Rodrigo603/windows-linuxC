#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char nome[101];
    int matricula;
}Aluno;

typedef struct {
    char nome[101];
    int codigo;
    int qtdAlunos;
    Aluno* alunos;
}Curso;


int main () {
    Curso* cu;
    int n;
    scanf("%d",&n);
    cu = (Curso*)malloc(n * sizeof(Curso));
    for (int i = 0;i<n;i++) {
        scanf("%s",cu[i].nome);
        scanf("%d",&cu[i].codigo);
        scanf("%d",&cu[i].qtdAlunos);
        cu[i].alunos = (Aluno*)malloc(cu[i].qtdAlunos * sizeof(Aluno));
        for (int j = 0;j<cu[i].qtdAlunos;j++) {
            scanf("%s",cu[i].alunos[j].nome);
            scanf("%d",&cu[i].alunos[j].matricula);
        }
    }
    for (int i = 0;i<n;i++) {
        printf("Nome do  %d curso: %s\n",i + 1,cu[i].nome);
        printf("Codigo do curso: %d\n",cu[i].codigo);
        printf("Quantidade de alunos: %d\n",cu[i].qtdAlunos);
        for (int j = 0;j<cu[i].qtdAlunos;j++) {
            printf("Nome do %d aluno: %s\n",j + 1,cu[i].alunos[j].nome);
            printf("Matricula do %d aluno: %d\n",j + 1,cu[i].alunos[j].matricula);
        }
    }
    for (int i = 0;i<n;i++) {
        free(cu[i].alunos);
    }
    free(cu);
    return 0;
    }

