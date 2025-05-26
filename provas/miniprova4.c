#include <stdio.h>
#include <stdlib.h>

int main () {

    int n,deslocamento;
    char opcao;
    printf("Digite o tamanho do array: ");
    scanf("%d",&n);
    int array[n],temp[n]; 
    for (int i = 0;i<n;i++) {
        scanf("%d",&array[i]);
    }
    printf("Para qual lado mover os elementos(L ou R) e quantas casas?");
    scanf(" %c %d",&opcao,&deslocamento);
    if (opcao =='L' || opcao == 'l') {
        for (int i = 0;i<n ;i++) {
            temp[i] = array[(i + deslocamento + n) % n]; //exemplo(0+2+4 = 6 % 4 = 2 ) vai garantir q a array seja circular e n ultrapasse o limite do array
        }
    }else if (opcao =='R' || opcao == 'r') {
        for (int i = 0;i<n;i++) {
            temp[i] = array[(i - deslocamento + n) % n];
            
        }
    }
    for (int i = 0;i<n;i++) {
        array[i] = temp[i];
        printf("%d ",array[i]);
    }
    return 0;
}