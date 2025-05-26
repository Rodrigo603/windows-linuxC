#include <stdio.h>
#include <stdlib.h>

int qtdportaisfeitos(int n,int f,int portais[]);

int main () {

    int n,f;
    scanf("%d %d",&n,&f);
    int portais[n];
    for (int i = 0;i<n;i++) {
        scanf("%d",&portais[i]);
    }
    printf("%d",qtdportaisfeitos(n,f,portais));

    return 0;
}

int qtdportaisfeitos(int n,int f,int portais[n]) {
    int cont = 0; 
    for (int i = 0;i<n;i++) { 
        if (f > portais[i]) {
            cont++;
        }
    }
    return cont;
}