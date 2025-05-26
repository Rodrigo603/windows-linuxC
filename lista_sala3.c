#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct  {
    char nome[101];
    int idade;
}Dependente;
typedef struct {
    char nome[101];
    int id;
    int qtdDependentes;
    Dependente* dependentes;
}Funcionario;
int main () {
    Funcionario* fun;
    int n;
    scanf("%d",&n);
    fun =(Funcionario*)malloc(n * sizeof(Funcionario)); 
    for (int i = 0;i<n;i++) {
        scanf("%s",fun[i].nome);
        scanf("%d",&fun[i].id);
        scanf("%d",&fun[i].qtdDependentes);
        fun[i].dependentes = (Dependente*)malloc(fun[i].qtdDependentes*sizeof(Dependente));
        for (int j = 0;j<fun[i].qtdDependentes;j++) {
            scanf("%s",fun[i].dependentes[j].nome);
            scanf("%d",&fun[i].dependentes[j].idade);

        }

    }
    for (int i = 0; i<n;i++) {
        printf("Nome do funcionario N %d: %s\n",i + 1,fun[i].nome);
        printf("ID do funcionario %s: %d\n",fun[i].nome,fun[i].id);
        printf("Quantidade de dependentes de %s: %d\n",fun[i].nome,fun[i].qtdDependentes);
        for (int j = 0;j<fun[i].qtdDependentes;j++) {
            printf("nome do dependente: %s\n",fun[i].dependentes[j].nome);
            printf("Idade do dependente %s: %d\n",fun[i].dependentes[j].nome,fun[i].dependentes[j].idade);
        }
    }
    for (int i = 0;i<n;i++) {
        free(fun[i].dependentes);
    }
    free(fun);
    return 0;
}