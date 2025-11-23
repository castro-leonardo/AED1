#include <stdio.h>
 
int main() {
 
    float SALARIO, VALOR;
    int NUMERO, HORAS;
    
    scanf("%i", &NUMERO);
    scanf("%i", &HORAS);
    scanf("%f", &VALOR);
    
    SALARIO = HORAS * VALOR;
    
    printf("NUMBER = %i\n", NUMERO);
    printf("SALARY = U$ %.2f\n", SALARIO);
    
    return 0;
}