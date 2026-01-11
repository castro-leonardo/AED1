#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

  int grafo[99][99];
  int T, X;
  int n, m, u, v;

  scanf("%i\n", &T);

  for(int i=0;i<T;i++){

    scanf("%i\n", &X);

    scanf("%i %i\n", &n, &m);

    memset(grafo, 0, sizeof(grafo)); //zerar

    for(int j=0; j<m;j++){

      scanf("%i %i\n", &u, &v);

      grafo[u][v] = 1;
      grafo[v][u] = 1;

    }

    int contador = 0;

    for(int j =0;j<n;j++){

      for(int k=j;k<n;k++){

        if(grafo[j][k] == 1) {

          contador++;
        }
      }
    }

    printf("%i\n", 2 * contador);
  }

  return 0;
}