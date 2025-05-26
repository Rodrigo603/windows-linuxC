#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void inverter(char *str);
char *inverter2(char *str);

int main () {
    char *string;
    char *p;
    scanf("%[^\n]",string);
    inverter(string);
    printf("%s\n",string);
    p = inverter2(string);
    printf("%s",p);
    return 0;
}
void inverter (char *str) {
    int tam = strlen(str);
    int fim = tam - 1;
    int aux;
    for (int i = 0;i<tam/2;i++) {
        aux = str[i];
        str[i] = str[fim];
        str[fim] = aux;
        fim --;
    }
}
char *inverter2(char *str) {
    int tam = strlen(str);
    int fim = tam - 1;
    char *nova_string = malloc(tam *sizeof(char));
    for (int i = 0; i<tam;i++) {
        nova_string[fim] = str[i];
        fim--;
    }
    nova_string[tam] = '\0';
    return nova_string;
}