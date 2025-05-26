#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int josephus(int n, int k);

int main() {
    int nc,n,k;
    scanf("%d",&nc);
    for (int i = 1;i<=nc;i++) {
        scanf("%d %d",&n,&k);
        printf("case %d: %d\n",i,josephus(n,k));
    }

}

int josephus(int n,int k) {
    int resultado = 0;
    for (int i = 2; i <= n; i++) {
        resultado = (resultado + k) % i;
    }
    return resultado + 1;
    }
