#include <stdio.h>

int main () {
    int x,y;
    scanf("%d %d",&x,&y);
    if (1 < x && x < 20 && x < y && y < 100000) {
        for (int i = 1;i<=y;i++) {
            printf("%d",i);
            if (i % x == 0 ) {
                printf("\n");
            }
            else {
                printf(" "); //beecrowd 
            }
        }
  }
  return 0;
}
