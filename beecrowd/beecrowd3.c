#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
int main () {
    int qtd,cod;
    double price;
   
    scanf("%d %d", &cod,&qtd);
    
    //setlocale(LC_ALL,"");
    if (cod == 1) {
        price = qtd * 4.00;
    }
    else if (cod == 2 ) {
        price = qtd * 4.50;
    }
    else if (cod == 3) {
        price = qtd * 5.00;
    }
    else if (cod == 4 ) {
        price = qtd * 2.00;
    }
    else if (cod == 5 )  {
        price  = qtd * 1.50;
    } 
    printf("Total: R$ %.2lf\n", price);
    return 0;
}