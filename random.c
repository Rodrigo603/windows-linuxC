#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main () {
    srand(time(NULL));
    int r = rand() % 100; //0 a 99
    int r1 = rand() % 10 + 5; //5 a 14
    printf("numeros gerados: %d %d",r,r1);
    int maximo = 20;
    int minimo = 5;
    int r2 = (rand() % (maximo - minimo + 1 )) +minimo; //5 a 20    
    printf(" %d",r2);
    return 0; 
}