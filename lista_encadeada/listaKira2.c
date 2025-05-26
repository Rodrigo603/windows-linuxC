#include <stdio.h>
#include <stdlib.h>

typedef struct node{
    int valor;
    struct node *next;
}node;

void adicionar(node **head,int valor) {
    node *new = malloc(sizeof(node));
    new->valor = valor;
    new->next = NULL;
    if(*head == NULL) {
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

int contPares(node **head) {
    node *aux = malloc(sizeof(node));
    aux = *head;
    int pares = 0;
    while(aux) {
        if (aux->valor % 2 == 0) {
            pares++;
        }
        aux = aux->next;
    }
    return pares;
}

int main () {
    node *head = NULL;
    int valor,pares;
    for (int i = 0;i<5;i++) {
        printf("digite o %d valor:",i+1);
        scanf("%d",&valor);
        adicionar(&head,valor);
    }
    pares = contPares(&head);
    printf ("numeros pares na lista = %d",pares);
    return 0;
}