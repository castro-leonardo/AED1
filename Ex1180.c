#include <stdio.h>

int main () {
    int N, menor=1000;
    
    do{
        scanf("%i", &N);
    }while(N<1 || N>1000);

    int X[N];

    for(int i=0; i<N; i++){
        scanf("%i", &X[i]);
        if(X[i+1] < menor){
            menor=X[i];
        }
    }

    printf("%i\n", menor);

    return 0;
}