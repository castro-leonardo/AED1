#include <stdio.h>
 
int main() {
 
    int N, H, M;
    
    N=H=M=0;
    
    scanf("%i", &N);
    
    while(N>=3600){
        N-=3600;
        H++;
    }
    
    while(N>=60){
        N-=60;
        M++;
    }
    
    printf("%i:%i:%i\n", H, M, N);
 
    return 0;
}