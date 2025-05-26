#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main () { //alocacao com vetor
    int n,*arr;

    scanf("%d",&n);
    srand(time(NULL));
    arr = malloc(n * sizeof(int));
    
    if (arr) {
        for (int i = 0;i<n;i++) {
            *(arr + i) = rand() % 100;
        }
        for (int i = 0;i<n;i++) {
            printf("%d ",*(arr+i)); }
            printf("digite o novo tamanho do array");
            scanf("%d",&n);
            arr = realloc(arr,n); //realoca memoria p aumentar o vetor por exemplo
        
        for (int i = 0;i<n;i++) {
            printf("%d ",*(arr+i));
        }
        free(arr);
    }
    return 0;
}