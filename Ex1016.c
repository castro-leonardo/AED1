#include <stdio.h>
 
int main() {
 
    int Horas, Vm;
    float Gasto;
    
    scanf("%i", &Horas);
    scanf("%i", &Vm);
    
    Gasto = (Vm * Horas)/12.0;
    
    printf("%.3f\n", Gasto);
 
    return 0;
}