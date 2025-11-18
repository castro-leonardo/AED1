#include <stdio.h>
#include <stdlib.h>

typedef struct Node{
    int valor;
    struct Node *prox;
} Node;

void Insere (Node **head, int x){ //ta recebendo uma var tipo Node e chamando de Head, e uma int x normal
    Node *novo = malloc(sizeof(Node)); // cria um no novo
    novo->valor=x; //insere x (x eh o dado) no node
    novo->prox=*head; //insere um ponteiro pra cabeca no node

    *head=novo; //a cabeca agr APONTA para o valor de novo
}

void Imprime(Node *head){ //recebe a lista como um ponteiro pra cabeça
    for(Node *p=head; p != NULL; p=p->prox){ //começando com o ponteiro na cabeca, enquanto p nao for null, p passa para o proximo da lista
        printf("%i", p->valor);
    }
    printf("\n");
}

int main (){
    Node *lista = NULL; //cabeca

    Insere(&lista, 30); //manda o endereço da lista + o valor a ser colocado na lista
    Insere(&lista, 20);

    Imprime(lista);//imprime a lista ao mandar a lista

    return 0;
}