#include <stdio.h>

int main () {
    int N, menor=1000;
    
    do{
        scanf("%i", &N);
    }while(N<1 || N>1000);

    int X[N];

    for(int i=0; i<N; i++){
        scanf("%i", &X[i+1]);
        if(X[i+1] < menor){
            menor=X[i+1];""
        }
    }

    printf("%i", menor);

    return 0;
}