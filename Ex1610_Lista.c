///////// versao usando lista

#include <stdio.h>
#include <stdlib.h>

typedef struct no {
    int v;
    struct no* prox;
} No;

///var globais/// --- 0 vaz - 1 vis - 2 final

No* adj[10001];
int visitado[10001]; 
int terminado;

////

void aresta (int a, int b){ ///nao retorna nada

    No* novo = (No*)malloc(sizeof(No));

    novo->v = b;
    novo->prox = adj[a];

    adj[a] = novo;

}

void limpar(int n) {

    for (int i=1;i<=n;i++){

        No* temp = adj[i]; //var temporaria para adjacente

        while (temp != NULL) {

            No* auxiliar = temp;

            temp = temp->prox; //temp agr é proxima
            free(auxiliar);
        }

        adj[i] = NULL; //esvazia
        visitado[i] = 0; //limpa visitados
    }

}

void dfs(int a) {

    visitado[a] = 1; //ver oq ja foi

    No* temp = adj[a];

    while (temp != NULL) {

        int b = temp->v;

        if (visitado[b] == 1) {

            terminado = 1; //no nao terminado
            return;

        } if (visitado[b] == 0) { //se nao visitou ainda e faz a recursiva

            dfs(b);

            if (terminado){
                return;
            }
        }

        temp = temp->prox;
    }

    visitado[a] = 2; // 2- final
}

int main() {

    int T, N, M, A, B; ////N e M tem limitacoes >>conferir se afeta o judge

    //A e B pode ter dependencias repetidas

    if (scanf("%i", &T) == EOF) return 0;

    while (T--) {

        scanf("%i %i", &N, &M);

        //zerando tudo

        terminado = 0;

        for (int i=1; i<=N; i++) {
            adj[i] = NULL;
            visitado[i] = 0;
        }
//

        for (int i=0; i<M; i++) { //grafo

            scanf("%i %i", &A, &B);
            aresta(A, B);
        }

        for (int i = 1; i <= N; i++) {

            if (visitado[i] == 0) {
                dfs(i);

                if (terminado){
                    break;
                }
            }
        }

        if (terminado){
            printf("SIM\n");
        } else{
            printf("NAO\n");
        }

        limpar(N);
    }

    return 0;
}