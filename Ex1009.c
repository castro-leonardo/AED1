#include <stdio.h>
 
int main() {
 
    int CodOne, CodTwo;
    int NumOne, NumTwo;
    float ValOne, ValTwo, TOTAL;
    
    scanf("%i", &CodOne);
    scanf("%i", &NumOne);
    scanf("%f", &ValOne);
    
    scanf("%i", &CodTwo);
    scanf("%i", &NumTwo);
    scanf("%f", &ValTwo);
    
    TOTAL = (NumOne * ValOne) + (NumTwo * ValTwo);
    
    printf("VALOR A PAGAR: R$ %.2f\n", TOTAL);
 
    return 0;
}