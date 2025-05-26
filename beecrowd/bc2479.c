#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct node {
    char simbolo;
    char nome[21];
    struct node *next;
}node;

void add_ordenado(node **head, char *string);
void imprimir(node *node);

int main () {
    int n;
    node *head = NULL;
    char nome[21];
    char simbolo;
    int cont_mais = 0,cont_menos = 0;
    scanf("%d",&n);
    for (int i = 0; i<n;i++) {
        scanf(" %c %s",&simbolo,nome);
        if (simbolo == '+') {
            add_ordenado(&head,nome);
            cont_mais++;
        }else if (simbolo == '-') {
            add_ordenado(&head,nome);
            cont_menos++;
        }
    }
    imprimir(head);
    printf("Se comportaram: %d | Nao se comportaram: %d\n",cont_mais,cont_menos);
}

void add_ordenado(node **head,char *string) {
    node *new = malloc(sizeof(node));
    node *aux = malloc(sizeof(node));
    strcpy(new->nome,string);
    new->next = NULL;
    if (*head == NULL || strcmp(new->nome,(*head)->nome)< 0) {
        new->next = *head;
        *head = new;
    }else {
        aux = *head;
        while(aux->next && strcmp(aux->next->nome,string) < 0) {
            aux = aux->next;
        }
        new->next = aux->next;
        aux->next = new;
    }
}

void imprimir (struct node *node) {
    while(node){
        printf("%s\n",node->nome);
        node = node->next;
    }
}
