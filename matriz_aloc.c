#include <stdio.h>
#include <stdlib.h>

int main () {
    int **mat;

    mat = malloc(4 * sizeof(int*));
    for (int i = 0; i<4;i++) {
        mat[i] = malloc(3 * sizeof(int));
    }
    for (int i = 0;i<4;i++){
        scanf("%d",mat[i]);
    }
    for (int i = 0;i<4;i++) {
        
    }
    return 0;
}