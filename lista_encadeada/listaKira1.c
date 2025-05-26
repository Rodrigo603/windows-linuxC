#include <stdio.h>
#include <stdlib.h>

typedef struct node{
    int valor;
    struct node *next;
}node;

void adicionar(node **head,int valor){
    node *new = malloc(sizeof(node));
    new->next = NULL;
    new->valor = valor;
    if (*head == NULL) {
        *head = new;
    }else {
        node *aux = malloc(sizeof(node));
        aux = *head;
        while(aux->next) {
            aux = aux->next;
        }
        aux->next = new;
    }

}

int somar(node **head) {
    node *aux = malloc(sizeof(node));
    int soma = 0;
    if (*head) {
        aux = *head;
        while(aux) {
            soma += aux->valor;
            aux = aux->next;
        }
    }
    return soma;
}

int main () {
    node *head = NULL;
    int valor,soma;
    for (int i = 0;i<4;i++) {
        printf("digite o %d valor:",i+1);
        scanf("%d",&valor);
        adicionar(&head,valor);
    }
    soma = somar(&head);
    printf("soma de todos os valores = %d",soma);
    return 0;
}