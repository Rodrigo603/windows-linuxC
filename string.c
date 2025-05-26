#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main () {
    //int tam;
    char nome1[100] =  "Rodrigo Jose ";
    char nome2[100] = "Rodrigo Jose Dantas de Oliveira";
    char *ptr;
    int tam = strlen(nome1); //strlen para pegar todos os caracteres inclusive o enter(\n)
    printf("%d\n",tam);
    strcat(nome1,nome2); // concatena strings 
    printf("%s\n",nome1);
    printf("Resultado: %d\n",strcmp(nome1,nome2)); // resultado é um numero, -1 se a string1 for primeiro que a 2, se for 1 a string 2 é primeiro do string1, se for 0 as strings são iguais 
    printf("%s\n",nome1);
    strcpy(nome1,nome2); //copia o segundo parametro para o primeiro   
    printf("%s",nome1);
    char letra = strchr(nome1,'o');// strchr() p pegar a primeira letra q eu escolhi/ strrchr() para o ultimo
    printf("%c",*(letra+1));
    ptr = strstr(nome2,nome1); // ver se nome1 tem no nome2 como substring
    printf("%c%c%c",*ptr,*(ptr+1),*(ptr+2));
    //strupr() para letras maiusculas
    //strlwr() para letras minusculas

}
