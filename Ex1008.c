#include <stdio.h>
#include <string.h>
 
int main() {
    
    char NOME[100];
    double SALFIX, MONTANTE, TOTAL;
    
    fgets(NOME, sizeof(NOME), stdin);
    scanf("%lf", &SALFIX);
    scanf("%lf", &MONTANTE);
    
    TOTAL = (MONTANTE * 0.15) + SALFIX;
    
    printf("TOTAL = R$ %.2lf\n", TOTAL);
 
    return 0;
}