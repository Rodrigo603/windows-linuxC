#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//QUESTÃO 01: Crie uma função que receba uma string e retorne o número de vogais (a, e, i, o, u) nela contidas.
int vogais(char *string) {
    int tamanho = strlen(string);
    int cont = 0;
    for (int i = 0;i<tamanho;i++) {
        if (string[i] == 'a' || string[i] == 'A') {
            cont++;
        }else if (string[i] == 'e' || string[i] == 'E') {
            cont++;
        }else if (string[i] == 'i' || string[i] == 'I') {
            cont++;
        }else if (string[i] == 'o' || string[i] == 'O') {
            cont++;
        }else if (string[i] == 'u' || string[i] == 'U') {
            cont++;
        }
    }
    return cont;
}


int main () {
    char str[100];
    scanf("%[^\n]",str);
    int vogal = vogais(str);
    printf("%d", vogal);
    return 0;
}