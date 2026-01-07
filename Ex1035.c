#include <stdio.h>
#include <stdlib.h>

int main(){
    int A, B, C, D, SOMA1, SOMA2;

    scanf("%i" "%i" "%i" "%i", &A, &B, &C, &D);

    SOMA1 = C+D;
    SOMA2 = A+B;

    if(B>C && D>A && SOMA1>SOMA2 && C>=0 && D>=0 && A%2 == 0){
        printf("Valores aceitos");
    } else {
        printf("Valores nao aceitos");
    }

    return 0;
}