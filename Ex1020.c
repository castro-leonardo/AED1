#include <stdio.h>
 
int main() {
 
    int dias, meses, anos;
    
    dias=meses=anos=0;
    
    scanf("%i", &dias);
    
    while(dias>=365){
        dias-=365;
        anos++;
    }
    
    while(dias>=30){
        dias-=30;
        meses++;
    }
    
    printf("%i ano(s)\n", anos);
    printf("%i mes(es)\n", meses);
    printf("%i dia(s)\n", dias);
 
    return 0;
}