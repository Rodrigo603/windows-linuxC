#include <stdio.h>
#include <stdlib.h>

int main () {
    int vinicial,vfinal,step;
    scanf("%d %d %d",&vinicial,&vfinal,&step);
    for (int i = vinicial ; i <= vfinal ;i += step) {
        printf("%d ",i);
    }
    
    return 0;
}