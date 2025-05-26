#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int flavius(int n, int k);

int main () {
    int n;
    int v1,v2;
    scanf("%d",&n);
    for (int i = 0;i<n;i++) {
        scanf("%d %d",&v1,&v2);
        printf("%d\n",flavius(v1,v2));
    }
}

int  flavius(int n,int k) {
    int resultado = 0;
    for (int i = 2; i <= n; i++) {
        resultado = (resultado + k) % i;
    }
    return resultado + 1;
    }
