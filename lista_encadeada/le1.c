#include <stdlib.h>
#include <stdio.h>
#include <string.h>

struct node {
    int valor;
    struct node *next;
};
void add_inicio(struct node **head, int num) {
    struct node *new = malloc(sizeof(struct node)); 
    new->valor = num;
    new->next = *head;
    *head = new;
}

void add_fim(struct node **head,int num) {
    struct node *new = malloc(sizeof(struct node));
    struct node *aux = malloc(sizeof(struct node));
    
    new->valor = num;
    new->next = NULL;
    if (*head == NULL) { // vê se é o primeiro da lista
        *head = new;
    }else {
        aux = *head; // cria um auxiliar para o ultimo nó, p add dps dele
        while(aux->next) {
            aux = aux->next;
        }
        aux->next = new;
    }
}

void add_meio(struct node ** head,int num,int anterior) {
    struct node *new = malloc(sizeof(struct node));
    struct node *aux = malloc(sizeof(struct node));
    
    new->valor = num; 
    if (*head == NULL) {
        new->next = NULL;
        *head = new;
    }else {
        aux = *head;
        while(aux->valor != anterior && aux->next) {
            aux = aux->next;
        }
        new->next = aux->next;
        aux->next = new;    
    }
}

struct node* remover(struct node **head,int num) {
    struct node *aux,*delete = NULL;
    if (*head != NULL) {
        if ((*head)->valor == num) {
            delete = *head;
            *head = delete->next;
        }else {
            aux = *head;
            while(aux->next && aux->next->valor != num) {
                aux = aux->next;
            
            }
        if(aux->next) {
            delete = aux->next;
            aux->next = delete->next;
        }
        }
    }
    
    return delete;
}

void imprimir (struct node *node) {
    while(node){
        printf("%d ",node->valor);
        node = node->next;
    }
}
int main () {
    int valor;
    struct node *head = NULL;
    struct node *removido = NULL;
    
    for(int i = 0; i<3;i++) {
        scanf("%d",&valor);
        add_fim(&head,valor);
    }
    scanf("%d",&valor);
    removido = remover(&head,valor);
    free(removido);
    imprimir(head);
    return 0;
}