#include <stdio.h>
 
int main() {
 
    double A, B, C, AREATR, AREACIRCLE, AREATRAP, AREAQUAD, AREARET;
    
    scanf("%lf", &A);
    scanf("%lf", &B);
    scanf("%lf", &C);
    
    AREATR = (A*C)/2;
    
    AREACIRCLE = 3.14159 * (C*C);
    
    AREATRAP = ((A+B)*C)/2;
    
    AREAQUAD = B*B;
    
    AREARET = A*B;
    
    printf("TRIANGULO: %.3lf\n", AREATR);
    printf("CIRCULO: %.3lf\n", AREACIRCLE);
    printf("TRAPEZIO: %.3lf\n", AREATRAP);
    printf("QUADRADO: %.3lf\n", AREAQUAD);
    printf("RETANGULO: %.3lf\n", AREARET);
 
    return 0;
}