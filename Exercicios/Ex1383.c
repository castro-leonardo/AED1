#include <stdio.h>

int validade(int m[9][9]){

    int i, j, k, l, n;
    int matriz[10];

    for (i=0; i<9; i++) {

        for (k=1; k<=9; k++) matriz[k] = 0;

        for (j=0; j<9; j++) {
            int v = m[i][j];
            if (v<1||v>9 ||matriz[v]) return 0;
            matriz[v] = 1;
        }
    }

    for (j=0; j<9; j++) {

        for (k=1; k<=9; k++) matriz[k] = 0;
        for (i=0; i<9; i++) {
            int v = m[i][j];
            if (v<1|| v>9 || matriz[v]) return 0;
            matriz[v] = 1;
        }
    }

    for (l=0; l<9; l+=3) {

        for (n=0; n<9; n+=3) {

            for (k=1; k<=9; k++) matriz[k] = 0;
            for (i=l; i<l+3; i++) {

                for (j=n; j<n + 3; j++) {
                    int v=m[i][j];
                    if (v<1||v>9||matriz[v]) return 0;
                    matriz[v] = 1;
                }
            }
        }
    }

    return 1;

}

int main(){
    int n, instancia = 1, i, j;
    int m[9][9];
    scanf("%i", &n);

    while(n--){

        for (i=0; i<9; i++) {

            for (j=0; j<9; j++) {
                scanf("%i", &m[i][j]);
            }
        }

        printf("Instancia %d\n", instancia++);

        if (validade(m)){
            printf("SIM\n\n");
        }else{
            printf("NAO\n\n");
        }

    }

    return 0;
}