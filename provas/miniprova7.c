#include <stdio.h>
#include <stdlib.h>

int main () {

    int n,passou = 0,final = 0,reprovou = 0;
    printf("numero de alunos:");
    scanf("%d",&n);
    double notas[n];
    for (int i = 0;i<n;i++) {
        scanf("%lf",&notas[i]);
    }
    for (int i = 0;i<n;i++) {
        if (notas[i] > 9) {
            passou++;
        }else if (notas[i] < 7 && notas[i] > 3) {
            final++;
        }else if (notas[i] < 3) {
            reprovou++;
        }
    }
    printf("porcentagem de alunos com nota maior que 9: %.1lf%%\n",((double) passou/n ) * 100);
    printf("porcentagem de alunos que foram para final: %.1lf%%\n",((double) final/n ) * 100);
    printf("porcentagem de alunos que reprovaram: %.1lf%%\n",((double)reprovou /n)* 100);    
    return 0;
}