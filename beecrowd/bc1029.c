#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int fibonacci(int m,int *cont); 
 

int main () {
    int n;
    int m;
    int cont = 0;
    scanf("%d",&n);
    for(int i = 0;i<n;i++) {
        cont = 0;
        scanf("%d",&m);
        int sequencia_fibo = fibonacci(m,&cont);
        cont -= 1;
        printf("fib(%d) = %d calls = %d\n",m,cont,sequencia_fibo);
    }
    return 0;
}

int fibonacci(int m, int *cont) {
    (*cont)++;
    if(m == 0){
        return 0;
    }
    else if (m == 1){
        return 1;
    
    }else{
    return fibonacci(m-1,cont) + fibonacci(m-2,cont);
    }

}
