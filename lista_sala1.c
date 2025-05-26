#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char nome[101];
    int cargaHoraria;
}Curso;

typedef struct {
    char nome[101];
    int qtdCursos;
    Curso* cursos;
}Universidade;

int main () {
    Universidade *univ;
    int n;
    scanf("%d",&n);
    univ = (Universidade*) malloc(n*sizeof(Universidade));
    for (int i = 0;i<n;i++) {
        scanf("%s",univ[i].nome);
        getchar();
        scanf("%d",&univ[i].qtdCursos);
        univ[i].cursos = (Curso*) malloc(univ[i].qtdCursos*sizeof(Curso));
        for (int j = 0;j<univ[i].qtdCursos;j++) {
            scanf("%s",univ[i].cursos[j].nome);
            getchar();
            scanf("%d",&univ[i].cursos[j].cargaHoraria);
            getchar();
        }
    }
    for (int i = 0;i<n;i++) {
        printf("Universidade %d : %s\n",i,univ[i].nome);
        printf("quantidade de cursos: %d\n",univ[i].qtdCursos);
        for (int j = 0;j<univ[i].qtdCursos;j++) {
            printf("Curso N %d: %s\n",j,univ[i].cursos[j].nome);
            printf("Carga horaria do curso %d: %d\n",j,univ[i].cursos[j].cargaHoraria);
        }
        
    }
   for (int i = 0;i<n;i++) {
    free(univ[i].cursos);
   }
   free(univ);
   return 0;
} 