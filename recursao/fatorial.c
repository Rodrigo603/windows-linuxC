#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int fatorial(int n);

int main(void) {

  int n,fat = 1;
  printf("Digite um numero de 1 a 100\n");
  scanf("%d",&n);
  printf("(A) %d! = %d\n", n, fatorial(n));

  for(int i = 1;i<=n;i++){
    fat = fat*i;
  }

  printf("(B) %d! = %d\n", n, fat);
  return 0;
}

int fatorial(int a){

  if(a == 0){
    return 1;
  }else{
      return a*fatorial(a-1); // 5 * fatorial(4) que vai ser 4 * fatorial(3).....  
  }
}



