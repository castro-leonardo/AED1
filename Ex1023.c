#include <string.h>
#include <stdio.h>
#include <math.h>

int main(){

    double consuMedio;
    
    int T=0;
    int N, X, Y, totaldeX=0, totaldeY=0, prim, consumido[201];

    while(scanf("%i", &N)){

        if(!N) break;

        if(T){
            printf("\n");
        }

        memset(consumido, 0, sizeof(consumido)); //zerar tudo na memoria

        for (int i=0; i<N;i++){
            
            scanf("%i %i", &X, &Y);

            totaldeX += X;
            totaldeY += Y;

            consumido[Y / X] += X;
        }

        printf("Cidade# %d:\n", ++T);

        prim = 1;

        for (int i=0; i<201;i++){
            if(consumido[i] > 0){
                if (prim){
                    prim = 0;
                }else{
                    printf(" ");
                }

                printf("%i-%i", consumido[i], i);
            }
        }

        consuMedio = ((100 * totaldeY) / totaldeX) / 100.00;

        printf("\nConsumo medio: %.2lf m3.\n", consuMedio);

        
    }

    return 0;
}