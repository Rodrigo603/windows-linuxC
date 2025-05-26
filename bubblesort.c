#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void ordenaString(char *str);
int main () {
    char str[100];
    scanf("%[^\n]",str);
    ordenaString(str);
    printf("%s",str);
}

void ordenaString(char *str) {
    int tamanho = strlen(str);
    for (int i= 0;i<tamanho;i++) {
        for (int j = 0;j<tamanho - 1;j++) {
            if (str[j]> str[j+1]) {
                char aux  = str[j];
                str[j] =str[j + 1];
                str[j + 1] = aux;
            }
        }
    }
}