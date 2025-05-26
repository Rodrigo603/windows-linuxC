#include <stdlib.h>
#include <stdio.h>
#include <string.h>

struct node {
    int valor;
    struct node *next;
};

void add_ordenado(struct node **head,int num) {
    struct node *new = malloc(sizeof(struct node));
    struct node *aux = malloc(sizeof(struct node));
    new->valor = num;
    if (*head == NULL) {
        new->next = NULL;
        *head = new;
    }else if (new->valor < (*head)->valor){ // se o adicionado é menor que o primeiro
        new->next = *head;
        *head = new;
    }else {
        aux = *head;
        while(aux->next && new->valor > aux->next->valor) {
            aux = aux->next;
        }
        new->next = aux->next;
        aux->next = new;
    }
}


void imprimir (struct node *node) {
    while(node){
        printf("%d ",node->valor);
        node = node->next;
    }
}


int main () {
    struct node *head = NULL;
    int valor;
    for (int i = 0; i<3;i++) {
        scanf("%d",&valor);
        add_ordenado(&head,valor);
    }
    imprimir(head);
    return 0;
}