#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b) {

    return (*(int*)b - *(int*)a); 

}

/////

int main() {

    int N;
    scanf("%d", &N);

    while (N--) {

        int M;

        scanf("%d", &M);

        int original[M], ordenado[M];

        for (int i = 0; i < M; i++) {

            scanf("%d", &original[i]);
            
            ordenado[i] = original[i];
        }

        // dec
        qsort(ordenado, M, sizeof(int), compare);

        int cont = 0;

        ////comp

        for (int i = 0; i < M; i++) {

            if (original[i] == ordenado[i]) {

                cont++;
            }
        }

        printf("%d\n", cont);

    }

    return 0;
}
