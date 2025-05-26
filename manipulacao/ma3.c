#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Aluno{
    char nome[50];
    int idade;
} Aluno;

int main() {
    Aluno p;

    strcpy(p.nome, "maria");
    p.idade = 15;

    FILE* file = fopen("nomeidade.txt", "a");

    fprintf(file, "%s %d\n", p.nome, p.idade);

    fclose(file);
    return 0;
}