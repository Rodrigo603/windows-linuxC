#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//QUESTÃO 03: Escreva uma função que ordene os caracteres de uma string em ordem alfabética.
void ordenar(char *string) {
    int tamanho = strlen(string);
    for (int i = 0;i <tamanho/2;i++) {
        for(int j = 0; j<tamanho - 1; j++){
            if(string[j] > string[j + 1]){
                char aux = string[j];
                string [j] = string[j + 1];
                string [j + 1] = aux;
            }
        }
    }
}
int main () {
    char str[100];
    scanf("%[^\n]",str);
    ordenar(str);
    printf("%s",str);
    return 0;
}