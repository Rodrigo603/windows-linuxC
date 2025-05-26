#include <stdio.h>
#include <stdlib.h>

int main () {

    int n,soma = 0;
    scanf("%d",&n);
    int array[10];
    int *p = array;
    for (int i = 0;i<n;i++) {
        scanf("%d",(p+i));
    }
    for (int i = 0;i<n;i++) {
        soma += *(p + i);
    }
    printf("%d",soma);
}