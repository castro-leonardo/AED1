//para esse exercicio eu tinha usado a ajuda de uma resolucao que vi dele, imagino que isso tenha causado a similaridade
//estou refazendo ele do zero

#include <stdio.h>
#include <stdlib.h>

int comparar(const void *a, const void *b){

    return (*(int*)b - *(int*)a); //retorna o que foi comparado 

}

int main(){
    int N, M;

    int comeco[1000], ordenado[1000];

///////////////

    scanf("%i", &N);

    for (int i=0;i<N;i++){

        scanf("%i", &M); //inicio de cada teste

        for (int j=0;j<M ;j++){

            scanf("%i", &comeco[j]); // era pra ser i-esimo mas fica como j-esimo
            ordenado[j] = comeco[j]; //
        }

        qsort(ordenado,M,sizeof(int),comparar); //uso do qsort, chama a funcao

        int contador = 0;

        for (int j=0;j<M;j++){

            if (comeco[j] == ordenado[j]){ //compara como estava no comeco e como ficou apos ser ordenado para saber
                contador++;                //quais nn precisaram trocar
            }
        }

        printf("%i\n", contador); //printf dentro do for 
    }

    return 0;
}