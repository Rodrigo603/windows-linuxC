#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int  prova(int n) {
    if (n == 1) {
        return 1;
    }else if(n % 2 == 0) {
        return prova(n/2);
    } else if (n % 2 != 0) {
        return prova(n * 3 + 1);
    }
}

int main () {
    FILE *file = fopen("prova.txt","w");
    int n;
    scanf("%d",&n);
    while(n != 1) {
        n = prova(n); 
        fprintf(file,"%d",n);
    }
    
    fclose(file);
    return 0;
}