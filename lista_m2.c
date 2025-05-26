#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//QUESTÃO 02: Escreva uma função que verifique se uma string é um palíndromo (palavra que se lê da mesma forma da esquerda para a direita e da direita para a esquerda. Ex: arara).

int ehpalindromo(char *string) {
    int tamanho = strlen(string);
    for (int i = 0;i<tamanho;i++) {
        if (string[i] != string[tamanho - 1 -i]) return 0;
        
}
    return 1;
}
int main () {
    char str[101];
    scanf("%[^\n]",str);
    
    if (ehpalindromo(str)) printf("e palindromo");
    else printf("nao e palindromo");
    return 0;
}