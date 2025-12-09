#include <stdio.h>
#include <string.h>

int main() {
    char s[210];

    /////
    int dur[128];

    dur['W'] = 64;
    dur['H'] = 32;
    dur['Q'] = 16;
    dur['E'] = 8;
    dur['S'] = 4;
    dur['T'] = 2;
    dur['X'] = 1;

    while (1) {

        scanf("%s", s);

        if (s[0] == '*') break;

        int totalCorretos = 0;
        int soma = 0;

        for (int i = 1; s[i] != '\0'; i++) {

            if (s[i] == '/') {

                if (soma == 64) totalCorretos++;

                soma = 0; 
            } else {

                soma += dur[(int)s[i]];
            }
            
        }

        printf("%d\n", totalCorretos);
    }

    return 0;
}
