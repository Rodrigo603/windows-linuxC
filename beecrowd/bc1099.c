#include <stdio.h>
#include <stdlib.h>

int main () {

    int soma,n,i,n1,n2,j;
    scanf("%d",&n);
    for (i = 0;i<n;i++) {
        soma = 0;
        scanf("%d %d",&n1,&n2);
        int menor = (n1<n2) ? n1 : n2; // variavel = condicao ? valor verdadeiro : valor se falso
        int maior = (n1>n2) ? n1 : n2;
        for (j=menor +1; j<maior;j++) {
            if (j % 2 != 0) {
                soma += j;
            }
        }
        printf("%d\n",soma);
    }

    
    return 0;
}