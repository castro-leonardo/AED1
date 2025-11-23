#include <stdio.h>
 
int main() {
 
    int N, Number, N100, N50, N20, N10, N5, N2, N1;
    
    N100=N50=N20=N10=N5=N2=N1=0;
    
    do{
    scanf("%i", &N);
    }while(N<0||N>1000000);
    
    Number = N;
    
    while (N>=100){
        N-=100;
        N100++;
    }
    
    while (N>=50){
        N-=50;
        N50++;
    }
    
    while (N>=20){
        N-=20;
        N20++;
    }
    
    while (N>=10){
        N-=10;
        N10++;
    }
    
    while (N>=5){
        N-=5;
        N5++;
    }
    
    while (N>=2){
        N-=2;
        N2++;
    }
    
    while (N>=1){
        N-=1;
        N1++;
    }
    
    printf("%i\n", Number);
    printf("%i nota(s) de R$ 100,00\n", N100);
    printf("%i nota(s) de R$ 50,00\n", N50);
    printf("%i nota(s) de R$ 20,00\n", N20);
    printf("%i nota(s) de R$ 10,00\n", N10);
    printf("%i nota(s) de R$ 5,00\n", N5);
    printf("%i nota(s) de R$ 2,00\n", N2);
    printf("%i nota(s) de R$ 1,00\n", N1);
 
    return 0;
}