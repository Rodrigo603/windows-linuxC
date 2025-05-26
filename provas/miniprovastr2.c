#include <stdio.h>
#include <stdlib.h>
#include <string.h>

float cambio(float valor,char *string);

int main () {

    float valor;
    char string[100];
    scanf("%f",&valor);
    getchar();
    scanf("%[^\n]",string);
    valor = cambio(valor,string);
    printf("valor: %.2f",valor);
    return 0;
}

float cambio(float valor,char *string) {
    if (valor < 0) {
        printf("valor invalido"); 
        return -1; }

        if (strcmp(string,"euro") == 0) {
            return valor * 5.41;
        }else if (strcmp(string,"dolar") == 0) {
            return valor * 4.98;
        }else if (strcmp(string,"libra esterlina") == 0 ) {
            return valor * 6.32;
        }else {
            printf("valores invalidos");
            return -1;
        }
    }