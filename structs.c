#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct aluno{
    char nome[100];
    char matricula[100];
    int idade;

    };
    
int main () {
    struct aluno a;
    scanf("%[^\n]",a.nome);
    getchar();
    scanf("%[^\n]",a.matricula);
    scanf("%d",&a.idade);
    printf("%s\n",a.nome);
    printf("%s\n",a.matricula);
    printf("%d\n",a.idade);
    return 0;
}