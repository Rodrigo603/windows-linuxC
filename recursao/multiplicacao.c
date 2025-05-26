#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int multiplicar(int i,int *array);

int main () {
    int n;
    scanf("%d",&n);
    int array[n];
    for (int i = 0; i<n;i++) {
        scanf("%d",&array[i]);
    }
    printf("%d", multiplicar(n,array));
}

int multiplicar(int n,int *array) {
    if (n == 0) {
        return 1;
    }else{
        return array[n - 1] * multiplicar(n-1,array);
    }

}