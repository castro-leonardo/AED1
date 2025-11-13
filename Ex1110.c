#include <stdio.h>

int main() {
    int n;

    do {

    scanf("%i", &n);
    if (n == 0) break;
    
    } while (n != 0);

        int fila[50]; 
        int frente = 0, tras = 0;

        for (int i = 1; i <= n; i++) {
            fila[tras++] = i;
        }

        printf("Discarded cards:");
        int primeira = 1;

        // + de uma carte
        while (tras - frente > 1) {
            
            if (!primeira) printf(",");
            
            printf(" %d", fila[frente]);
            primeira = 0;

            frente++;

            ////////
            fila[tras++] = fila[frente];
            frente++;
        }

        printf("\nRemaining card: %d\n", fila[frente]);
    }

    return 0;
}
