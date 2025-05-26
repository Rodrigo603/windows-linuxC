#include <stdio.h>
#include <stdlib.h>

void swap(int* x,int* y);
int main () {
    int x = 10;
    int y = 20;
    int *p;
    p = &x;
    
    printf("%d\n",x);
    printf("%d\n",*p);
    printf("%d\n",y);
    swap(&x,&y);
    return 0;
}

void swap (int* x,int* y) {
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
    printf("%d\n",*x);
    printf("%d",*y);
    

}