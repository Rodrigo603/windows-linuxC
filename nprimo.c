#include <stdio.h>
#include <stdlib.h>
//#define TAM 10 valor constante
#include <locale.h>

int main () {
    setlocale(LC_ALL,"");
    int numero,divisores = 0;
    scanf("%d",&numero);
    for (int i = 1; i<=numero;i++){
        if (numero % i == 0 ) { // se dividir mais de duas vezes nao é primo 
            divisores += 1;
        }
    }
    if (divisores == 2 ){
        printf("%d e um numero primo ! ",numero);
    }
    else {
        printf("nao e um numero primo ");
    }    
    

    return 0;
}