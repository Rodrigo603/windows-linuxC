#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {
    
    int opcao, qtd;
    double preco; 
    scanf("%d %d",&opcao,&qtd);
    
    switch (opcao) {
        case 1: 
            preco = qtd * 4.00;
            printf("%.2lf\n",preco);
            break;
        case 2:
            preco = qtd * 2.00;
            printf("%.2lf\n",preco);
            break;
        case 3:
            preco = qtd * 1.50;
            printf("%.2lf\n",preco);
            break;
        case 4:
            preco = qtd * 3.00;
            printf("%.2lf\n",preco);
            break;
        default: //else do switch case
            printf("opção inválida!");    
    }

    return 0;

}
