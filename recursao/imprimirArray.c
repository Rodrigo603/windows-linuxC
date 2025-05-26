#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void imprimir_array(int *arr, int tam,int i ) {
        if (i >= tam) {
            return;
        } 
        printf("%d ",arr[i]);
        imprimir_array(arr,tam,i + 1);
    }
void imprimir_inverso(int *arr,int tam) {
    if (tam == 0) {
        return;
    }
    printf("%d " ,arr[tam - 1]);
    imprimir_inverso(arr,tam - 1);
}
int main () {
    int n;
    scanf("%d",&n);
    int *arr = (int *)malloc(n *sizeof(int));
    for (int i = 0;i<n;i++) {
        scanf("%d",&arr[i]);
    }
    imprimir_array(arr,n,0);
    printf("\n");
    imprimir_inverso(arr,n);
    return 0;

}