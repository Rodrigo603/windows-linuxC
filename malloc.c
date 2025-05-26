#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main () {
char *x;



    x = malloc(sizeof(int)); //malloc usa quantidade bites

    x = calloc(1,sizeof(char)); //quantidade de elementos e quantos bites para cada elemento

    if (x) {

    printf("memoria alocada\n");

        *x = 'A';

        printf ("x: %c",*x);

        }

    else {

    printf("erro ao alocar memoria\n");

        }

    return 0;

    }

 