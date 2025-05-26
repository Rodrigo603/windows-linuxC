#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main () {
    srand(time(NULL));
    int dado1,dado2,dado3,sum;
    dado1 = rand() % 6 + 1;
    dado2 = rand() % 6 + 1;
    dado3 = rand() % 6 + 1;
    sum = dado1 + dado2 + dado3;
    printf("valores dos dados: %d %d %d\n",dado1,dado2,dado3);
    printf("soma dos dados: %d",sum);
    


    return 0;
}