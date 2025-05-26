#include <stdio.h>

int main () {
    int a,b,c;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    if (a>b && a>c) {
        printf("maior numero %d\n",a);
    }
    else if (b>c) {
        printf("maior numero %d\n",b);

    }
    else {
        printf("maior numero %d\n",c);
    }
    return 0;
}
