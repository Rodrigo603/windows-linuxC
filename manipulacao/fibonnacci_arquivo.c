#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int fibonacci(int n) {

    if (n == 0) {
        return 0;
    }
    else if (n == 1) {
        return 1;
    }else{
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

int main () {
    FILE *file = fopen("fibonacci.txt","w");
    int n;
    scanf("%d",&n);
    for (int i = 0;i<=n;i++) {
        int resultado = fibonacci(i);
        fprintf(file,"%d\n",resultado);
    }
    fclose(file);
    return 0;
}