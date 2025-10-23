// beecrowd 2006

#include <stdio.h>

int main (){
    int tipo, contador, res[5];

    do{

    scanf("%i", &tipo);

    }while(tipo < 1 || tipo > 4);

    for(int i=0;i<5;i++){

        do{
        scanf("%i", &res[i+1]);
        }while(res[i+1] < 1 || res[i+1] > 40);

        if(res[i+1] == tipo){
            contador++;
        }
    }

    printf("%i\n", contador);

    return 0;
}