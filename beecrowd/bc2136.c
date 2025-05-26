#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct node {
    char nome[21];
    char escolha[4];
    int ordem;
    struct node* next;
} node;

void add_ordenado(node **head, const char* nome, const char* escolha, int ordem);
int comparar_e_adicionar(node **head, const char* nome, const char* escolha, int ordem);
void imprimir(node *yesHead, node *noHead);
void achar_amigo(node *yesHead);

int main() {
    node *head_yes = NULL, *head_no = NULL;

    int ordem_yes = 0, ordem_no = 0;

    while (1) {
        char nome[101], escolha[4];
        scanf("%s", nome);
        if (strcmp(nome, "FIM") == 0) break;
        scanf("%s", escolha);

        if (strcmp(escolha, "YES") == 0) {
            if (comparar_e_adicionar(&head_yes, nome, escolha, ordem_yes)) {
                ordem_yes++;
            }
        } else if (strcmp(escolha, "NO") == 0) {
            if (comparar_e_adicionar(&head_no, nome, escolha, ordem_no)) {
                ordem_no++;
            }
        }
    }

    imprimir(head_yes, head_no);
    achar_amigo(head_yes);
    return 0;
}

void add_ordenado(node **head, const char* nome, const char* escolha, int ordem) {
    node* new = (node*)malloc(sizeof(node));
    if (!new) return;
    strcpy(new->nome, nome);
    strcpy(new->escolha, escolha);
    new->ordem = ordem;
    new->next = NULL;

    if (*head == NULL || strcmp(nome, (*head)->nome) < 0) {
        new->next = *head;
        *head = new;
    } else {
        node* aux = *head;
        while (aux->next != NULL && strcmp(nome, aux->next->nome) > 0) {
            aux = aux->next;
        }
        new->next = aux->next;
        aux->next = new;
    }
}

int comparar_e_adicionar(node **head, const char* nome, const char* escolha, int ordem) {
    node *aux = *head;
    while (aux != NULL) {
        if (strcmp(nome, aux->nome) == 0) {
            return 0; 
        }
        aux = aux->next;
    }
    add_ordenado(head, nome, escolha, ordem);
    return 1;
}

void imprimir(node *yesHead, node *noHead) {
    node *aux = yesHead;
    while (aux != NULL) {
        printf("%s\n", aux->nome);
        aux = aux->next;
    }

    aux = noHead;
    while (aux != NULL) {
        printf("%s\n", aux->nome);
        aux = aux->next;
    }
}

void achar_amigo(node *head) {
    node* atual = head;
    node* amigo = NULL;
    int maiorTamanho = -1;
    int menorOrdem = 1000;
    while (atual != NULL) {
        int tamanho = strlen(atual->nome);
        if (tamanho > maiorTamanho || (tamanho == maiorTamanho && atual->ordem < menorOrdem)) {
            maiorTamanho = tamanho;
            menorOrdem = atual->ordem;
            amigo = atual;
        }
        atual = atual->next;
    }
    if (amigo != NULL) {
        printf("\nAmigo do Habay:\n%s\n", amigo->nome);
    }
}

