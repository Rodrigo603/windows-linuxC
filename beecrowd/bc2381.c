#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct node {
    char nome[21];
    struct node *next;
}node;

void add_ordenado(node **head, char *string);
char* nome_escolhido(node *head,int valor);

int main () {
    node *head = NULL;
    int n,k;
    char nome[21];
    scanf("%d %d",&n,&k);
    for (int i = 0;i<n;i++) {
        scanf("%s",nome);
        add_ordenado(&head,nome);
    }
    char *nome_sorteado = nome_escolhido(head,k);
    printf("%s",nome_sorteado);
    return 0;
}


void add_ordenado(node ** head, char *string) {
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


char* nome_escolhido(node *head,int valor) {
    int i = 1;
    while(head && i < valor) {
        head = head->next;
        i++;
    }
    return head->nome;
}