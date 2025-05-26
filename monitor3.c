#include <stdio.h>
#include <stdlib.h>

int main () {

    int array[5];
    for (int i = 0;i<5;i++) {
        scanf("%d",&array[i]);
    }
    for (int i = 4;i>=0;i--) {
        printf("%d ",array[i]);
    }
    return 0;
}