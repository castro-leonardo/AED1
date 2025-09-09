#include <stdio.h>
#include <stdlib.h>

int main() {
    int N;
    scanf("%i", &N);

    int *X = (int *) malloc(N * sizeof(int));

    for (int i = 0; i < N; i++) {
        scanf("%i", (X + i));
    }

    int i, menor = *X;
    int posicao = 0;

    for (i = 1; i < N; i++) {
        if (*(X + i) < menor) {
            menor = *(X + i);
            posicao = i;
        }
    }

    printf("Menor valor: %i\n", menor);
    printf("Posicao: %i\n", posicao);

    free(X);

    return 0;
}