#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main () {
    int **mat;
    mat = malloc(4 * sizeof(int*)); //matriz  4x3
    for (int i = 0; i<4;i++) {
        mat[i] = malloc (3 * sizeof(int));
    }
    srand(time(NULL));
    for (int i = 0;i<4;i++) {
        for (int j = 0;j<3;j++) {
            *(*(mat + i) + j) = rand() % 100;
        }
    }
    for (int i = 0;i<4;i++) {
        for (int j = 0;j<3;j++) {
        printf("%d ",*(*(mat + i) + j));
        }
    printf("\n");
    }
    for (int i = 0;i<4;i++) {
        for (int j = 0;j<3;j++) {
        printf("%d ",*(*(mat + 3) + 2)); // valor linha 4 coluna 3
        }
    printf("\n");
    }
    return 0;
}