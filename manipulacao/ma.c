#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main () {
    FILE *in;
    int valor;

    in = fopen("C:\\Users\\rodri\\OneDrive\\Documentos\\C\\manipulacao\\teste.txt", "w"); 
    if (in == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }

    for (int i = 0; i < 5; i++) {
        printf("Digite um numero: ");
        scanf("%d", &valor);
        fprintf(in, "%d\n", valor); 
    }

    fclose(in);
    printf("Numeros gravados com sucesso!\n");
    return 0;
}
