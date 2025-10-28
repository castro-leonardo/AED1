#include <stdio.h>
#include <string.h>

int main() {

    int N;
    char linha[1000];

    scanf("%i", &N);
    getchar();

    while (N--) {

        fgets(linha, sizeof(linha), stdin);

        int pilha = 0;    
        int diamantes = 0;

        for (int i = 0; i < strlen(linha); i++) {
            if (linha[i] == '<') {
                pilha++;
            } else if (linha[i] == '>') {
                if (pilha > 0) {
                    pilha--;
                    diamantes++;
                }
            }
        }

        printf("%i\n", diamantes);
    }

    return 0;
}