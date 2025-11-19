#include <stdio.h>
#include <stdlib.h>

typedef struct Node{
    int valor;
    struct Node *prox;
} Node;

void Aresta(Node **lista, int y){
    Node *novo=malloc(sizeof(Node)); //alocando
    novo->valor=y; //recebendo o valor do vertice
    novo->prox=*lista; //o nosso novo agr aponta pro anterior 

    *lista=novo; //e a nossa lista aponta pro novo
}

void Imprime(Node *vetor[], int n){ //recebe o vetor e um inteiro n
    for(int i=0;i<n;i++){
        printf("%i: ", i); //aqui vai imprimir qual numero da lista tamo vendo
        for(Node *p=vetor[i]; p != NULL; p=p->prox){ //aqui imprime os que tao sendo apontados
            printf("%i", p->valor);
            if(p->prox != NULL) printf(" ");
        }
        printf("\n");
    }
}

int main (){
    Node *vetor[3]; //tres vertices;

    for(int i=0;i<3;i++){  //vai iniciar a lista como vazia
        vetor[i]=NULL;
    }

    Aresta(&vetor[0], 1);
    Aresta(&vetor[0], 2);
    Aresta(&vetor[1], 2);

    Imprime(vetor, 3);

    return 0;

}