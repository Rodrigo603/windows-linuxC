#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int mdc(int x, int y); 

int main () {
    int n;
    int f1,f2;
    scanf("%d",&n);
    for (int i = 0;i<n;i++) {
        scanf("%d %d",&f1,&f2);
        printf("%d\n",mdc(f1,f2));
    }
}

int mdc(int x, int y) {
    
    if (x == 0) {
        return y; 
    }
    if (y == 0) {
        return x; 
    }
    if (x > y) {
        return mdc(x-y, y); 
    }
    return mdc(x, y-x); 
}
