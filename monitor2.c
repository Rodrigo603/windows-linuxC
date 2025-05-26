#include <stdio.h>
#include <stdlib.h>

int main () {

    int array[10],n;
    int cont = 0;
    for (int i = 0;i<10;i++) {
        scanf("%d",&array[i]);
    }
    scanf("%d",&n);
    for (int i = 0;i<10;i++) {if (n == array[i]){cont++;}} 
    printf("o numero %d aparece %d vez(es) no array",n,cont);
    return 0;
}