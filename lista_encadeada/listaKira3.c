#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef struct node {
    char item[51]; 
    struct node *next;
}node; 

void adicionar(node **head, char nome[51]) {
    node *new = malloc(sizeof(node));
    strcpy(new->item,nome);
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

void imprimir(node * node) {
    while(node) {
        printf("%s \n",node->item);
        node = node->next;
    }
}

int main () {
    node *head = NULL;
    char item[51];
    for (int i = 0;i<3;i++) {
        printf("digite o %d nome:",i+1);
        scanf("%s",item);
        adicionar(&head,item);
    }
    imprimir(head);
}