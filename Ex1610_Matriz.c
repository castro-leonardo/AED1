////versao matriz

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

///var globais/// --- 0 vaz - 1 vis - 2 final

int adj[9999][9999];   // matriz de adjacência
int visitado[9999];
int terminado;
int N;

////

void aresta (int a, int b){ ///nao retorna nada
    adj[a][b] = 1;
}

void limpar(int n) {

    for (int i=1;i<=n;i++){

        for (int j=1;j<=n;j++){

            adj[i][j] = 0;
        }
        visitado[i] = 0;
    }
}

void dfs(int a) {

    visitado[a] = 1; //ver oq ja foi

    for (int b = 1; b <= N; b++) {

        if (adj[a][b]) {  // se existe aresta ab

            if (visitado[b] == 1) {

                terminado = 1;
                return;

            } if (visitado[b] == 0) {

                dfs(b);

                if (terminado){
                    return;
                }
            }
        }
    }

    visitado[a] = 2; // 2- final
}

int main() {

    int T, M, A, B;

    if (scanf("%i", &T) == EOF) return 0; //usando eof

    while (T--) {

        scanf("%i %i", &N, &M);

        terminado = 0;
        limpar(N);

        for (int i=0; i<M; i++) {
            scanf("%i %i", &A, &B);
            aresta(A, B);
        }

        for (int i=1;i<=N; i++) {

            if (visitado[i] == 0) {

                dfs(i);

                if (terminado){
                    break;
                }
            }
        }

        ////
        if (terminado){
            printf("SIM\n");
        } else{
            printf("NAO\n");
        }
    }

    return 0;
}
