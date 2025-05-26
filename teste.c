#include <stdio.h>
#include <math.h>
int main() {
    int a = 10;
    int b = 20;
    int *p = &a;
    *p = b;
    printf("%d",*p);
    return 0;
}