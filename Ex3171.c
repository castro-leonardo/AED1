#include <stdio.h>
#include <stdlib.h>

typedef struct Node{
    int seg;
    struct Node *prox;
} Node;

void InsereAresta(Node **vetor, int Y){
    Node *novo=malloc(sizeof(Node));
    if (!novo){
        perror("malloc");
        exit(1);
    }
    
    novo->seg=Y;
    novo->prox=*vetor;

    *vetor=novo;
}

void DFS(int atual, Node **vetor, int *visited){

    visited[atual]=1; //marca o lugar que eu to como visitado;

    for(Node *p=vetor[atual]; p != NULL; p = p->prox){
        //enquanto o vetor atual nao for nulo
        //mesmo do print

        int vizinho = p->seg; //define a variavel visinho como o seg

        if(!visited[vizinho]){ //se o vizinho ainda nao tiver macado como visitado
            DFS(vizinho, vetor, visited); //ele visita
        }
    }
}

int main (){
    int N, L, X, Y;

    do{

        scanf("%i", &N); //numero de segmentos (vertices)

    }while(N<1 || N>100);

    do{

   scanf("%i", &L); //numero de ligacoes (arestas)

    }while(L<1 || L>100);

    Node **vetor=calloc((N+1), sizeof(Node*)); //aloca vetor de tamanho N
    //usa se ponteiro de ponteiro pq eh um ponteiro p varios ponteiros (vetor)

if(!vetor){ 
    perror("calloc");
    return 1;
}

int *visited=calloc((N+1), sizeof(int)); //atencao pro formato de calloc
//calloc ja cria zerado pra nao ter qye inicilizar

    //com L agr, sabemos quantas arestas vamos inserir

    for(int j=0;j<L;j++){

        scanf("%i" "%i", &X, &Y);

        InsereAresta(&vetor[X], Y);
        InsereAresta(&vetor[Y], X); //porque o grafo n eh direcionado
    }

    DFS(1, vetor, visited);
    int cont=0;

    for(int i=1;i<=N;i++){
        if(visited[i]!=0){
            cont++;
        } 
    }

    if (cont == N){
        printf("COMPLETO\n");
    } else {
        printf("INCOMPLETO\n");
    } //43121324

    for(int i=1;i<=N;i++){
        Node *p=vetor[i];

        while(p){
            Node *t=p;
            p=p->prox;
            free(t);
        }
    }

    free(vetor);
    free(visited);

    return 0;
}