#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int ePalindromo(char *string);

int main () {
    char string[100];
    scanf("%[^\n]",string);
    if (ePalindromo(string)) {
        printf("e palindromo.\n");
    }else {
        printf("nao e palindromo.\n");
    }
    return 0;
}

int ePalindromo(char *string) {
    int tamanho = strlen(string);
    for (int i = 0;i < tamanho/2 ;i++) {        
        if (string[i] != string[tamanho - 1 - i]) {
            return 0;}
        }
    return 1;
}
