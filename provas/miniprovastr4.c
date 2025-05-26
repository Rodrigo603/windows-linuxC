#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int new_strcmp(char *str1,char *str2);

int main () {

    char str1[100],str2[100];
    scanf("%[^\n]",str1);
    getchar();
    scanf("%[^\n]",str2);
    
    if (new_strcmp(str1,str2) == 0) {
        printf("sao iguais");
    }else {
        printf("letras diferentes: %d",new_strcmp(str1,str2));
    }
    
    return 0;    
}

int new_strcmp(char *str1,char *str2) {
    int cont = 0;
    int tamanho = strlen(str1);  
    for (int i = 0;i<tamanho;i++) {
        if (str1[i]!=str2[i]) {
            cont++;
        } 
    }
    if (cont == 0) {
        return 0;
    }else {
        return cont;
    }    
}
